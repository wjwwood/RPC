/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************
 * 
 * @file MultithreadTestClientExample.cxx
 * This source file shows a simple example of how to create a proxy for an interface.
 *
 * This file was generated by the tool rpcddsgen.
 */

#include "MultithreadTestProxy.h"
#include "MultithreadTestDDSProtocol.h"
#include "transports/dds/UDPProxyTransport.h"
#include "exceptions/Exceptions.h"
#include "MultithreadTestRequestReplyPlugin.h"

#include "boost/config/user.hpp"
#include "boost/thread.hpp"

using namespace eprosima::rpcdds;
using namespace ::exception;
using namespace ::transport::dds;
using namespace ::protocol::dds;

static boost::thread thread1, thread2, thread3, thread4;
static MultithreadTestProtocol *proto = NULL;
static UDPProxyTransport *transp = NULL;
static MultithreadTestProxy *prox = NULL;
static int run = 0;

void* executeThread(int threadNum)
{
    const char* const METHOD_NAME = "executeThread";
    char filename[50], fileLine[255];
    FILE *file = NULL;
    int count = 0;

#if defined(_WIN32)
    _snprintf(filename, 50, "Thread%d.txt", threadNum);
#elif defined(__linux)
    snprintf(filename, 50, "Thread%d.txt", threadNum);
#endif
    file = fopen(filename, "w");

    if(file != NULL)
    {
        // Wait until start.
        while(!run)
        {
            boost::this_thread::sleep(boost::posix_time::seconds(1));
        }

        for(; count < 200; ++count)
        {
            Dato dato1;
            Dato dato2;
            DDS_Long  test_ret = 0;       

            Dato_initialize(&dato1);
            Dato_initialize(&dato2);

            dato1.count = count;

            try
            {
                test_ret =  prox->test(dato1 ,dato2);
#if defined(_WIN32)
                _snprintf(fileLine, 255, "Received (%d)\n", count);
#elif defined(__linux)
                snprintf(fileLine, 255, "Received (%d)\n", count);
#endif
                fwrite(fileLine, strlen(fileLine), 1, file);
            }
            catch(Exception &ex)
            {
#if defined(RTI_WIN32)
                _snprintf(fileLine, 255, "Error in operation (%d). %s\n", count, ex.what());
#elif defined(RTI_LINUX)
                snprintf(fileLine, 255, "Error in operation (%d). %s\n", count, ex.what());
#endif
                fwrite(fileLine, strlen(fileLine), 1, file);
            }

            Dato_finalize(&dato1);
            Dato_finalize(&dato2);
        }

        fclose(file);
    }
    else
    {
        std::cout << "ERROR<%s>: Cannot open file to log" <<  METHOD_NAME << std::endl;
    }

    return NULL;
}

int checkFiles()
{
    char filename[50];
    FILE *file = NULL;
    int returnedValue = 0, number = 0;

    for(int i = 1; i <= 4; ++i)
    {
#if defined(RTI_WIN32)
        _snprintf(filename, 50, "Thread%d.txt", i);
#elif defined(RTI_LINUX)
        snprintf(filename, 50, "Thread%d.txt", i);
#endif
        file = fopen(filename, "r");

        if(file != NULL)
        {
            for(int count = 0; count < 200; ++count)
            {
                fscanf(file, "Received (%d)\n", &number);

                if(number != count)
                    returnedValue = -1;
            }

            fclose(file);
        }
        else
        {
            returnedValue = -1;
        }
    }

    return returnedValue;
}

int createThreads()
{
    int returnedValue = -1;

    thread1 = boost::thread(executeThread, 1);
    thread2 = boost::thread(executeThread, 2);
    thread3 = boost::thread(executeThread, 3);
    thread4 = boost::thread(executeThread, 4);
    returnedValue = 0;

    return returnedValue;
}

int main(int argc, char **argv)
{
    const char* const METHOD_NAME = "main";

    proto = new MultithreadTestProtocol();
    transp = new UDPProxyTransport("MultithreadTestService");
    prox = new MultithreadTestProxy(*transp, *proto);

    if(prox != NULL)
    {
        // Create threads
        if(createThreads() == 0)
        {
            run = 1;
        }

        thread1.join();
        thread2.join();
        thread3.join();
        thread4.join();
        run = 0;

        if(checkFiles() != 0)
        {
            std::cout << "TEST FAILED" << std::endl;
            _exit(-1);
        }
    }
    else
    {
        std::cout << "ERROR<%s>: Cannot create proxy" << METHOD_NAME << std::endl;
    }

    std::cout << "TEST SUCCESFULLY" << std::endl;

    delete prox;
    delete transp;
    delete proto;

    _exit(0);
    return 0;
}

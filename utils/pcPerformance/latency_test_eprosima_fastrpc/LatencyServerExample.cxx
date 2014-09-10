/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This generated file is licensed to you under the terms described in the
 * fastrpc_LICENSE file included in this fastrpc distribution.
 *
 *************************************************************************
 * 
 * @file LatencyServerExample.cxx
 * This source file shows a simple example of how to create a server for an interface.
 *
 * This file was generated by the tool fastrpcgen.
 */

#include "LatencyServer.h"
#include "fastrpc/strategies/ThreadPoolStrategy.h"
#include "LatencyCDRProtocol.h"
#include "fastrpc/transports/TCPServerTransport.h"
#include "fastrpc/exceptions/Exceptions.h"
#include "fastrpc/utils/Utilities.h"
#include "LatencyServerImplExample.h"

#include <iostream>

using namespace eprosima::rpc;
using namespace ::exception;
using namespace ::strategy;
using namespace ::transport;
using namespace ::protocol::fastcdr;

int main(int argc, char **argv)
{
    unsigned int threadPoolSize = 5;
    ThreadPoolStrategy *pool = NULL;
    LatencyProtocol *protocol = NULL;
    TCPServerTransport *transport = NULL;
    LatencyServer *server = NULL;
    LatencyServerImplExample servant;
    
    // Create and initialize the server for interface "Latency".
    try
    {
        pool = new ThreadPoolStrategy(threadPoolSize);
        protocol = new LatencyProtocol();
        transport = new TCPServerTransport("127.0.0.1:8080");
        server = new LatencyServer(*pool, *transport, *protocol, servant);
        server->serve();
    }
    catch(InitializeException &ex)
    {
        std::cout << ex.what() << std::endl;
        return -1;
    }
    
    while(1)
    {
        eprosima::rpc::sleep(10000);
    }
    
    // Stop and delete the server.
    server->stop();
    delete server;
    delete protocol;
    delete transport;
    delete pool;
    
    return 0;
}




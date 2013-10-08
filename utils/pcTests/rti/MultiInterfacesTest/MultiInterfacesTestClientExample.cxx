/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************
 * 
 * @file MultiInterfacesTestClientExample.cxx
 * This source file shows a simple example of how to create a proxy for an interface.
 *
 * This file was generated by the tool rpcddsgen.
 */

#include "MultiInterfacesTestProxy.h"
#include "MultiInterfacesTestDDSProtocol.h"
#include "transports/dds/UDPProxyTransport.h"
#include "exceptions/Exceptions.h"
#include "MultiInterfacesTestRequestReplyPlugin.h"

#include <iostream>

using namespace eprosima::rpcdds;
using namespace ::exception;
using namespace ::transport::dds;
using namespace ::protocol::dds;

int main(int argc, char **argv)
{
    MultiInterfacesTestProtocol *protocol = NULL;
    UDPProxyTransport *transport = NULL;
    BasicTypes::BasicTypeTestProxy *basicproxy = NULL;
    
    // Creation of the proxy for interface "BasicTypes::BasicTypeTest".
    try
    {
        protocol = new MultiInterfacesTestProtocol();
        transport = new UDPProxyTransport("MultiInterfacesTestService");
        basicproxy = new BasicTypes::BasicTypeTestProxy(*transport, *protocol);
    }
    catch(InitializeException &ex)
    {
        std::cout << ex.what() << std::endl;
        return -1;
    }

    DDS_Octet  oc1 = 1;    
    DDS_Octet  oc2 = 2;    
    DDS_Octet  oc3 = 0;    
    DDS_Octet  getOctetRetValue = 0;       

    try
    {
        getOctetRetValue = basicproxy->getOctet(oc1, oc2, oc3);

        if(oc3 != 2 ||
                getOctetRetValue != 1 ||
                oc2 != 3 ||
                oc1 != 1)
        {
            std::cout << "TEST FAILED<getOctet>: Wrong values" << std::endl;
            _exit(-1);
        }
    }
    catch(SystemException &ex)
    {
        std::cout << "TEST FAILED<getOctet>: " << ex.what() << std::endl;
        _exit(-1);
    }

    DDS_Char  ch1 = 1;       
    DDS_Char  ch2 = 2;       
    DDS_Char  ch3 = 0;    
    DDS_Char  getCharRetValue = 0;       

    try
    {
        getCharRetValue = basicproxy->getChar(ch1, ch2, ch3);   

        if(ch3 != 2 ||
                getCharRetValue != 1 ||
                ch2 != 3 ||
                ch1 != 1)
        {
            std::cout << "TEST FAILED<getChar>: Wrong values" << std::endl;
            _exit(-1);
        }
    }
    catch(SystemException &ex)
    {
        std::cout << "TEST FAILED<getChar>: " << ex.what() << std::endl;
        _exit(-1);
    }

    DDS_Wchar  wch1 = 1;       
    DDS_Wchar  wch2 = 2;       
    DDS_Wchar  wch3 = 0; 
    DDS_Wchar  getWCharRetValue = 0;       

    try
    {
        getWCharRetValue = basicproxy->getWChar(wch1, wch2, wch3);

        if(wch3 != 2 ||
                getWCharRetValue != 1 ||
                wch2 != 3 ||
                wch1 != 1)
        {
            std::cout << "TEST FAILED<getWChar>: Wrong values" << std::endl;
            _exit(-1);
        }
    }
    catch(SystemException &ex)
    {
        std::cout << "TEST FAILED<getWChar>: " << ex.what() << std::endl;
        _exit(-1);
    }

    DDS_Short  sh1 = 1;       
    DDS_Short  sh2 = 2;       
    DDS_Short  sh3 = 0;    
    DDS_Short  getShortRetValue = 0;       

    try
    {
        getShortRetValue = basicproxy->getShort(sh1, sh2, sh3);

        if(sh3 != 2 ||
                getShortRetValue != 1 ||
                sh2 != 3 ||
                sh1 != 1)
        {
            std::cout << "TEST FAILED<getShort>: Wrong values" << std::endl;
            _exit(-1);
        }
    }
    catch(SystemException &ex)
    {
        std::cout << "TEST FAILED<getShort>: " << ex.what() << std::endl;
        _exit(-1);
    }

    DDS_UnsignedShort  ush1 = 1;       
    DDS_UnsignedShort  ush2 = 2;       
    DDS_UnsignedShort  ush3 = 0;    
    DDS_UnsignedShort  getUShortRetValue = 0;       

    try
    {
        getUShortRetValue = basicproxy->getUShort(ush1, ush2, ush3);

        if(ush3 != 2 ||
                getUShortRetValue != 1 ||
                ush2 != 3 ||
                ush1 != 1)
        {
            std::cout << "TEST FAILED<getUShort>: Wrong values" << std::endl;
            _exit(-1);
        }
    }
    catch(SystemException &ex)
    {
        std::cout << "TEST FAILED<getUShort>: " << ex.what() << std::endl;
        _exit(-1);
    }

    DDS_Long  lo1 = 1;       
    DDS_Long  lo2 = 2;       
    DDS_Long  lo3 = 0;    
    DDS_Long  getLongRetValue = 0;       

    try
    {
        getLongRetValue = basicproxy->getLong(lo1, lo2, lo3);

        if(lo3 != 2 ||
                getLongRetValue != 1 ||
                lo2 != 3 ||
                lo1 != 1)
        {
            std::cout << "TEST FAILED<getLong>: Wrong values" << std::endl;
            _exit(-1);
        }
    }
    catch(SystemException &ex)
    {
        std::cout << "TEST FAILED<getLong>: " << ex.what() << std::endl;
        _exit(-1);
    }

    DDS_UnsignedLong  ulo1 = 1;       
    DDS_UnsignedLong  ulo2 = 2;       
    DDS_UnsignedLong  ulo3 = 0;    
    DDS_UnsignedLong  getULongRetValue = 0;       

    try
    {
        getULongRetValue = basicproxy->getULong(ulo1, ulo2, ulo3);

        if(ulo3 != 2 ||
                getULongRetValue != 1 ||
                ulo2 != 3 ||
                ulo1 != 1)
        {
            std::cout << "TEST FAILED<getULong>: Wrong values" << std::endl;
            _exit(-1);
        }
    }
    catch(SystemException &ex)
    {
        std::cout << "TEST FAILED<getULong>: " << ex.what() << std::endl;
        _exit(-1);
    }

    DDS_LongLong  llo1 = 1;       
    DDS_LongLong  llo2 = 2;       
    DDS_LongLong  llo3 = 0;    
    DDS_LongLong  getLLongRetValue = 0;       

    try
    {
        getLLongRetValue = basicproxy->getLLong(llo1, llo2, llo3);

        if(llo3 != 2 ||
                getLLongRetValue != 1 ||
                llo2 != 3 ||
                llo1 != 1)
        {
            std::cout << "TEST FAILED<getLLong>: Wrong values" << std::endl;
            _exit(-1);
        }
    }
    catch(SystemException &ex)
    {
        std::cout << "TEST FAILED<getLLong>: " << ex.what() << std::endl;
        _exit(-1);
    }

    DDS_UnsignedLongLong  ullo1 = 1;       
    DDS_UnsignedLongLong  ullo2 = 2;       
    DDS_UnsignedLongLong  ullo3 = 0;    
    DDS_UnsignedLongLong  getULLongRetValue = 0;       

    try
    {
        getULLongRetValue = basicproxy->getULLong(ullo1, ullo2, ullo3);

        if(ullo3 != 2 ||
                getULLongRetValue != 1 ||
                ullo2 != 3 ||
                ullo1 != 1)
        {
            std::cout << "TEST FAILED<getULLong>: Wrong values" << std::endl;
            _exit(-1);
        }
    }
    catch(SystemException &ex)
    {
        std::cout << "TEST FAILED<getULLong>: " << ex.what() << std::endl;
        _exit(-1);
    }

    DDS_Float  fl1 = 1.0;       
    DDS_Float  fl2 = 2.0;       
    DDS_Float  fl3 = 0;    
    DDS_Float  getFloatRetValue = 0;       

    try
    {
        getFloatRetValue = basicproxy->getFloat(fl1, fl2, fl3);

        if(fl3 != 2.0 ||
                getFloatRetValue != 1.0 ||
                fl2 != 3.0 ||
                fl1 != 1.0)
        {
            std::cout << "TEST FAILED<getFloat>: Wrong values" << std::endl;
            _exit(-1);
        }
    }
    catch(SystemException &ex)
    {
        std::cout << "TEST FAILED<getFloat>: " << ex.what() << std::endl;
        _exit(-1);
    }

    DDS_Double  do1 = 1.0;       
    DDS_Double  do2 = 2.0;       
    DDS_Double  do3 = 0;    
    DDS_Double  getDoubleRetValue = 0;       

    try
    {
        getDoubleRetValue = basicproxy->getDouble(do1, do2, do3);

        if(do3 != 2.0 ||
                getDoubleRetValue != 1.0 ||
                do2 != 3.0 ||
                do1 != 1.0)
        {
            std::cout << "TEST FAILED<getDouble>: Wrong values" << std::endl;
            _exit(-1);
        }
    }
    catch(SystemException &ex)
    {
        std::cout << "TEST FAILED<getDouble>:  " << ex.what() << std::endl;
        _exit(-1);
    }

    DDS_Boolean  bo1 = RTI_TRUE;       
    DDS_Boolean  bo2 = RTI_FALSE;       
    DDS_Boolean  bo3 = RTI_FALSE;    
    DDS_Boolean  getBooleanRetValue = RTI_FALSE;       

    try
    {
        getBooleanRetValue = basicproxy->getBoolean(bo1, bo2, bo3);

        if(bo3 != RTI_FALSE ||
                getBooleanRetValue != RTI_TRUE ||
                bo2 != RTI_TRUE ||
                bo1 != RTI_TRUE)
        {
            std::cout << "TEST FAILED<getBoolean>: Wrong values" << std::endl;
            _exit(-1);
        }
    }
    catch(SystemException &ex)
    {
        std::cout << "TEST FAILED<getBoolean>: " << ex.what() << std::endl;
        _exit(-1);
    }

    delete basicproxy;

    Struct::StructTestProxy *structproxy = new Struct::StructTestProxy(*transport, *protocol);
    
    Struct::Envio ev;
    Struct::Recepcion duplicate_ret;

    Struct::Envio_initialize(&ev);    
    Struct::Recepcion_initialize(&duplicate_ret);    
        
    ev.dato = 10;
    ev.message = DDS_String_dup("HOLA");

    try
    {
        duplicate_ret = structproxy->duplicate(ev);

        if(duplicate_ret.devolucion != 10 ||
                strcmp(duplicate_ret.message, "HOLA") != 0 ||
                ev.dato != 10 ||
                strcmp(ev.message, "HOLA") != 0)
        {
            std::cout << "TEST FAILED<duplicate>: Wrong values" << std::endl;
            _exit(-1);
        }
    }
    catch(SystemException &ex)
    {
        std::cout << "TEST FAILED<duplicate>: " << ex.what() << std::endl;
        _exit(-1);
    }

    Struct::Envio_finalize(&ev);    
    Struct::Recepcion_finalize(&duplicate_ret);    

    Struct::Envio ev1;    
    Struct::Envio ev2;       
    Struct::Recepcion suma_ret;

    Struct::Envio_initialize(&ev1);    
    Struct::Envio_initialize(&ev2);    
    Struct::Recepcion_initialize(&suma_ret);  

	ev1.dato = 10;
	ev1.message = DDS_String_dup("HOLA");
	ev2.dato = 20;
	ev2.message = DDS_String_dup("ADIOS");

    try
    {
        suma_ret = structproxy->suma(ev1, ev2);

        if(suma_ret.devolucion != 30 ||
                strcmp(suma_ret.message, "HOLAADIOS") != 0 ||
                ev1.dato != 10 ||
                strcmp(ev1.message, "HOLA") != 0 ||
                ev2.dato != 20 ||
                strcmp(ev2.message, "ADIOS") != 0)
        {
            std::cout << "TEST FAILED<suma>: Wrong values" << std::endl;
            _exit(-1);
        }
    }
    catch(SystemException &ex)
    {
        std::cout << "TEST FAILED<suma>: " << ex.what() << std::endl;
        _exit(-1);
    }

    Struct::Envio_finalize(&ev1);    
    Struct::Envio_finalize(&ev2);    
    Struct::Recepcion_finalize(&suma_ret);    

    std::cout << "TEST SUCCESFULLY" << std::endl;

	delete structproxy;
    delete protocol;
    delete transport;
   
    return 0;
}

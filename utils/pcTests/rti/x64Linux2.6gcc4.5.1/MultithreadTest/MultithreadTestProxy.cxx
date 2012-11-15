/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */


#include "MultithreadTestProxy.h"
#include "client/ClientRPC.h"
#include "transports/UDPTransport.h"
#include "transports/TCPTransport.h"
#include "MultithreadTestRequestReplyPlugin.h"
#include "MultithreadTestAsyncSupport.h"
#include "exceptions/Exceptions.h"

MultithreadTestProxy::MultithreadTestProxy(std::string remoteServiceName, int domainId, long timeout) :
    Client(remoteServiceName, NULL, domainId, timeout)
{
    createRPCs();
}

MultithreadTestProxy::MultithreadTestProxy(std::string remoteServiceName, eProsima::DDSRPC::Transport *transport, int domainId, long timeout) :
    Client(remoteServiceName, transport, domainId, timeout)
{
    createRPCs();
}

MultithreadTestProxy::~MultithreadTestProxy()
{
    delete test_Service;
}

void MultithreadTestProxy::createRPCs()
{
    this->test_Service = new MultithreadTest_testClientRPC("test",
                                  MultithreadTest_testRequestUtils::registerType(getParticipant()),
                                  MultithreadTest_testReplyUtils::registerType(getParticipant()),
                                  this);

}

 
DDS_Long MultithreadTestProxy::test(/*in*/ const Dato& dato1, /*out*/ Dato& dato2) 
{
    eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_INTERNAL_ERROR;
    DDS_Long  test_ret = 0;    
    MultithreadTest_testRequest instance;
    MultithreadTest_testReply retInstance;

    MultithreadTest_testReply_initialize(&retInstance);    
    MultithreadTest_testRequestUtils::setTypeData(instance, dato1);
    retcode = test_Service->execute(&instance, &retInstance, getTimeout());
    
    if(retcode == eProsima::DDSRPC::OPERATION_SUCCESSFUL)
    {
        MultithreadTest_testReplyUtils::extractTypeData(retInstance, retcode, dato2, test_ret);  
    }
    
    switch (retcode)
    {
        case eProsima::DDSRPC::CLIENT_INTERNAL_ERROR:
            throw eProsima::DDSRPC::ClientInternalException("Error in client side");
            break;
        case eProsima::DDSRPC::SERVER_TIMEOUT:
            throw eProsima::DDSRPC::ServerTimeoutException("Timeout waiting the server's reply");
            break;
        case eProsima::DDSRPC::SERVER_INTERNAL_ERROR:
            throw eProsima::DDSRPC::ServerInternalException(retInstance.header.ddsrpcRetMsg);
            break;
        case eProsima::DDSRPC::NO_SERVER:
            throw eProsima::DDSRPC::ServerNotFoundException("Cannot connect to the server");
            break;
    };
    

    return test_ret;
}

 
void MultithreadTestProxy::test_async(MultithreadTest_testCallbackHandler &obj, /*in*/ const Dato& dato1) 
{
	eProsima::DDSRPC::ReturnMessage retcode = eProsima::DDSRPC::CLIENT_INTERNAL_ERROR;
    MultithreadTest_testRequest instance;
    MultithreadTest_testTask *task = NULL;
    MultithreadTest_testRequestUtils::setTypeData(instance, dato1);
    task = new MultithreadTest_testTask(obj, this);
    retcode = test_Service->executeAsync(&instance, task, getTimeout());
    
    switch (retcode)
    {
        case eProsima::DDSRPC::CLIENT_INTERNAL_ERROR:
            throw eProsima::DDSRPC::ClientInternalException("Error in client side");
            break;
        case eProsima::DDSRPC::NO_SERVER:
             throw eProsima::DDSRPC::ServerNotFoundException("Cannot connect to the server");
             break;
    }
}
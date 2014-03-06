/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This generated file is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this RPCDDS distribution.
 *
 *************************************************************************
 * 
 * @file CalculatorServer.cxx
 * This source file contains the definition of the server for all interfaces.
 *
 * This file was generated by the tool rpcddsgen.
 */

#include "CalculatorServer.h"
#include "rpcdds/strategies/ServerStrategy.h"
#include "rpcdds/transports/ServerTransport.h"
#include "CalculatorProtocol.h"
#include "rpcdds/exceptions/ServerInternalException.h"

CalculatorServer::CalculatorServer(eprosima::rpcdds::strategy::ServerStrategy &strategy, eprosima::rpcdds::transport::ServerTransport &transport,
            eprosima::rpcdds::protocol::CalculatorProtocol &protocol, CalculatorServerImpl &servant) :
    Server(strategy, transport, protocol), _impl(servant)
{
   protocol.activateInterface("Calculator");
   protocol.linkCalculatorImpl(servant);
}

CalculatorServer::~CalculatorServer()
{
    //TODO Unlink an deactivate.
}

/*void CalculatorServer::addition(eProsima::RPCDDS::Server *server, void *requestData, eProsima::RPCDDS::ServerRPC *service)
{ 
    CalculatorServer *srv = dynamic_cast<CalculatorServer*>(server);
    DDS_Long  value1 = 0;
    DDS_Long  value2 = 0;
    DDS_Long  addition_ret = 0;   
    Calculator_additionReply replyData;
    

    Calculator_additionRequestUtils::extractTypeData(*(Calculator_additionRequest*)requestData, value1, value2);

    try
    {
        addition_ret = srv->_impl.addition(value1, value2);

        Calculator_additionReplyUtils::setTypeData(replyData, addition_ret);
        replyData.header.rpcddsRetCode = eProsima::RPCDDS::OPERATION_SUCCESSFUL;
        replyData.header.rpcddsRetMsg = (char*)"";

        service->sendReply(requestData, &replyData);
    }
    catch(const eProsima::RPCDDS::ServerInternalException &ex)
    {
        memset((char*)&replyData + sizeof(replyData.header), 0, sizeof(replyData) - sizeof(replyData.header));
        replyData.header.rpcddsRetCode = eProsima::RPCDDS::SERVER_INTERNAL_ERROR;
        replyData.header.rpcddsRetMsg = (char*)ex.what();
        
        service->sendReply(requestData, &replyData);
    }
    
    Calculator_additionRequestTypeSupport::delete_data((Calculator_additionRequest*)requestData);
    
}*/

/*void CalculatorServer::subtraction(eProsima::RPCDDS::Server *server, void *requestData, eProsima::RPCDDS::ServerRPC *service)
{ 
    CalculatorServer *srv = dynamic_cast<CalculatorServer*>(server);
    DDS_Long  value1 = 0;
    DDS_Long  value2 = 0;
    DDS_Long  subtraction_ret = 0;   
    Calculator_subtractionReply replyData;
    

    Calculator_subtractionRequestUtils::extractTypeData(*(Calculator_subtractionRequest*)requestData, value1, value2);

    try
    {
        subtraction_ret = srv->_impl.subtraction(value1, value2);

        Calculator_subtractionReplyUtils::setTypeData(replyData, subtraction_ret);
        replyData.header.rpcddsRetCode = eProsima::RPCDDS::OPERATION_SUCCESSFUL;
        replyData.header.rpcddsRetMsg = (char*)"";

        service->sendReply(requestData, &replyData);
    }
    catch(const eProsima::RPCDDS::ServerInternalException &ex)
    {
        memset((char*)&replyData + sizeof(replyData.header), 0, sizeof(replyData) - sizeof(replyData.header));
        replyData.header.rpcddsRetCode = eProsima::RPCDDS::SERVER_INTERNAL_ERROR;
        replyData.header.rpcddsRetMsg = (char*)ex.what();
        
        service->sendReply(requestData, &replyData);
    }
    
    Calculator_subtractionRequestTypeSupport::delete_data((Calculator_subtractionRequest*)requestData);
    
}*/

/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This generated file is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this FASTRPC distribution.
 *
 *************************************************************************
 * 
 * @file CalculatorProxy.cxx
 * This source file contains the definition of the proxy for all interfaces.
 *
 * This file was generated by the tool fastrpcgen.
 */

#include "CalculatorProxy.h"
#include "fastrpc/transports/ProxyTransport.h"
#include "CalculatorProtocol.h"

CalculatorProxy::CalculatorProxy(eprosima::fastrpc::transport::ProxyTransport &transport,
    eprosima::fastrpc::protocol::CalculatorProtocol &protocol) : Proxy(transport, protocol)
{
    protocol.activateInterface("Calculator");
}

CalculatorProxy::~CalculatorProxy()
{
}

int32_t CalculatorProxy::addition(/*in*/ int32_t value1, /*in*/ int32_t value2)
{
    int32_t addition_ret =
    dynamic_cast<eprosima::fastrpc::protocol::CalculatorProtocol&>(getProtocol()).Calculator_addition(value1, value2);
    return addition_ret;
}

void CalculatorProxy::addition_async(Calculator_additionCallbackHandler &obj, /*in*/ int32_t value1, /*in*/ int32_t value2)
{
    dynamic_cast<eprosima::fastrpc::protocol::CalculatorProtocol&>(getProtocol()).Calculator_addition_async(obj, value1, value2);
}

int32_t CalculatorProxy::subtraction(/*in*/ int32_t value1, /*in*/ int32_t value2)
{
    int32_t subtraction_ret =
    dynamic_cast<eprosima::fastrpc::protocol::CalculatorProtocol&>(getProtocol()).Calculator_subtraction(value1, value2);
    return subtraction_ret;
}

void CalculatorProxy::subtraction_async(Calculator_subtractionCallbackHandler &obj, /*in*/ int32_t value1, /*in*/ int32_t value2)
{
    dynamic_cast<eprosima::fastrpc::protocol::CalculatorProtocol&>(getProtocol()).Calculator_subtraction_async(obj, value1, value2);
}

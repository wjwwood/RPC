/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This generated file is licensed to you under the terms described in the
 * rpcdds_LICENSE file included in this rpcdds distribution.
 *
 *************************************************************************
 * 
 * @file LatencyAsyncCallbackHandlers.h
 * This header file contains the declaration of callback handlers used in asynchronous calls.
 *
 * This file was generated by the tool rpcddsgen.
 */

#ifndef _Latency_ASYNC_CALLBACK_HANDLERS_H_
#define _Latency_ASYNC_CALLBACK_HANDLERS_H_

#include "rpcdds/exceptions/SystemException.h"
#include "rpcdds/exceptions/UserException.h"
#include "Latency.h"



/*!
 * @brief This abstract class defines the callbacks that eProsima RPC will call in an asynchronous call.
 *        These callback has to be implemented in a derived class.
 * @ingroup LATENCY
 */
class Latency_latencyCallbackHandler
{
    public:
        /*!
         * This function is called when is received the reply from the server.
         */
        virtual void latency(/*out*/ const st& return_) = 0;
        
        /*!
         * @brief This function is called when an exception occurs.
         *        This exception can be launched in the server's side or in the client's side.
         *
         * @param ex The exception that will be launched.
         */
        virtual void on_exception(const eprosima::rpc::exception::SystemException &ex) = 0;
};




#endif // _Latency_ASYNC_CALLBACK_HANDLERS_H_
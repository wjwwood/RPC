/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This generated file is licensed to you under the terms described in the
 * rpcrest_LICENSE file included in this rpcrest distribution.
 *
 *************************************************************************
 * 
 * @file CalculatorProxy.h
 * This header file contains the declaration of the proxy for all interfaces.
 *
 * This file was generated by the tool rpcrestgen.
 */

#ifndef _Calculator_PROXY_H_
#define _Calculator_PROXY_H_

#include "rpcrest/client/Proxy.h"
#include "Calculator.h"
namespace eprosima
{
    namespace rpc
    {
        namespace protocol
        {
            class CalculatorProtocol;
        }
    }
}

namespace Calculator
{
    /*!
     * @brief This class implements a specific server's proxy for the defined interface addResource.
     * @ingroup CALCULATOR
     */
    class RPCUSERDllExport addResourceProxy : public eprosima::rpc::proxy::Proxy
    {
        public:
       
            /*!
             * @brief This constructor sets the transport that will be used by the server's proxy.
             *
             * @param transport The network transport that server's proxy has to use.
             *        This transport's object is not deleted by this class in its destructor. Cannot be NULL.
             * @param protocol The protocol used to send the information over the transport.
             *        This protocol's object is not deleted by this class in its destructor. Cannot be NULL.
             * @exception eprosima::rpc::exception::InitializeException This exception is thrown when the initialization was wrong.
             */
            addResourceProxy(eprosima::rpc::transport::ProxyTransport &transport,
                eprosima::rpc::protocol::CalculatorProtocol &protocol);

            //! @brief Destructor.
            virtual ~addResourceProxy();
            



            //! @brief Proxy method for the operation add.
            Calculator::addResource::AddResponse add(/*in*/ int32_t a, /*in*/ int32_t b);


    };

    /*!
     * @brief This class implements a specific server's proxy for the defined interface substractResource.
     * @ingroup CALCULATOR
     */
    class RPCUSERDllExport substractResourceProxy : public eprosima::rpc::proxy::Proxy
    {
        public:
       
            /*!
             * @brief This constructor sets the transport that will be used by the server's proxy.
             *
             * @param transport The network transport that server's proxy has to use.
             *        This transport's object is not deleted by this class in its destructor. Cannot be NULL.
             * @param protocol The protocol used to send the information over the transport.
             *        This protocol's object is not deleted by this class in its destructor. Cannot be NULL.
             * @exception eprosima::rpc::exception::InitializeException This exception is thrown when the initialization was wrong.
             */
            substractResourceProxy(eprosima::rpc::transport::ProxyTransport &transport,
                eprosima::rpc::protocol::CalculatorProtocol &protocol);

            //! @brief Destructor.
            virtual ~substractResourceProxy();
            



            //! @brief Proxy method for the operation substract.
            Calculator::substractResource::SubstractResponse substract(/*in*/ int32_t a, /*in*/ int32_t b);


    };

    /*!
     * @brief This class implements a specific server's proxy for the defined interface multiplyResource.
     * @ingroup CALCULATOR
     */
    class RPCUSERDllExport multiplyResourceProxy : public eprosima::rpc::proxy::Proxy
    {
        public:
       
            /*!
             * @brief This constructor sets the transport that will be used by the server's proxy.
             *
             * @param transport The network transport that server's proxy has to use.
             *        This transport's object is not deleted by this class in its destructor. Cannot be NULL.
             * @param protocol The protocol used to send the information over the transport.
             *        This protocol's object is not deleted by this class in its destructor. Cannot be NULL.
             * @exception eprosima::rpc::exception::InitializeException This exception is thrown when the initialization was wrong.
             */
            multiplyResourceProxy(eprosima::rpc::transport::ProxyTransport &transport,
                eprosima::rpc::protocol::CalculatorProtocol &protocol);

            //! @brief Destructor.
            virtual ~multiplyResourceProxy();
            



            //! @brief Proxy method for the operation multiply.
            Calculator::multiplyResource::MultiplyResponse multiply(/*in*/ int32_t a, /*in*/ int32_t b);


    };

    /*!
     * @brief This class implements a specific server's proxy for the defined interface divideResource.
     * @ingroup CALCULATOR
     */
    class RPCUSERDllExport divideResourceProxy : public eprosima::rpc::proxy::Proxy
    {
        public:
       
            /*!
             * @brief This constructor sets the transport that will be used by the server's proxy.
             *
             * @param transport The network transport that server's proxy has to use.
             *        This transport's object is not deleted by this class in its destructor. Cannot be NULL.
             * @param protocol The protocol used to send the information over the transport.
             *        This protocol's object is not deleted by this class in its destructor. Cannot be NULL.
             * @exception eprosima::rpc::exception::InitializeException This exception is thrown when the initialization was wrong.
             */
            divideResourceProxy(eprosima::rpc::transport::ProxyTransport &transport,
                eprosima::rpc::protocol::CalculatorProtocol &protocol);

            //! @brief Destructor.
            virtual ~divideResourceProxy();
            



            //! @brief Proxy method for the operation divide.
            Calculator::divideResource::DivideResponse divide(/*in*/ int32_t a, /*in*/ int32_t b);


    };

};


#endif // _Calculator_PROXY_H_
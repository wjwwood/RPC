/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This generated file is licensed to you under the terms described in the
 * _LICENSE file included in this  distribution.
 *
 *************************************************************************
 * 
 * @file Bank.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _Bank_H_
#define _Bank_H_

// TODO Poner en el contexto.
#include "rpcrest/exceptions/UserException.h"

#include <stdint.h>
#include <array>
#include <string>
#include <vector>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif
#else
#define eProsima_user_DllExport
#endif

namespace Bank
{
    /*!
     * @brief This class represents the interface account_accountNumberResource defined by the user in the IDL file.
     * @ingroup BANK
     */
    namespace account_accountNumberResource
    {
        /*!
         * @brief This class represents the structure account_accountNumber defined by the user in the IDL file.
         * @ingroup BANK
         */
        class eProsima_user_DllExport account_accountNumber
        {
        public:

            /*!
             * @brief Default constructor.
             */
            account_accountNumber();
            
            /*!
             * @brief Default destructor.
             */
            ~account_accountNumber();
            
            /*!
             * @brief Copy constructor.
             * @param x Reference to the object Bank::account_accountNumberResource::account_accountNumber that will be copied.
             */
            account_accountNumber(const account_accountNumber &x);
            
            /*!
             * @brief Move constructor.
             * @param x Reference to the object Bank::account_accountNumberResource::account_accountNumber that will be copied.
             */
            account_accountNumber(account_accountNumber &&x);
            
            /*!
             * @brief Copy assignment.
             * @param x Reference to the object Bank::account_accountNumberResource::account_accountNumber that will be copied.
             */
            account_accountNumber& operator=(const account_accountNumber &x);
            
            /*!
             * @brief Move assignment.
             * @param x Reference to the object Bank::account_accountNumberResource::account_accountNumber that will be copied.
             */
            account_accountNumber& operator=(account_accountNumber &&x);
            
            /*!
             * @brief This function sets a value in member accountNumber_
             * @param _accountNumber_ New value for member accountNumber_
             */
            inline void accountNumber_(int32_t _accountNumber_)
            {
                m_accountNumber_ = _accountNumber_;
            }

            /*!
             * @brief This function returns the value of member accountNumber_
             * @return Value of member accountNumber_
             */
            inline int32_t accountNumber_() const
            {
                return m_accountNumber_;
            }

            /*!
             * @brief This function returns a reference to member accountNumber_
             * @return Reference to member accountNumber_
             */
            inline int32_t& accountNumber_()
            {
                return m_accountNumber_;
            }
            

            
        private:
            int32_t m_accountNumber_;
        };
        /*!
         * @brief This class represents the structure EmptyGetAccountDetailsResponse defined by the user in the IDL file.
         * @ingroup BANK
         */
        class eProsima_user_DllExport EmptyGetAccountDetailsResponse
        {
        public:

            /*!
             * @brief Default constructor.
             */
            EmptyGetAccountDetailsResponse();
            
            /*!
             * @brief Default destructor.
             */
            ~EmptyGetAccountDetailsResponse();
            
            /*!
             * @brief Copy constructor.
             * @param x Reference to the object Bank::account_accountNumberResource::EmptyGetAccountDetailsResponse that will be copied.
             */
            EmptyGetAccountDetailsResponse(const EmptyGetAccountDetailsResponse &x);
            
            /*!
             * @brief Move constructor.
             * @param x Reference to the object Bank::account_accountNumberResource::EmptyGetAccountDetailsResponse that will be copied.
             */
            EmptyGetAccountDetailsResponse(EmptyGetAccountDetailsResponse &&x);
            
            /*!
             * @brief Copy assignment.
             * @param x Reference to the object Bank::account_accountNumberResource::EmptyGetAccountDetailsResponse that will be copied.
             */
            EmptyGetAccountDetailsResponse& operator=(const EmptyGetAccountDetailsResponse &x);
            
            /*!
             * @brief Move assignment.
             * @param x Reference to the object Bank::account_accountNumberResource::EmptyGetAccountDetailsResponse that will be copied.
             */
            EmptyGetAccountDetailsResponse& operator=(EmptyGetAccountDetailsResponse &&x);
            
            /*!
             * @brief This function sets a value in member status
             * @param _status New value for member status
             */
            inline void status(int32_t _status)
            {
                m_status = _status;
            }

            /*!
             * @brief This function returns the value of member status
             * @return Value of member status
             */
            inline int32_t status() const
            {
                return m_status;
            }

            /*!
             * @brief This function returns a reference to member status
             * @return Reference to member status
             */
            inline int32_t& status()
            {
                return m_status;
            }
            

            
        private:
            int32_t m_status;
        };
        /*!
         * @brief This class represents the structure XMLGetAccountDetailsResponse defined by the user in the IDL file.
         * @ingroup BANK
         */
        class eProsima_user_DllExport XMLGetAccountDetailsResponse
        {
        public:

            /*!
             * @brief Default constructor.
             */
            XMLGetAccountDetailsResponse();
            
            /*!
             * @brief Default destructor.
             */
            ~XMLGetAccountDetailsResponse();
            
            /*!
             * @brief Copy constructor.
             * @param x Reference to the object Bank::account_accountNumberResource::XMLGetAccountDetailsResponse that will be copied.
             */
            XMLGetAccountDetailsResponse(const XMLGetAccountDetailsResponse &x);
            
            /*!
             * @brief Move constructor.
             * @param x Reference to the object Bank::account_accountNumberResource::XMLGetAccountDetailsResponse that will be copied.
             */
            XMLGetAccountDetailsResponse(XMLGetAccountDetailsResponse &&x);
            
            /*!
             * @brief Copy assignment.
             * @param x Reference to the object Bank::account_accountNumberResource::XMLGetAccountDetailsResponse that will be copied.
             */
            XMLGetAccountDetailsResponse& operator=(const XMLGetAccountDetailsResponse &x);
            
            /*!
             * @brief Move assignment.
             * @param x Reference to the object Bank::account_accountNumberResource::XMLGetAccountDetailsResponse that will be copied.
             */
            XMLGetAccountDetailsResponse& operator=(XMLGetAccountDetailsResponse &&x);
            
            /*!
             * @brief This function sets a value in member status
             * @param _status New value for member status
             */
            inline void status(int32_t _status)
            {
                m_status = _status;
            }

            /*!
             * @brief This function returns the value of member status
             * @return Value of member status
             */
            inline int32_t status() const
            {
                return m_status;
            }

            /*!
             * @brief This function returns a reference to member status
             * @return Reference to member status
             */
            inline int32_t& status()
            {
                return m_status;
            }
            /*!
             * @brief This function sets a value in member xmlRepresentation
             * @param _xmlRepresentation New value for member xmlRepresentation
             */
            inline void xmlRepresentation(std::string _xmlRepresentation)
            {
                m_xmlRepresentation = _xmlRepresentation;
            }

            /*!
             * @brief This function returns the value of member xmlRepresentation
             * @return Value of member xmlRepresentation
             */
            inline std::string xmlRepresentation() const
            {
                return m_xmlRepresentation;
            }

            /*!
             * @brief This function returns a reference to member xmlRepresentation
             * @return Reference to member xmlRepresentation
             */
            inline std::string& xmlRepresentation()
            {
                return m_xmlRepresentation;
            }
            

            
        private:
            int32_t m_status;
            std::string m_xmlRepresentation;
        };
        /*!
         * @brief This class represents the union GetAccountDetailsResponse defined by the user in the IDL file.
         * @ingroup BANK
         */
        class eProsima_user_DllExport GetAccountDetailsResponse
        {
        public:

            /*!
             * @brief Default constructor.
             */
            GetAccountDetailsResponse();
            
            /*!
             * @brief Default destructor.
             */
            ~GetAccountDetailsResponse();
            
            /*!
             * @brief Copy constructor.
             * @param x Reference to the object Bank::account_accountNumberResource::GetAccountDetailsResponse that will be copied.
             */
            GetAccountDetailsResponse(const GetAccountDetailsResponse &x);
            
            /*!
             * @brief Move constructor.
             * @param x Reference to the object Bank::account_accountNumberResource::GetAccountDetailsResponse that will be copied.
             */
            GetAccountDetailsResponse(GetAccountDetailsResponse &&x);
            
            /*!
             * @brief Copy assignment.
             * @param x Reference to the object Bank::account_accountNumberResource::GetAccountDetailsResponse that will be copied.
             */
            GetAccountDetailsResponse& operator=(const GetAccountDetailsResponse &x);
            
            /*!
             * @brief Move assignment.
             * @param x Reference to the object Bank::account_accountNumberResource::GetAccountDetailsResponse that will be copied.
             */
            GetAccountDetailsResponse& operator=(GetAccountDetailsResponse &&x);
            
            /*!
             * @brief This function sets the discriminator value.
             * @param __d New value for the discriminator.
             * @exception eprosima::fastcdr::BadParamException This exception is thrown if the new value doesn't correspond to the selected union member.
             */
            void _d(int32_t __d);
            
            /*!
             * @brief This function returns the value of the discriminator.
             * @return Value of the discriminator
             */
            int32_t _d() const;
            
            /*!
             * @brief This function returns a reference to the discriminator.
             * @return Reference to the discriminator.
             */
            int32_t& _d();
            
            /*!
             * @brief This function copies the value in member emptyGetAccountDetailsResponse
             * @param _emptyGetAccountDetailsResponse New value to be copied in member emptyGetAccountDetailsResponse
             */
            void emptyGetAccountDetailsResponse(const Bank::account_accountNumberResource::EmptyGetAccountDetailsResponse &_emptyGetAccountDetailsResponse);

            /*!
             * @brief This function moves the value in member emptyGetAccountDetailsResponse
             * @param _emptyGetAccountDetailsResponse New value to be moved in member emptyGetAccountDetailsResponse
             */
            void emptyGetAccountDetailsResponse(Bank::account_accountNumberResource::EmptyGetAccountDetailsResponse &&_emptyGetAccountDetailsResponse);

            /*!
             * @brief This function returns a constant reference to member emptyGetAccountDetailsResponse
             * @return Constant reference to member emptyGetAccountDetailsResponse
             * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
             */
            const Bank::account_accountNumberResource::EmptyGetAccountDetailsResponse& emptyGetAccountDetailsResponse() const;

            /*!
             * @brief This function returns a reference to member emptyGetAccountDetailsResponse
             * @return Reference to member emptyGetAccountDetailsResponse
             * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
             */
            Bank::account_accountNumberResource::EmptyGetAccountDetailsResponse& emptyGetAccountDetailsResponse();
            /*!
             * @brief This function copies the value in member xmlGetAccountDetailsResponse
             * @param _xmlGetAccountDetailsResponse New value to be copied in member xmlGetAccountDetailsResponse
             */
            void xmlGetAccountDetailsResponse(const Bank::account_accountNumberResource::XMLGetAccountDetailsResponse &_xmlGetAccountDetailsResponse);

            /*!
             * @brief This function moves the value in member xmlGetAccountDetailsResponse
             * @param _xmlGetAccountDetailsResponse New value to be moved in member xmlGetAccountDetailsResponse
             */
            void xmlGetAccountDetailsResponse(Bank::account_accountNumberResource::XMLGetAccountDetailsResponse &&_xmlGetAccountDetailsResponse);

            /*!
             * @brief This function returns a constant reference to member xmlGetAccountDetailsResponse
             * @return Constant reference to member xmlGetAccountDetailsResponse
             * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
             */
            const Bank::account_accountNumberResource::XMLGetAccountDetailsResponse& xmlGetAccountDetailsResponse() const;

            /*!
             * @brief This function returns a reference to member xmlGetAccountDetailsResponse
             * @return Reference to member xmlGetAccountDetailsResponse
             * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
             */
            Bank::account_accountNumberResource::XMLGetAccountDetailsResponse& xmlGetAccountDetailsResponse();
            

            
        private:
            int32_t m__d;
            
            Bank::account_accountNumberResource::EmptyGetAccountDetailsResponse m_emptyGetAccountDetailsResponse;
            Bank::account_accountNumberResource::XMLGetAccountDetailsResponse m_xmlGetAccountDetailsResponse;
        };
        /*!
         * @brief This class represents the union GetAccountDetailsRequest defined by the user in the IDL file.
         * @ingroup BANK
         */
        class eProsima_user_DllExport GetAccountDetailsRequest
        {
        public:

            /*!
             * @brief Default constructor.
             */
            GetAccountDetailsRequest();
            
            /*!
             * @brief Default destructor.
             */
            ~GetAccountDetailsRequest();
            
            /*!
             * @brief Copy constructor.
             * @param x Reference to the object Bank::account_accountNumberResource::GetAccountDetailsRequest that will be copied.
             */
            GetAccountDetailsRequest(const GetAccountDetailsRequest &x);
            
            /*!
             * @brief Move constructor.
             * @param x Reference to the object Bank::account_accountNumberResource::GetAccountDetailsRequest that will be copied.
             */
            GetAccountDetailsRequest(GetAccountDetailsRequest &&x);
            
            /*!
             * @brief Copy assignment.
             * @param x Reference to the object Bank::account_accountNumberResource::GetAccountDetailsRequest that will be copied.
             */
            GetAccountDetailsRequest& operator=(const GetAccountDetailsRequest &x);
            
            /*!
             * @brief Move assignment.
             * @param x Reference to the object Bank::account_accountNumberResource::GetAccountDetailsRequest that will be copied.
             */
            GetAccountDetailsRequest& operator=(GetAccountDetailsRequest &&x);
            
            /*!
             * @brief This function sets the discriminator value.
             * @param __d New value for the discriminator.
             * @exception eprosima::fastcdr::BadParamException This exception is thrown if the new value doesn't correspond to the selected union member.
             */
            void _d(int32_t __d);
            
            /*!
             * @brief This function returns the value of the discriminator.
             * @return Value of the discriminator
             */
            int32_t _d() const;
            
            /*!
             * @brief This function returns a reference to the discriminator.
             * @return Reference to the discriminator.
             */
            int32_t& _d();
            
            /*!
             * @brief This function sets a value in member xmlRepresentation
             * @param _xmlRepresentation New value for member xmlRepresentation
             */
            void xmlRepresentation(std::string _xmlRepresentation);

            /*!
             * @brief This function returns the value of member xmlRepresentation
             * @return Value of member xmlRepresentation
             * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
             */
            std::string xmlRepresentation() const;

            /*!
             * @brief This function returns a reference to member xmlRepresentation
             * @return Reference to member xmlRepresentation
             * @exception eprosima::fastcdr::BadParamException This exception is thrown if the requested union member is not the current selection.
             */
            std::string& xmlRepresentation();
            

            
        private:
            int32_t m__d;
            
            std::string m_xmlRepresentation;
        };

    }
}

#endif // _Bank_H_
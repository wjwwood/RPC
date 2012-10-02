#ifndef _BasicTypeTest_ASYNC_SUPPORT_H_
#define _BasicTypeTest_ASYNC_SUPPORT_H_

/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "client/AsyncTask.h"


class BasicTypeTest_getOctetTask : public eProsima::DDSRPC::AsyncTask
{
    public:

        /// \brief The default constructor.
        BasicTypeTest_getOctetTask(BasicTypeTest_getOctet &obj,
           eProsima::DDSRPC::Client *client);

        /// \brief The default destructor.
        virtual ~BasicTypeTest_getOctetTask();
        
        virtual void execute(eProsima::DDSRPC::ReturnMessage);
        
        BasicTypeTest_getOctet& getObject();
        
        private:
        
           BasicTypeTest_getOctet &m_obj;
};

class BasicTypeTest_getCharTask : public eProsima::DDSRPC::AsyncTask
{
    public:

        /// \brief The default constructor.
        BasicTypeTest_getCharTask(BasicTypeTest_getChar &obj,
           eProsima::DDSRPC::Client *client);

        /// \brief The default destructor.
        virtual ~BasicTypeTest_getCharTask();
        
        virtual void execute(eProsima::DDSRPC::ReturnMessage);
        
        BasicTypeTest_getChar& getObject();
        
        private:
        
           BasicTypeTest_getChar &m_obj;
};

class BasicTypeTest_getWCharTask : public eProsima::DDSRPC::AsyncTask
{
    public:

        /// \brief The default constructor.
        BasicTypeTest_getWCharTask(BasicTypeTest_getWChar &obj,
           eProsima::DDSRPC::Client *client);

        /// \brief The default destructor.
        virtual ~BasicTypeTest_getWCharTask();
        
        virtual void execute(eProsima::DDSRPC::ReturnMessage);
        
        BasicTypeTest_getWChar& getObject();
        
        private:
        
           BasicTypeTest_getWChar &m_obj;
};

class BasicTypeTest_getShortTask : public eProsima::DDSRPC::AsyncTask
{
    public:

        /// \brief The default constructor.
        BasicTypeTest_getShortTask(BasicTypeTest_getShort &obj,
           eProsima::DDSRPC::Client *client);

        /// \brief The default destructor.
        virtual ~BasicTypeTest_getShortTask();
        
        virtual void execute(eProsima::DDSRPC::ReturnMessage);
        
        BasicTypeTest_getShort& getObject();
        
        private:
        
           BasicTypeTest_getShort &m_obj;
};

class BasicTypeTest_getUShortTask : public eProsima::DDSRPC::AsyncTask
{
    public:

        /// \brief The default constructor.
        BasicTypeTest_getUShortTask(BasicTypeTest_getUShort &obj,
           eProsima::DDSRPC::Client *client);

        /// \brief The default destructor.
        virtual ~BasicTypeTest_getUShortTask();
        
        virtual void execute(eProsima::DDSRPC::ReturnMessage);
        
        BasicTypeTest_getUShort& getObject();
        
        private:
        
           BasicTypeTest_getUShort &m_obj;
};

class BasicTypeTest_getLongTask : public eProsima::DDSRPC::AsyncTask
{
    public:

        /// \brief The default constructor.
        BasicTypeTest_getLongTask(BasicTypeTest_getLong &obj,
           eProsima::DDSRPC::Client *client);

        /// \brief The default destructor.
        virtual ~BasicTypeTest_getLongTask();
        
        virtual void execute(eProsima::DDSRPC::ReturnMessage);
        
        BasicTypeTest_getLong& getObject();
        
        private:
        
           BasicTypeTest_getLong &m_obj;
};

class BasicTypeTest_getULongTask : public eProsima::DDSRPC::AsyncTask
{
    public:

        /// \brief The default constructor.
        BasicTypeTest_getULongTask(BasicTypeTest_getULong &obj,
           eProsima::DDSRPC::Client *client);

        /// \brief The default destructor.
        virtual ~BasicTypeTest_getULongTask();
        
        virtual void execute(eProsima::DDSRPC::ReturnMessage);
        
        BasicTypeTest_getULong& getObject();
        
        private:
        
           BasicTypeTest_getULong &m_obj;
};

class BasicTypeTest_getLLongTask : public eProsima::DDSRPC::AsyncTask
{
    public:

        /// \brief The default constructor.
        BasicTypeTest_getLLongTask(BasicTypeTest_getLLong &obj,
           eProsima::DDSRPC::Client *client);

        /// \brief The default destructor.
        virtual ~BasicTypeTest_getLLongTask();
        
        virtual void execute(eProsima::DDSRPC::ReturnMessage);
        
        BasicTypeTest_getLLong& getObject();
        
        private:
        
           BasicTypeTest_getLLong &m_obj;
};

class BasicTypeTest_getULLongTask : public eProsima::DDSRPC::AsyncTask
{
    public:

        /// \brief The default constructor.
        BasicTypeTest_getULLongTask(BasicTypeTest_getULLong &obj,
           eProsima::DDSRPC::Client *client);

        /// \brief The default destructor.
        virtual ~BasicTypeTest_getULLongTask();
        
        virtual void execute(eProsima::DDSRPC::ReturnMessage);
        
        BasicTypeTest_getULLong& getObject();
        
        private:
        
           BasicTypeTest_getULLong &m_obj;
};

class BasicTypeTest_getFloatTask : public eProsima::DDSRPC::AsyncTask
{
    public:

        /// \brief The default constructor.
        BasicTypeTest_getFloatTask(BasicTypeTest_getFloat &obj,
           eProsima::DDSRPC::Client *client);

        /// \brief The default destructor.
        virtual ~BasicTypeTest_getFloatTask();
        
        virtual void execute(eProsima::DDSRPC::ReturnMessage);
        
        BasicTypeTest_getFloat& getObject();
        
        private:
        
           BasicTypeTest_getFloat &m_obj;
};

class BasicTypeTest_getDoubleTask : public eProsima::DDSRPC::AsyncTask
{
    public:

        /// \brief The default constructor.
        BasicTypeTest_getDoubleTask(BasicTypeTest_getDouble &obj,
           eProsima::DDSRPC::Client *client);

        /// \brief The default destructor.
        virtual ~BasicTypeTest_getDoubleTask();
        
        virtual void execute(eProsima::DDSRPC::ReturnMessage);
        
        BasicTypeTest_getDouble& getObject();
        
        private:
        
           BasicTypeTest_getDouble &m_obj;
};

class BasicTypeTest_getBooleanTask : public eProsima::DDSRPC::AsyncTask
{
    public:

        /// \brief The default constructor.
        BasicTypeTest_getBooleanTask(BasicTypeTest_getBoolean &obj,
           eProsima::DDSRPC::Client *client);

        /// \brief The default destructor.
        virtual ~BasicTypeTest_getBooleanTask();
        
        virtual void execute(eProsima::DDSRPC::ReturnMessage);
        
        BasicTypeTest_getBoolean& getObject();
        
        private:
        
           BasicTypeTest_getBoolean &m_obj;
};

#endif // _BasicTypeTest_ASYNC_SUPPORT_H_
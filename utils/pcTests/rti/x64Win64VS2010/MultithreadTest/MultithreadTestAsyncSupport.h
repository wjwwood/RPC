#ifndef _MultithreadTest_ASYNC_SUPPORT_H_
#define _MultithreadTest_ASYNC_SUPPORT_H_

/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "client/AsyncTask.h"


class MultithreadTest_testTask : public eProsima::DDSRPC::AsyncTask
{
    public:

        /// \brief The default constructor.
        MultithreadTest_testTask(MultithreadTest_test &obj,
           eProsima::DDSRPC::Client *client);

        /// \brief The default destructor.
        virtual ~MultithreadTest_testTask();
        
        virtual void execute(eProsima::DDSRPC::ReturnMessage);
        
        MultithreadTest_test& getObject();
        
        private:
        
           MultithreadTest_test &m_obj;
};

#endif // _MultithreadTest_ASYNC_SUPPORT_H_
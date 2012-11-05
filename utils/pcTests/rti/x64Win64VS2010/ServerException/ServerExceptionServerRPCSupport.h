#ifndef _ServerException_SERVER_RPC_SUPPORT_H_
#define _ServerException_SERVER_RPC_SUPPORT_H_

/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "utils/GenericServerRPC.h"
#include "ServerExceptionRequestReplySupport.h"



GENERIC_SERVER_RPC(sendExceptionServerRPC, sendExceptionReplyDataWriter, sendExceptionRequestDataReader);


GENERIC_SERVER_RPC(sendExceptionTwoServerRPC, sendExceptionTwoReplyDataWriter, sendExceptionTwoRequestDataReader);


GENERIC_SERVER_RPC(sendExceptionThreeServerRPC, sendExceptionThreeReplyDataWriter, sendExceptionThreeRequestDataReader);


#endif  // _ServerException_SERVER_RPC_SUPPORT_H_
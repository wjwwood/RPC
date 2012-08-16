/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "server/Server.h"
#include "EnumYStringTestServerRPCSupport.h"


/* Defines */
#define TName                   getEnumServerRPC
#define TDataReplyTypeSupport   getEnumReplyTypeSupport
#define TDataRequestTypeSupport getEnumRequestTypeSupport
#define TData                   getEnum
#define TDataReader             getEnumRequestDataReader
#define TDataWriter             getEnumReplyDataWriter


#include "utils/GenericServerRPC.gen"


#undef TName
#undef TDataReplyTypeSupport
#undef TDataRequestTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter


/* Defines */
#define TName                   getStringServerRPC
#define TDataReplyTypeSupport   getStringReplyTypeSupport
#define TDataRequestTypeSupport getStringRequestTypeSupport
#define TData                   getString
#define TDataReader             getStringRequestDataReader
#define TDataWriter             getStringReplyDataWriter


#include "utils/GenericServerRPC.gen"


#undef TName
#undef TDataReplyTypeSupport
#undef TDataRequestTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter


/* Defines */
#define TName                   getStringBoundedServerRPC
#define TDataReplyTypeSupport   getStringBoundedReplyTypeSupport
#define TDataRequestTypeSupport getStringBoundedRequestTypeSupport
#define TData                   getStringBounded
#define TDataReader             getStringBoundedRequestDataReader
#define TDataWriter             getStringBoundedReplyDataWriter


#include "utils/GenericServerRPC.gen"


#undef TName
#undef TDataReplyTypeSupport
#undef TDataRequestTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter


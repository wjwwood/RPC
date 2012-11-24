/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************/

#ifndef _UTILS_RPCDDS_H_
#define _UTILS_RPCDDS_H_

#ifdef RPCDDS_WIN32_DLL_EXPORTS
#define RPCDDS_WIN32_DLL_API __declspec(dllexport) 
#else 
#define RPCDDS_WIN32_DLL_API
#endif

#if defined(RPCDDS_WIN32_DLL_VARIABLE) 
  #if defined(RPCDDS_WIN32_DLL_EXPORTS)
    #define RPCDDS_WIN32_DLL_API_VARIABLE __declspec( dllexport )
  #else
    #define RPCDDS_WIN32_DLL_API_VARIABLE __declspec( dllimport )
  #endif
#else 
    #define RPCDDS_WIN32_DLL_API_VARIABLE
#endif

#if (defined(RTI_WIN32) || defined(OPENDDS_WIN32))
#define RPCDDS_USE_NOEXCEPT
#elif (defined(RTI_LINUX) || defined(OPENDDS_LINUX))
#define RPCDDS_USE_NOEXCEPT throw()
#endif

#endif //_UTILS_RPCDDS_H_
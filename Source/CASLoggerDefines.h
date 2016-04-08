//
//  CASLoggerDefines.h
//  CocoaAsyncSocket
//
//  Created by Developer on 4/7/16.
//  Copyright © 2016 Robbie Hanson. All rights reserved.
//

#ifndef CASLoggerDefines_h
#define CASLoggerDefines_h

#ifdef THIS_METHOD
#undef THIS_METHOD
#endif
#define THIS_METHOD @""

#ifdef THIS_FILE
#undef THIS_FILE
#endif
#define THIS_FILE @""

#ifdef LogError
#undef LogError
#endif
#define LogError    MSMLogError

#ifdef LogCError
#undef LogCError
#endif
#define LogCError   MSMLogError


#ifdef LogWarn
#undef LogWarn
#endif
#define LogWarn     MSMLogWarning

#ifdef LogCWarn
#undef LogCWarn
#endif
#define LogCWarт    MSMLogWarning


#ifdef LogInfo
#undef LogInfo
#endif
#define LogInfo     MSMLogInfo

#ifdef LogCInfo
#undef LogCInfo
#endif
#define LogCInfo    MSMLogInfo


#ifdef LogVerbose
#undef LogVerbose
#endif
#define LogVerbose  MSMLogDebug

#ifdef LogCVerbose
#undef LogCVerbose
#endif
#define LogCVerbose MSMLogDebug


#ifdef LogTrace
#undef LogTrace
#endif
#define LogTrace()  {}

#ifdef LogCTrace
#undef LogCTrace
#endif
#define LogCTrace() {}


#endif /* CASLoggerDefines_h */

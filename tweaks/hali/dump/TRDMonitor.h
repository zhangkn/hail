//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TRDMonitor : NSObject
{
}

+ (void)commitCountWithMonitorPoint:(id)arg1 value:(double)arg2;	// IMP=0x0000000101a2f428
+ (void)commitFailWithMonitorPoint:(id)arg1 errorCode:(id)arg2 errorMsg:(id)arg3;	// IMP=0x0000000101a2f3a4
+ (void)commitSuccessWithMonitorPoint:(id)arg1;	// IMP=0x0000000101a2f370
+ (void)sentMessage3:(id)arg1 selector:(id)arg2 andStrArg1:(id)arg3 andStrArg2:(id)arg4 andStrArg3:(id)arg5 andStrArg4:(id)arg6;	// IMP=0x0000000101a2f23c
+ (void)sentMessage2:(id)arg1 selector:(id)arg2 andStrArg1:(id)arg3 andStrArg2:(id)arg4;	// IMP=0x0000000101a2f148
+ (void)sentMessage1:(id)arg1 selector:(id)arg2 andStrArg1:(id)arg3 andStrArg2:(id)arg4 andLongArg3:(long long)arg5;	// IMP=0x0000000101a2f04c

@end

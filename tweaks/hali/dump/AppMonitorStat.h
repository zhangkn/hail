//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AppMonitorBase.h"

@interface AppMonitorStat : AppMonitorBase
{
}

+ (void)flushAllLog;	// IMP=0x0000000101201f10
+ (long long)writeLogInterval;	// IMP=0x0000000101201efc
+ (void)setWriteLogInterval:(long long)arg1;	// IMP=0x0000000101201ee8
+ (id)createTransactionWithModule:(id)arg1 monitorPoint:(id)arg2;	// IMP=0x0000000101201e30
+ (void)endWithModule:(id)arg1 monitorPoint:(id)arg2 measureName:(id)arg3;	// IMP=0x0000000101201d78
+ (void)beginWithModule:(id)arg1 monitorPoint:(id)arg2 measureName:(id)arg3;	// IMP=0x0000000101201c8c
+ (void)commitWithModule:(id)arg1 monitorPoint:(id)arg2 value:(double)arg3;	// IMP=0x0000000101201c04
+ (void)commitWithModule:(id)arg1 monitorPoint:(id)arg2 dimensionValueSet:(id)arg3 value:(double)arg4;	// IMP=0x00000001012019c0
+ (void)commitWithModule:(id)arg1 monitorPoint:(id)arg2 dimensionValueSet:(id)arg3 measureValueSet:(id)arg4;	// IMP=0x0000000101201788
+ (void)registerWithModule:(id)arg1 monitorPoint:(id)arg2 measureSet:(id)arg3 dimensionSet:(id)arg4 isCommitDetail:(_Bool)arg5;	// IMP=0x0000000101201650
+ (void)registerWithModule:(id)arg1 monitorPoint:(id)arg2 measureSet:(id)arg3 isCommitDetail:(_Bool)arg4;	// IMP=0x00000001012015ac
+ (void)registerWithModule:(id)arg1 monitorPoint:(id)arg2 measureSet:(id)arg3 dimensionSet:(id)arg4;	// IMP=0x0000000101201490
+ (void)registerWithModule:(id)arg1 monitorPoint:(id)arg2 measureSet:(id)arg3;	// IMP=0x00000001012013f4

@end


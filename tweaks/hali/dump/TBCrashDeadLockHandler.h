//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBCrashDeadlockMonitorDelegate.h"

@class NSString;

@interface TBCrashDeadLockHandler : NSObject <TBCrashDeadlockMonitorDelegate>
{
}

+ (id)shareInstance;	// IMP=0x000000010164751c
- (void)handleDeadlockBacktrace:(id)arg1;	// IMP=0x0000000101647784
- (void)turnOffMainThreadDeadlockMonitor;	// IMP=0x0000000101647700
- (void)turnOnMainThreadDeadlockMonitorWithDealockInterval:(double)arg1 PLCrashReporter:(id)arg2;	// IMP=0x00000001016475d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol TBCrashReporterDelegate <NSObject>

@optional
- (void)uploadMainThreadDeadlockWithBacktrace:(NSString *)arg1;
- (void)uploadCrashBackTrace:(NSString *)arg1 withReason:(NSString *)arg2;
- (void)uploadPLCrashReport:(NSString *)arg1;
@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface TBCrashReporterMonitor : NSObject
{
    NSMutableArray *_crashReporterMonitors;	// 8 = 0x8
}

+ (id)sharedMonitor;	// IMP=0x0000000101646c50
@property(retain) NSMutableArray *crashReporterMonitors; // @synthesize crashReporterMonitors=_crashReporterMonitors;
- (void).cxx_destruct;	// IMP=0x00000001016471ac
- (void)registerCrashLogMonitor:(id)arg1;	// IMP=0x0000000101647090
- (id)crashReportCallBackInfo:(id)arg1 Count:(int)arg2 UploadFlag:(int)arg3;	// IMP=0x0000000101646d84
- (id)init;	// IMP=0x0000000101646d04

@end


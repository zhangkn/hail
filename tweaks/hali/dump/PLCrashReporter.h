//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PLCrashMachExceptionPortSet, PLCrashMachExceptionServer, PLCrashReporterConfig;

@interface PLCrashReporter : NSObject
{
    PLCrashReporterConfig *_config;	// 8 = 0x8
    _Bool _enabled;	// 16 = 0x10
    PLCrashMachExceptionServer *_machServer;	// 24 = 0x18
    PLCrashMachExceptionPortSet *_previousMachPorts;	// 32 = 0x20
    NSString *_applicationIdentifier;	// 40 = 0x28
    NSString *_applicationVersion;	// 48 = 0x30
    NSString *_applicationMarketingVersion;	// 56 = 0x38
    NSString *_crashReportDirectory;	// 64 = 0x40
}

+ (id)sharedReporter;	// IMP=0x0000000101224ce0
+ (void)initialize;	// IMP=0x0000000101224c94
- (void)setCrashCallbacks:(struct PLCrashReporterCallbacks *)arg1;	// IMP=0x0000000101225e04
- (id)generateLiveReportAndReturnError:(id *)arg1;	// IMP=0x0000000101225dcc
- (id)generateLiveReport;	// IMP=0x0000000101225dbc
- (id)generateLiveReportWithThread:(unsigned int)arg1 error:(id *)arg2;	// IMP=0x00000001012259d4
- (id)generateLiveReportAndReturnErrorByFengchao:(unsigned int)arg1 error:(id *)arg2;	// IMP=0x0000000101225644
- (id)generateLiveReportWithThread:(unsigned int)arg1;	// IMP=0x0000000101225634
- (_Bool)enableCrashReporterAndReturnError:(id *)arg1;	// IMP=0x0000000101224f40
- (_Bool)enableCrashReporter;	// IMP=0x0000000101224f30
- (_Bool)purgePendingCrashReportAndReturnError:(id *)arg1;	// IMP=0x0000000101224ecc
- (_Bool)purgePendingCrashReport;	// IMP=0x0000000101224ebc
- (id)loadPendingCrashReportDataAndReturnError:(id *)arg1;	// IMP=0x0000000101224e74
- (id)loadPendingCrashReportData;	// IMP=0x0000000101224e64
- (_Bool)hasPendingCrashReport;	// IMP=0x0000000101224e10
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0000000101224dc8
- (id)init;	// IMP=0x0000000101224d88
- (id)crashReportPath;	// IMP=0x00000001012265a0
- (id)queuedCrashReportDirectory;	// IMP=0x0000000101226574
- (id)crashReportDirectory;	// IMP=0x0000000101226564
- (_Bool)populateCrashReportDirectoryAndReturnError:(id *)arg1;	// IMP=0x0000000101226414
- (int)mapToAsyncSymbolicationStrategy:(unsigned long long)arg1;	// IMP=0x0000000101226404
- (void)dealloc;	// IMP=0x000000010122632c
- (id)enableMachExceptionServerWithPreviousPortSet:(id *)arg1 callback:(CDUnknownFunctionPointerType)arg2 context:(void *)arg3 error:(id *)arg4;	// IMP=0x00000001012261f0
- (id)initWithBundle:(id)arg1 configuration:(id)arg2;	// IMP=0x0000000101225fec
- (id)initWithApplicationIdentifier:(id)arg1 appVersion:(id)arg2 appMarketingVersion:(id)arg3 configuration:(id)arg4;	// IMP=0x0000000101225e98

@end


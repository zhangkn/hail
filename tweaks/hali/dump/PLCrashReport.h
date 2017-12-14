//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, PLCrashReportApplicationInfo, PLCrashReportExceptionInfo, PLCrashReportMachExceptionInfo, PLCrashReportMachineInfo, PLCrashReportProcessInfo, PLCrashReportSignalInfo, PLCrashReportSystemInfo;

@interface PLCrashReport : NSObject
{
    struct _PLCrashReportDecoder *_decoder;	// 8 = 0x8
    PLCrashReportSystemInfo *_systemInfo;	// 16 = 0x10
    PLCrashReportMachineInfo *_machineInfo;	// 24 = 0x18
    PLCrashReportApplicationInfo *_applicationInfo;	// 32 = 0x20
    PLCrashReportProcessInfo *_processInfo;	// 40 = 0x28
    PLCrashReportSignalInfo *_signalInfo;	// 48 = 0x30
    PLCrashReportMachExceptionInfo *_machExceptionInfo;	// 56 = 0x38
    NSArray *_threads;	// 64 = 0x40
    NSArray *_images;	// 72 = 0x48
    PLCrashReportExceptionInfo *_exceptionInfo;	// 80 = 0x50
    struct __CFUUID *_uuid;	// 88 = 0x58
}

@property(nonatomic) struct __CFUUID *uuidRef; // @synthesize uuidRef=_uuid;
@property(retain, nonatomic) PLCrashReportExceptionInfo *exceptionInfo; // @synthesize exceptionInfo=_exceptionInfo;
@property(retain, nonatomic) NSArray *images; // @synthesize images=_images;
@property(retain, nonatomic) NSArray *threads; // @synthesize threads=_threads;
@property(retain, nonatomic) PLCrashReportMachExceptionInfo *machExceptionInfo; // @synthesize machExceptionInfo=_machExceptionInfo;
@property(retain, nonatomic) PLCrashReportSignalInfo *signalInfo; // @synthesize signalInfo=_signalInfo;
@property(retain, nonatomic) PLCrashReportProcessInfo *processInfo; // @synthesize processInfo=_processInfo;
@property(retain, nonatomic) PLCrashReportApplicationInfo *applicationInfo; // @synthesize applicationInfo=_applicationInfo;
@property(retain, nonatomic) PLCrashReportMachineInfo *machineInfo; // @synthesize machineInfo=_machineInfo;
@property(retain, nonatomic) PLCrashReportSystemInfo *systemInfo; // @synthesize systemInfo=_systemInfo;
@property(readonly, nonatomic) _Bool hasExceptionInfo;
@property(readonly, nonatomic) _Bool hasProcessInfo;
@property(readonly, nonatomic) _Bool hasMachineInfo;
- (id)imageForAddress:(unsigned long long)arg1;	// IMP=0x0000000101226e38
- (void)dealloc;	// IMP=0x0000000101226cf0
- (id)initWithData:(id)arg1 error:(id *)arg2;	// IMP=0x000000010122695c
- (id)initWithError:(id *)arg1;	// IMP=0x0000000101226884
- (id)extractMachExceptionInfo:(struct _Plcrash__CrashReport__Signal__MachException *)arg1 error:(id *)arg2;	// IMP=0x00000001012283ac
- (id)extractSignalInfo:(struct _Plcrash__CrashReport__Signal *)arg1 error:(id *)arg2;	// IMP=0x0000000101228264
- (id)extractExceptionInfo:(struct _Plcrash__CrashReport__Exception *)arg1 error:(id *)arg2;	// IMP=0x0000000101228060
- (id)extractImageInfo:(struct _Plcrash__CrashReport *)arg1 error:(id *)arg2;	// IMP=0x0000000101227e20
- (id)extractThreadInfo:(struct _Plcrash__CrashReport *)arg1 error:(id *)arg2;	// IMP=0x0000000101227b6c
- (id)extractStackFrameInfo:(struct _Plcrash__CrashReport__Thread__StackFrame *)arg1 error:(id *)arg2;	// IMP=0x0000000101227aa0
- (id)extractSymbolInfo:(struct _Plcrash__CrashReport__Symbol *)arg1 error:(id *)arg2;	// IMP=0x00000001012279cc
- (id)extractProcessInfo:(struct _Plcrash__CrashReport__ProcessInfo *)arg1 error:(id *)arg2;	// IMP=0x0000000101227838
- (id)extractApplicationInfo:(struct _Plcrash__CrashReport__ApplicationInfo *)arg1 error:(id *)arg2;	// IMP=0x00000001012276b4
- (id)extractMachineInfo:(struct _Plcrash__CrashReport__MachineInfo *)arg1 error:(id *)arg2;	// IMP=0x00000001012275a4
- (id)synthesizeProcessorInfoFromArchitecture:(int)arg1 error:(id *)arg2;	// IMP=0x00000001012274e4
- (id)extractProcessorInfo:(struct _Plcrash__CrashReport__Processor *)arg1 error:(id *)arg2;	// IMP=0x0000000101227440
- (id)extractSystemInfo:(struct _Plcrash__CrashReport__SystemInfo *)arg1 processorInfo:(id)arg2 error:(id *)arg3;	// IMP=0x00000001012272a4
- (struct _Plcrash__CrashReport *)decodeCrashData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000101227100

@end

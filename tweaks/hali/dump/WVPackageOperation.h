//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSError, NSRecursiveLock, NSString, WVDownloadTask, WVPackageAppConfigModel, WVPackageAppMonitorInfo, WVPackageResource;

@interface WVPackageOperation : NSOperation
{
    _Bool _isExecuting;	// 24 = 0x18
    _Bool _isFinished;	// 25 = 0x19
    WVPackageAppConfigModel *_appConfig;	// 32 = 0x20
    long long _type;	// 40 = 0x28
    NSError *_error;	// 48 = 0x30
    CDUnknownBlockType _progressBlock;	// 56 = 0x38
    NSRecursiveLock *_lock;	// 64 = 0x40
    WVDownloadTask *_task;	// 72 = 0x48
    NSString *_url;	// 80 = 0x50
    WVPackageResource *_resource;	// 88 = 0x58
    NSString *_tempPath;	// 96 = 0x60
    double _startTime;	// 104 = 0x68
    WVPackageAppMonitorInfo *_monitorInfo;	// 112 = 0x70
}

+ (long long)getOperationType:(id)arg1;	// IMP=0x0000000101ba2480
@property(retain, nonatomic) WVPackageAppMonitorInfo *monitorInfo; // @synthesize monitorInfo=_monitorInfo;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *tempPath; // @synthesize tempPath=_tempPath;
@property(retain, nonatomic) WVPackageResource *resource; // @synthesize resource=_resource;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) WVDownloadTask *task; // @synthesize task=_task;
@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
@property(nonatomic) _Bool isExecuting; // @synthesize isExecuting=_isExecuting;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) WVPackageAppConfigModel *appConfig; // @synthesize appConfig=_appConfig;
- (void).cxx_destruct;	// IMP=0x0000000101ba4d84
- (_Bool)isConcurrent;	// IMP=0x0000000101ba4b40
- (void)reportUpdateStat;	// IMP=0x0000000101ba46ac
- (void)operationFinished;	// IMP=0x0000000101ba43a0
- (void)operationFinishedWithError:(id)arg1;	// IMP=0x0000000101ba4340
- (void)operationStartExecute;	// IMP=0x0000000101ba42b8
- (id)readAppInfo:(id)arg1;	// IMP=0x0000000101ba4044
- (_Bool)verify:(id)arg1;	// IMP=0x0000000101ba3e60
- (id)unzip:(id)arg1;	// IMP=0x0000000101ba3d08
- (void)checkAndInstall:(id)arg1;	// IMP=0x0000000101ba3618
- (void)downloadFinished;	// IMP=0x0000000101ba32a8
- (void)reportProgress:(double)arg1;	// IMP=0x0000000101ba3274
- (_Bool)canContinue;	// IMP=0x0000000101ba31f8
- (void)startUpdate;	// IMP=0x0000000101ba2c58
- (void)startDelete;	// IMP=0x0000000101ba2960
- (void)startClean;	// IMP=0x0000000101ba2620
- (void)start;	// IMP=0x0000000101ba2540
- (id)init;	// IMP=0x0000000101ba2470
- (id)initWithConfig:(id)arg1;	// IMP=0x0000000101ba2350

@end


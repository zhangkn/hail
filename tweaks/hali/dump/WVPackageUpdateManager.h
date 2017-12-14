//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, WVPackageQueueMonitorStat, WVPriorityQueue;

@interface WVPackageUpdateManager : NSObject
{
    unsigned long long _maxConcurrentOperationCount;	// 8 = 0x8
    long long _updateLimit;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    WVPriorityQueue *_taskQueue;	// 32 = 0x20
    NSMutableDictionary *_taskDict;	// 40 = 0x28
    NSMutableDictionary *_updatingTask;	// 48 = 0x30
    NSMutableDictionary *_appNetworkSupport;	// 56 = 0x38
    NSMutableDictionary *_appUpdateListeners;	// 64 = 0x40
    WVPackageQueueMonitorStat *_stat;	// 72 = 0x48
}

+ (_Bool)getIsDownloadSupported:(id)arg1;	// IMP=0x0000000101b9ac50
+ (void)downloadNotSupported:(id)arg1;	// IMP=0x0000000101b9aa84
+ (id)sharedInstance;	// IMP=0x0000000101b9910c
@property(retain, nonatomic) WVPackageQueueMonitorStat *stat; // @synthesize stat=_stat;
@property(retain, nonatomic) NSMutableDictionary *appUpdateListeners; // @synthesize appUpdateListeners=_appUpdateListeners;
@property(retain, nonatomic) NSMutableDictionary *appNetworkSupport; // @synthesize appNetworkSupport=_appNetworkSupport;
@property(retain, nonatomic) NSMutableDictionary *updatingTask; // @synthesize updatingTask=_updatingTask;
@property(retain, nonatomic) NSMutableDictionary *taskDict; // @synthesize taskDict=_taskDict;
@property(retain, nonatomic) WVPriorityQueue *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) long long updateLimit; // @synthesize updateLimit=_updateLimit;
@property(nonatomic) unsigned long long maxConcurrentOperationCount; // @synthesize maxConcurrentOperationCount=_maxConcurrentOperationCount;
- (void).cxx_destruct;	// IMP=0x0000000101b9c544
- (void)operationCompleted:(id)arg1;	// IMP=0x0000000101b9bd04
- (id)nextOperationUnsafe;	// IMP=0x0000000101b9b438
- (void)reportPackageQueue;	// IMP=0x0000000101b9b380
- (void)startUpdateUnsafe;	// IMP=0x0000000101b9ae8c
- (void)errorRecovery;	// IMP=0x0000000101b9a700
- (void)addInfoToTaskQueueUnsafe:(id)arg1;	// IMP=0x0000000101b9a4b0
- (void)addToTaskQueueUnsafe:(id)arg1;	// IMP=0x0000000101b9a40c
- (void)update;	// IMP=0x0000000101b99fe4
- (void)updateReceived:(id)arg1;	// IMP=0x0000000101b99fb0
- (_Bool)updateApp:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withProgress:(CDUnknownBlockType)arg3;	// IMP=0x0000000101b99c3c
- (void)registerUpdateListener:(CDUnknownBlockType)arg1 withAppName:(id)arg2;	// IMP=0x0000000101b999b0
- (void)setValidApps:(id)arg1;	// IMP=0x0000000101b99504
- (void)dealloc;	// IMP=0x0000000101b99488
- (id)init;	// IMP=0x0000000101b9918c

@end


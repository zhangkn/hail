//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OrangeRetry.h"

@class NSMutableDictionary, NSOperationQueue, NSRecursiveLock, NSString, NSTimer;

@interface OrangeGroupConfigManager : NSObject <OrangeRetry>
{
    NSMutableDictionary *_groupConfigReqeustDict;	// 8 = 0x8
    NSMutableDictionary *_groupConfigModelDict;	// 16 = 0x10
    NSOperationQueue *_queue;	// 24 = 0x18
    NSRecursiveLock *_locker;	// 32 = 0x20
    NSMutableDictionary *_initializeNamespaceDict;	// 40 = 0x28
    NSTimer *_timer;	// 48 = 0x30
}

+ (void)initialize;	// IMP=0x0000000101d4aed0
+ (id)shareInstance;	// IMP=0x0000000101d48090
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSMutableDictionary *initializeNamespaceDict; // @synthesize initializeNamespaceDict=_initializeNamespaceDict;
@property(retain, nonatomic) NSRecursiveLock *locker; // @synthesize locker=_locker;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableDictionary *groupConfigModelDict; // @synthesize groupConfigModelDict=_groupConfigModelDict;
@property(retain, nonatomic) NSMutableDictionary *groupConfigReqeustDict; // @synthesize groupConfigReqeustDict=_groupConfigReqeustDict;
- (void).cxx_destruct;	// IMP=0x0000000101d4b288
- (void)postNotificationWithGroupName:(id)arg1 groupConfig:(id)arg2 ret:(_Bool)arg3;	// IMP=0x0000000101d4aacc
- (void)retryUpdateIndexIfNeed;	// IMP=0x0000000101d4a828
- (id)getIndexFileName:(id)arg1;	// IMP=0x0000000101d4a64c
- (id)getGroupConfigByNamespace:(id)arg1;	// IMP=0x0000000101d4a384
- (void)mtopUpdateGroupConfigWithReqeust:(id)arg1;	// IMP=0x0000000101d49940
- (void)cdnUpdateGroupConfigWithReqeust:(id)arg1;	// IMP=0x0000000101d48f00
- (void)updateWithRequest:(id)arg1;	// IMP=0x0000000101d48bb4
- (void)updateGroupConfigWithOrangeIndexNamespaceModel:(id)arg1 url:(id)arg2;	// IMP=0x0000000101d486e8
- (void)initializeNamespace:(id)arg1;	// IMP=0x0000000101d48600
- (void)updateInitializeNamespace;	// IMP=0x0000000101d48390
- (id)init;	// IMP=0x0000000101d48150

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


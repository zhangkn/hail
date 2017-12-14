//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MKTMultiDictionary, NSMutableArray, NSRecursiveLock;

@interface PMMessageManager : NSObject
{
    _Bool _taskStart;	// 8 = 0x8
    MKTMultiDictionary *_msgDict;	// 16 = 0x10
    MKTMultiDictionary *_timerDict;	// 24 = 0x18
    NSMutableArray *_taskArray;	// 32 = 0x20
    NSRecursiveLock *_taskLock;	// 40 = 0x28
}

+ (void)removeTimeout:(id)arg1;	// IMP=0x0000000101410c70
+ (void)startTimeout:(id)arg1;	// IMP=0x0000000101410998
+ (void)removeContext:(id)arg1;	// IMP=0x00000001014108d4
+ (id)getContext:(id)arg1;	// IMP=0x00000001014107f8
+ (void)saveContext:(id)arg1;	// IMP=0x00000001014106e0
+ (void)timeout:(id)arg1;	// IMP=0x0000000101410600
+ (void)msgComplete:(id)arg1 code:(long long)arg2;	// IMP=0x0000000101410338
+ (void)reportMsg:(id)arg1;	// IMP=0x0000000101410080
+ (void)messageResult:(id)arg1 withResult:(id)arg2;	// IMP=0x000000010140fbb8
+ (_Bool)isReportDuplicate:(id)arg1;	// IMP=0x000000010140f798
+ (void)addTask:(id)arg1;	// IMP=0x000000010140f624
+ (_Bool)checkType:(id)arg1 withAck:(id)arg2;	// IMP=0x000000010140f548
+ (void)sendCommandAckMsg:(id)arg1;	// IMP=0x000000010140f41c
+ (void)processP2PMsg:(id)arg1;	// IMP=0x000000010140f2b4
+ (_Bool)sysCheckMsg:(id)arg1;	// IMP=0x000000010140f1fc
+ (void)processCommandMsg:(id)arg1;	// IMP=0x000000010140f138
+ (void)processAckMsg:(id)arg1;	// IMP=0x000000010140ee5c
+ (void)processInfoMsg:(id)arg1;	// IMP=0x000000010140ecf4
+ (void)processMsg:(id)arg1;	// IMP=0x000000010140eb60
+ (id)parseMsg:(id)arg1 error:(id *)arg2;	// IMP=0x000000010140e584
+ (id)dataToMsgList:(id)arg1 error:(id *)arg2;	// IMP=0x000000010140e2ac
+ (_Bool)needQuickMonitor:(_Bool)arg1 monitor:(long long)arg2;	// IMP=0x000000010140e29c
+ (void)arriveMsgProc:(id)arg1 proto:(id)arg2;	// IMP=0x000000010140db60
+ (void)arriveMsgParseError:(id)arg1;	// IMP=0x000000010140da48
+ (void)arriveMsgNULL:(id)arg1;	// IMP=0x000000010140d930
+ (void)arriveMsg:(long long)arg1 pullOffset:(id)arg2 dataId:(id)arg3 dataTag:(id)arg4 data:(id)arg5;	// IMP=0x000000010140d518
+ (_Bool)canSend:(id)arg1;	// IMP=0x000000010140d300
+ (void)sendMsg:(id)arg1;	// IMP=0x000000010140d284
+ (_Bool)isAllowSendMsg:(long long)arg1 subType:(long long)arg2;	// IMP=0x000000010140d140
+ (id)sharedInstance;	// IMP=0x000000010140cf98
@property(retain, nonatomic) NSRecursiveLock *taskLock; // @synthesize taskLock=_taskLock;
@property(retain, nonatomic) NSMutableArray *taskArray; // @synthesize taskArray=_taskArray;
@property(nonatomic) _Bool taskStart; // @synthesize taskStart=_taskStart;
@property(retain, nonatomic) MKTMultiDictionary *timerDict; // @synthesize timerDict=_timerDict;
@property(retain, nonatomic) MKTMultiDictionary *msgDict; // @synthesize msgDict=_msgDict;
- (void).cxx_destruct;	// IMP=0x0000000101410ed4

@end

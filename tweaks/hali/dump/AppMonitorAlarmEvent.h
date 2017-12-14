//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AppMonitorEvent.h"

@class NSLock, NSMutableDictionary;

@interface AppMonitorAlarmEvent : AppMonitorEvent
{
    long long _successCount;	// 8 = 0x8
    long long _failCount;	// 16 = 0x10
    NSMutableDictionary *_errorMsgDict;	// 24 = 0x18
    NSMutableDictionary *_errorCodeCountDict;	// 32 = 0x20
    NSLock *_lock;	// 40 = 0x28
}

@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *errorCodeCountDict; // @synthesize errorCodeCountDict=_errorCodeCountDict;
@property(retain, nonatomic) NSMutableDictionary *errorMsgDict; // @synthesize errorMsgDict=_errorMsgDict;
@property(nonatomic) long long failCount; // @synthesize failCount=_failCount;
@property(nonatomic) long long successCount; // @synthesize successCount=_successCount;
- (void).cxx_destruct;	// IMP=0x000000010120428c
- (void)addErrorWithErrorCode:(id)arg1 errorMsg:(id)arg2;	// IMP=0x0000000101203e18
- (void)incrFail;	// IMP=0x0000000101203e00
- (void)incrSuccess;	// IMP=0x0000000101203de8
- (id)jsonDict;	// IMP=0x0000000101203a60
- (id)initWithEventId:(id)arg1 module:(id)arg2 monitorPoint:(id)arg3;	// IMP=0x00000001012038a4

@end


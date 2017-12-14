//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface PINMemoryCache : NSObject
{
    _Bool _removeAllObjectsOnMemoryWarning;	// 8 = 0x8
    _Bool _removeAllObjectsOnEnteringBackground;	// 9 = 0x9
    double _ageLimit;	// 16 = 0x10
    unsigned long long _costLimit;	// 24 = 0x18
    unsigned long long _totalCost;	// 32 = 0x20
    CDUnknownBlockType _willAddObjectBlock;	// 40 = 0x28
    CDUnknownBlockType _willRemoveObjectBlock;	// 48 = 0x30
    CDUnknownBlockType _willRemoveAllObjectsBlock;	// 56 = 0x38
    CDUnknownBlockType _didAddObjectBlock;	// 64 = 0x40
    CDUnknownBlockType _didRemoveObjectBlock;	// 72 = 0x48
    CDUnknownBlockType _didRemoveAllObjectsBlock;	// 80 = 0x50
    CDUnknownBlockType _didReceiveMemoryWarningBlock;	// 88 = 0x58
    CDUnknownBlockType _didEnterBackgroundBlock;	// 96 = 0x60
    struct dispatch_queue_s *_concurrentQueue;	// 104 = 0x68
    struct dispatch_semaphore_s *_lockSemaphore;	// 112 = 0x70
    NSMutableDictionary *_dictionary;	// 120 = 0x78
    NSMutableDictionary *_dates;	// 128 = 0x80
    NSMutableDictionary *_costs;	// 136 = 0x88
}

+ (id)sharedCache;	// IMP=0x00000001013f5ef8
@property(retain, nonatomic) NSMutableDictionary *costs; // @synthesize costs=_costs;
@property(retain, nonatomic) NSMutableDictionary *dates; // @synthesize dates=_dates;
@property(retain, nonatomic) NSMutableDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property(nonatomic) struct dispatch_semaphore_s *lockSemaphore; // @synthesize lockSemaphore=_lockSemaphore;
@property _Bool removeAllObjectsOnEnteringBackground; // @synthesize removeAllObjectsOnEnteringBackground=_removeAllObjectsOnEnteringBackground;
@property _Bool removeAllObjectsOnMemoryWarning; // @synthesize removeAllObjectsOnMemoryWarning=_removeAllObjectsOnMemoryWarning;
@property(nonatomic) struct dispatch_queue_s *concurrentQueue; // @synthesize concurrentQueue=_concurrentQueue;
- (void).cxx_destruct;	// IMP=0x00000001013f8b78
- (void)unlock;	// IMP=0x00000001013f8a08
- (void)lock;	// IMP=0x00000001013f89f4
@property(readonly) unsigned long long totalCost; // @synthesize totalCost=_totalCost;
@property unsigned long long costLimit; // @synthesize costLimit=_costLimit;
@property double ageLimit; // @synthesize ageLimit=_ageLimit;
@property(copy) CDUnknownBlockType didEnterBackgroundBlock; // @synthesize didEnterBackgroundBlock=_didEnterBackgroundBlock;
@property(copy) CDUnknownBlockType didReceiveMemoryWarningBlock; // @synthesize didReceiveMemoryWarningBlock=_didReceiveMemoryWarningBlock;
@property(copy) CDUnknownBlockType didRemoveAllObjectsBlock; // @synthesize didRemoveAllObjectsBlock=_didRemoveAllObjectsBlock;
@property(copy) CDUnknownBlockType didRemoveObjectBlock; // @synthesize didRemoveObjectBlock=_didRemoveObjectBlock;
@property(copy) CDUnknownBlockType didAddObjectBlock; // @synthesize didAddObjectBlock=_didAddObjectBlock;
@property(copy) CDUnknownBlockType willRemoveAllObjectsBlock; // @synthesize willRemoveAllObjectsBlock=_willRemoveAllObjectsBlock;
@property(copy) CDUnknownBlockType willRemoveObjectBlock; // @synthesize willRemoveObjectBlock=_willRemoveObjectBlock;
@property(copy) CDUnknownBlockType willAddObjectBlock; // @synthesize willAddObjectBlock=_willAddObjectBlock;
- (void)enumerateObjectsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001013f7f58
- (void)removeAllObjects;	// IMP=0x00000001013f7e44
- (void)trimToCostByDate:(unsigned long long)arg1;	// IMP=0x00000001013f7e38
- (void)trimToCost:(unsigned long long)arg1;	// IMP=0x00000001013f7e2c
- (void)trimToDate:(id)arg1;	// IMP=0x00000001013f7d88
- (void)removeObjectForKey:(id)arg1;	// IMP=0x00000001013f7d74
- (void)setObject:(id)arg1 forKey:(id)arg2 withCost:(unsigned long long)arg3;	// IMP=0x00000001013f7b4c
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001013f7af8
- (id)objectForKey:(id)arg1;	// IMP=0x00000001013f79f0
- (void)enumerateObjectsWithBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001013f782c
- (void)removeAllObjects:(CDUnknownBlockType)arg1;	// IMP=0x00000001013f76b4
- (void)trimToCostByDate:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000001013f7530
- (void)trimToCost:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000001013f73ac
- (void)trimToDate:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000001013f71f0
- (void)removeObjectForKey:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000001013f702c
- (void)setObject:(id)arg1 forKey:(id)arg2 withCost:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x00000001013f6e18
- (void)setObject:(id)arg1 forKey:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000001013f6da8
- (void)objectForKey:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000001013f6bc8
- (void)trimToAgeLimitRecursively;	// IMP=0x00000001013f6a44
- (void)trimToCostLimitByDate:(unsigned long long)arg1;	// IMP=0x00000001013f6878
- (void)trimToCostLimit:(unsigned long long)arg1;	// IMP=0x00000001013f669c
- (void)trimMemoryToDate:(id)arg1;	// IMP=0x00000001013f6484
- (void)removeObjectAndExecuteBlocksForKey:(id)arg1;	// IMP=0x00000001013f62c0
- (void)didObserveApocalypticNotification:(id)arg1;	// IMP=0x00000001013f5fac
- (id)init;	// IMP=0x00000001013f5b10
- (void)dealloc;	// IMP=0x00000001013f5a70

@end


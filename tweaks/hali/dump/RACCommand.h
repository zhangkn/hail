//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, RACSignal;

@interface RACCommand : NSObject
{
    NSMutableArray *_activeExecutionSignals;	// 8 = 0x8
    unsigned int _allowsConcurrentExecution;	// 16 = 0x10
    RACSignal *_executionSignals;	// 24 = 0x18
    RACSignal *_executing;	// 32 = 0x20
    RACSignal *_enabled;	// 40 = 0x28
    RACSignal *_errors;	// 48 = 0x30
    RACSignal *_immediateEnabled;	// 56 = 0x38
    CDUnknownBlockType _signalBlock;	// 64 = 0x40
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x00000001014341bc
@property(readonly, copy, nonatomic) CDUnknownBlockType signalBlock; // @synthesize signalBlock=_signalBlock;
@property(readonly, nonatomic) RACSignal *immediateEnabled; // @synthesize immediateEnabled=_immediateEnabled;
@property(readonly, nonatomic) RACSignal *errors; // @synthesize errors=_errors;
@property(readonly, nonatomic) RACSignal *enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) RACSignal *executing; // @synthesize executing=_executing;
@property(readonly, nonatomic) RACSignal *executionSignals; // @synthesize executionSignals=_executionSignals;
- (void).cxx_destruct;	// IMP=0x0000000101434224
- (id)execute:(id)arg1;	// IMP=0x0000000101433b78
- (id)initWithEnabled:(id)arg1 signalBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000101432edc
- (id)initWithSignalBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000101432ec4
- (id)init;	// IMP=0x0000000101432eac
- (void)removeActiveExecutionSignal:(id)arg1;	// IMP=0x0000000101432cd4
- (void)addActiveExecutionSignal:(id)arg1;	// IMP=0x0000000101432b68
@property(readonly, copy) NSArray *activeExecutionSignals;
@property _Bool allowsConcurrentExecution;

@end

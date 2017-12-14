//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString;

@interface RWPromise : NSObject
{
    id _value;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    unsigned long long _state;	// 24 = 0x18
    id _strongSelf;	// 32 = 0x20
    RWPromise *_depPromise;	// 40 = 0x28
    CDUnknownBlockType _resolveBlock;	// 48 = 0x30
    CDUnknownBlockType _rejectBlock;	// 56 = 0x38
    CDUnknownBlockType _promiseBlock;	// 64 = 0x40
    CDUnknownBlockType _catchBlock;	// 72 = 0x48
    CDUnknownBlockType _thenBlock;	// 80 = 0x50
    NSString *_identifier;	// 88 = 0x58
    id _valueKeptForRetry;	// 96 = 0x60
}

+ (id)reject:(id)arg1;	// IMP=0x00000001009395f8
+ (id)resolve:(id)arg1;	// IMP=0x00000001009393b0
+ (id)promise:(CDUnknownBlockType)arg1;	// IMP=0x0000000100939348
+ (id)timer:(double)arg1;	// IMP=0x0000000100939130
+ (id)all:(id)arg1;	// IMP=0x00000001009366fc
+ (id)race:(id)arg1;	// IMP=0x0000000100937f64
+ (id)filter:(id)arg1:(CDUnknownBlockType)arg2;	// IMP=0x0000000100936998
+ (id)map:(id)arg1:(CDUnknownBlockType)arg2;	// IMP=0x0000000100936ee0
+ (id)reduce:(id)arg1:(CDUnknownBlockType)arg2 initialValue:(id)arg3;	// IMP=0x0000000100937fcc
+ (id)errorWithUserInfo:(id)arg1;	// IMP=0x0000000100939108
+ (id)errorWithReason:(id)arg1;	// IMP=0x0000000100939020
+ (id)errorWithValue:(id)arg1;	// IMP=0x0000000100938f38
+ (id)errorOfReject:(id)arg1;	// IMP=0x0000000100938e50
+ (id)errorWithException:(id)arg1;	// IMP=0x0000000100938d68
@property(retain, nonatomic) id valueKeptForRetry; // @synthesize valueKeptForRetry=_valueKeptForRetry;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) CDUnknownBlockType thenBlock; // @synthesize thenBlock=_thenBlock;
@property(copy, nonatomic) CDUnknownBlockType catchBlock; // @synthesize catchBlock=_catchBlock;
@property(copy, nonatomic) CDUnknownBlockType promiseBlock; // @synthesize promiseBlock=_promiseBlock;
@property(copy, nonatomic) CDUnknownBlockType rejectBlock; // @synthesize rejectBlock=_rejectBlock;
@property(copy, nonatomic) CDUnknownBlockType resolveBlock; // @synthesize resolveBlock=_resolveBlock;
@property(retain, nonatomic) RWPromise *depPromise; // @synthesize depPromise=_depPromise;
@property(retain, nonatomic) id strongSelf; // @synthesize strongSelf=_strongSelf;
@property unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) id value; // @synthesize value=_value;
- (void).cxx_destruct;	// IMP=0x000000010093a36c
- (void)reject:(id)arg1;	// IMP=0x000000010093a140
- (void)resolve:(id)arg1;	// IMP=0x000000010093a0d8
- (void)run;	// IMP=0x0000000100939f64
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100939b8c
- (void)dealloc;	// IMP=0x0000000100939b14
- (void)loseControl;	// IMP=0x0000000100939b04
- (void)keepAlive;	// IMP=0x0000000100939af4
- (void)privateInitialize;	// IMP=0x00000001009397f8
- (id)init:(CDUnknownBlockType)arg1;	// IMP=0x0000000100939760
- (CDUnknownBlockType)retry;	// IMP=0x0000000100938594
- (CDUnknownBlockType)after;	// IMP=0x00000001009359b4
- (CDUnknownBlockType)catch;	// IMP=0x0000000100936764
- (CDUnknownBlockType)finally;	// IMP=0x0000000100936bbc
- (CDUnknownBlockType)then;	// IMP=0x000000010093a460
- (CDUnknownBlockType)timeout;	// IMP=0x000000010093a694

@end

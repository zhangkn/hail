//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class AppMonitorDimensionSet, AppMonitorMeasureSet, NSDictionary, NSLock, NSString;

@interface AppMonitorMetric : NSObject <NSCopying>
{
    _Bool _isDetail;	// 8 = 0x8
    NSString *_transactionId;	// 16 = 0x10
    NSString *_module;	// 24 = 0x18
    NSString *_monitorPoint;	// 32 = 0x20
    AppMonitorDimensionSet *_dimensionSet;	// 40 = 0x28
    AppMonitorMeasureSet *_measureSet;	// 48 = 0x30
    NSLock *_lock;	// 56 = 0x38
    NSDictionary *_extraInfo;	// 64 = 0x40
}

@property(retain, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) AppMonitorMeasureSet *measureSet; // @synthesize measureSet=_measureSet;
@property(retain, nonatomic) AppMonitorDimensionSet *dimensionSet; // @synthesize dimensionSet=_dimensionSet;
@property _Bool isDetail; // @synthesize isDetail=_isDetail;
@property(retain, nonatomic) NSString *monitorPoint; // @synthesize monitorPoint=_monitorPoint;
@property(retain, nonatomic) NSString *module; // @synthesize module=_module;
@property(retain, nonatomic) NSString *transactionId; // @synthesize transactionId=_transactionId;
- (void).cxx_destruct;	// IMP=0x00000001012094b0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000101208ed8
- (unsigned long long)hash;	// IMP=0x0000000101208e38
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000101208db8
- (void)resetTransactionId;	// IMP=0x0000000101208da0
- (_Bool)validWithDimensionValueSet:(id)arg1 MeasureValueSet:(id)arg2;	// IMP=0x0000000101208b3c
- (id)initWithModule:(id)arg1 monitorPoint:(id)arg2;	// IMP=0x0000000101208adc
- (id)initWithModule:(id)arg1 monitorPoint:(id)arg2 extraInfo:(id)arg3;	// IMP=0x0000000101208a60
- (id)initWithModule:(id)arg1 monitorPoint:(id)arg2 measureSet:(id)arg3;	// IMP=0x00000001012089e4
- (id)initWithModule:(id)arg1 monitorPoint:(id)arg2 extraInfo:(id)arg3 measureSet:(id)arg4;	// IMP=0x0000000101208944
- (id)initWithModule:(id)arg1 monitorPoint:(id)arg2 measureSet:(id)arg3 dimensionSet:(id)arg4;	// IMP=0x00000001012088a4
- (_Bool)getisDetail;	// IMP=0x000000010120875c
- (void)setisDetail:(_Bool)arg1;	// IMP=0x000000010120874c
- (id)initWithModule:(id)arg1 monitorPoint:(id)arg2 extraInfo:(id)arg3 measureSet:(id)arg4 dimensionSet:(id)arg5;	// IMP=0x000000010120858c

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AEDisputeSolutionQueryModifyDTO : NSObject
{
    _Bool _canFree;	// 8 = 0x8
    NSString *_refundAmountMaxValue;	// 16 = 0x10
    NSString *_refundAmountMinValue;	// 24 = 0x18
    NSString *_refundCurrencyCode;	// 32 = 0x20
    NSString *_solutionType;	// 40 = 0x28
    NSString *_refundAmountOld;	// 48 = 0x30
    NSString *_requestDetailOld;	// 56 = 0x38
    NSString *_solutionTypeOld;	// 64 = 0x40
}

@property(nonatomic) _Bool canFree; // @synthesize canFree=_canFree;
@property(retain) NSString *solutionTypeOld; // @synthesize solutionTypeOld=_solutionTypeOld;
@property(retain) NSString *requestDetailOld; // @synthesize requestDetailOld=_requestDetailOld;
@property(retain) NSString *refundAmountOld; // @synthesize refundAmountOld=_refundAmountOld;
@property(retain) NSString *solutionType; // @synthesize solutionType=_solutionType;
@property(retain) NSString *refundCurrencyCode; // @synthesize refundCurrencyCode=_refundCurrencyCode;
@property(retain) NSString *refundAmountMinValue; // @synthesize refundAmountMinValue=_refundAmountMinValue;
@property(retain) NSString *refundAmountMaxValue; // @synthesize refundAmountMaxValue=_refundAmountMaxValue;
- (void).cxx_destruct;	// IMP=0x000000010008897c

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AECountDownTileComponent, AETextTileComponent, NSArray;

@interface AEStoreGetCouponSegmentViewModel : NSObject
{
    _Bool _countDownStartHasEnd;	// 8 = 0x8
    _Bool _countDownEndHasEnd;	// 9 = 0x9
    AETextTileComponent *_titleVM;	// 16 = 0x10
    AETextTileComponent *_countDownStartDesVM;	// 24 = 0x18
    AECountDownTileComponent *_countDownStartVM;	// 32 = 0x20
    AETextTileComponent *_countDownEndDesVM;	// 40 = 0x28
    AECountDownTileComponent *_countDownEndVM;	// 48 = 0x30
    NSArray *_coupons;	// 56 = 0x38
}

@property(retain, nonatomic) NSArray *coupons; // @synthesize coupons=_coupons;
@property(nonatomic) _Bool countDownEndHasEnd; // @synthesize countDownEndHasEnd=_countDownEndHasEnd;
@property(retain, nonatomic) AECountDownTileComponent *countDownEndVM; // @synthesize countDownEndVM=_countDownEndVM;
@property(retain, nonatomic) AETextTileComponent *countDownEndDesVM; // @synthesize countDownEndDesVM=_countDownEndDesVM;
@property(nonatomic) _Bool countDownStartHasEnd; // @synthesize countDownStartHasEnd=_countDownStartHasEnd;
@property(retain, nonatomic) AECountDownTileComponent *countDownStartVM; // @synthesize countDownStartVM=_countDownStartVM;
@property(retain, nonatomic) AETextTileComponent *countDownStartDesVM; // @synthesize countDownStartDesVM=_countDownStartDesVM;
@property(retain, nonatomic) AETextTileComponent *titleVM; // @synthesize titleVM=_titleVM;
- (void).cxx_destruct;	// IMP=0x000000010041ffc4

@end

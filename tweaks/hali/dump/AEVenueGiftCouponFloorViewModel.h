//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTile.h"

@class AECountDownTileComponent, AETextTileComponent, NSMutableDictionary, NSString;

@interface AEVenueGiftCouponFloorViewModel : AEBaseTile
{
    _Bool _isHavePlatformCoupon;	// 8 = 0x8
    long long _state;	// 16 = 0x10
    AETextTileComponent *_couponDenominationModel;	// 24 = 0x18
    AETextTileComponent *_denominationPromptModel;	// 32 = 0x20
    AETextTileComponent *_titleModel;	// 40 = 0x28
    AETextTileComponent *_promptModel;	// 48 = 0x30
    AECountDownTileComponent *_countDownModel;	// 56 = 0x38
    AETextTileComponent *_viewDetailModel;	// 64 = 0x40
    NSString *_promotionId;	// 72 = 0x48
    NSString *_successTitleText;	// 80 = 0x50
    NSString *_successMessageText;	// 88 = 0x58
    NSString *_closeText;	// 96 = 0x60
    AETextTileComponent *_successActionModel;	// 104 = 0x68
    NSMutableDictionary *_allFields;	// 112 = 0x70
}

+ (Class)cellClass;	// IMP=0x00000001004355ec
@property(retain, nonatomic) NSMutableDictionary *allFields; // @synthesize allFields=_allFields;
@property(retain, nonatomic) AETextTileComponent *successActionModel; // @synthesize successActionModel=_successActionModel;
@property(retain, nonatomic) NSString *closeText; // @synthesize closeText=_closeText;
@property(retain, nonatomic) NSString *successMessageText; // @synthesize successMessageText=_successMessageText;
@property(retain, nonatomic) NSString *successTitleText; // @synthesize successTitleText=_successTitleText;
@property(nonatomic) _Bool isHavePlatformCoupon; // @synthesize isHavePlatformCoupon=_isHavePlatformCoupon;
@property(retain, nonatomic) NSString *promotionId; // @synthesize promotionId=_promotionId;
@property(retain, nonatomic) AETextTileComponent *viewDetailModel; // @synthesize viewDetailModel=_viewDetailModel;
@property(retain, nonatomic) AECountDownTileComponent *countDownModel; // @synthesize countDownModel=_countDownModel;
@property(retain, nonatomic) AETextTileComponent *promptModel; // @synthesize promptModel=_promptModel;
@property(retain, nonatomic) AETextTileComponent *titleModel; // @synthesize titleModel=_titleModel;
@property(retain, nonatomic) AETextTileComponent *denominationPromptModel; // @synthesize denominationPromptModel=_denominationPromptModel;
@property(retain, nonatomic) AETextTileComponent *couponDenominationModel; // @synthesize couponDenominationModel=_couponDenominationModel;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;	// IMP=0x00000001004353c4
- (double)heightForReferenceWidth:(double)arg1;	// IMP=0x000000010043500c
- (id)initWithTileDTO:(id)arg1;	// IMP=0x0000000100433b5c

@end


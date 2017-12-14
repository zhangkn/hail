//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTile.h"

@class AECountDownTileComponent, AETextTileComponent, NSMutableDictionary, NSString;

@interface AE329CouponFloorViewModel : AEBaseTile
{
    long long _state;	// 8 = 0x8
    AETextTileComponent *_couponDenominationModel;	// 16 = 0x10
    AETextTileComponent *_denominationPromptModel;	// 24 = 0x18
    AETextTileComponent *_titleModel;	// 32 = 0x20
    AETextTileComponent *_promptModel;	// 40 = 0x28
    AECountDownTileComponent *_countDownModel;	// 48 = 0x30
    AETextTileComponent *_viewDetailModel;	// 56 = 0x38
    NSString *_promotionId;	// 64 = 0x40
    NSMutableDictionary *_allFields;	// 72 = 0x48
}

+ (Class)cellClass;	// IMP=0x00000001002d2118
@property(retain, nonatomic) NSMutableDictionary *allFields; // @synthesize allFields=_allFields;
@property(retain, nonatomic) NSString *promotionId; // @synthesize promotionId=_promotionId;
@property(retain, nonatomic) AETextTileComponent *viewDetailModel; // @synthesize viewDetailModel=_viewDetailModel;
@property(retain, nonatomic) AECountDownTileComponent *countDownModel; // @synthesize countDownModel=_countDownModel;
@property(retain, nonatomic) AETextTileComponent *promptModel; // @synthesize promptModel=_promptModel;
@property(retain, nonatomic) AETextTileComponent *titleModel; // @synthesize titleModel=_titleModel;
@property(retain, nonatomic) AETextTileComponent *denominationPromptModel; // @synthesize denominationPromptModel=_denominationPromptModel;
@property(retain, nonatomic) AETextTileComponent *couponDenominationModel; // @synthesize couponDenominationModel=_couponDenominationModel;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;	// IMP=0x00000001002d1f40
- (id)initWithTileDTO:(id)arg1;	// IMP=0x00000001002d0bc0
- (double)heightForReferenceWidth:(double)arg1;	// IMP=0x00000001002d0bb4

@end


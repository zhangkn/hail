//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUGCShopNewsBaseCell.h"

@class AEUGCComponentPromotionsView;

@interface AEUGCShopNewsPromotionCell : AEUGCShopNewsBaseCell
{
    AEUGCComponentPromotionsView *_promotionsView;	// 56 = 0x38
    CDUnknownBlockType _contentAction;	// 64 = 0x40
    CDUnknownBlockType _promotionProductTapHandler;	// 72 = 0x48
}

+ (struct CGSize)autoLayoutCalculateSizeWithViewModel:(id)arg1 preferredMaxLayoutWidth:(double)arg2;	// IMP=0x0000000100ef2f78
@property(copy, nonatomic) CDUnknownBlockType promotionProductTapHandler; // @synthesize promotionProductTapHandler=_promotionProductTapHandler;
- (CDUnknownBlockType)contentAction;	// IMP=0x0000000100ef3480
@property(readonly, nonatomic) AEUGCComponentPromotionsView *promotionsView; // @synthesize promotionsView=_promotionsView;
- (void).cxx_destruct;	// IMP=0x0000000100ef34a0
- (void)reloadContentView;	// IMP=0x0000000100ef33c4
- (void)setContentAction:(CDUnknownBlockType)arg1;	// IMP=0x0000000100ef31fc
- (void)setPreferredMaxLayoutWidth:(double)arg1;	// IMP=0x0000000100ef2f10
- (id)viewModel;	// IMP=0x0000000100ef2e88
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100ef2d94

@end

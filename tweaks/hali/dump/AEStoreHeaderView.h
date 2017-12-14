//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AEStoreAllCouponView, AEStoreCouponView, AEStoreDiscountView, AEStoreImageView, AEStoreInfoView, AEStoreStatisticsView, NSArray, NSString, UIButton, UIControl, UIImageView;

@interface AEStoreHeaderView : UIView
{
    double _storeIVWidthHeightRatio;	// 8 = 0x8
    UIImageView *_storeIV;	// 16 = 0x10
    NSString *_signAction;	// 24 = 0x18
    AEStoreInfoView *_storeInfoView;	// 32 = 0x20
    AEStoreStatisticsView *_storeStatisticsView;	// 40 = 0x28
    AEStoreDiscountView *_storeDiscountView;	// 48 = 0x30
    AEStoreCouponView *_storeCouponView;	// 56 = 0x38
    AEStoreAllCouponView *_storeAllCouponView;	// 64 = 0x40
    AEStoreImageView *_storeImageView;	// 72 = 0x48
    UIView *_seperatorLine1;	// 80 = 0x50
    UIView *_seperatorLine2;	// 88 = 0x58
    UIView *_seperatorLine3;	// 96 = 0x60
    UIView *_seperatorLine4;	// 104 = 0x68
    UIView *_seperatorLine5;	// 112 = 0x70
    NSArray *_verticalConstraints;	// 120 = 0x78
    UIButton *_shareBtn;	// 128 = 0x80
    struct CGPoint _contentOffset;	// 136 = 0x88
}

+ (double)headerViewHeight:(id)arg1 withWidth:(double)arg2;	// IMP=0x0000000100d7c7b4
@property(nonatomic) struct CGPoint contentOffset; // @synthesize contentOffset=_contentOffset;
@property(readonly, nonatomic) UIButton *shareBtn; // @synthesize shareBtn=_shareBtn;
- (void).cxx_destruct;	// IMP=0x0000000100d7cf90
- (void)updateConstraints;	// IMP=0x0000000100d7c200
- (void)bindDataForAllCoupon:(id)arg1;	// IMP=0x0000000100d7c07c
- (void)bindDataForCoupon:(id)arg1;	// IMP=0x0000000100d7bf44
- (void)bindDataForDiscount:(id)arg1;	// IMP=0x0000000100d7be0c
- (void)bindDataForStatistics:(id)arg1;	// IMP=0x0000000100d7bd84
- (void)bindDataForStoreSign:(id)arg1;	// IMP=0x0000000100d7b8dc
- (void)bindDataForImage:(id)arg1;	// IMP=0x0000000100d7b7ec
- (void)bindData:(id)arg1;	// IMP=0x0000000100d7b368
@property(readonly, nonatomic) UIControl *followBtn;
@property(readonly, nonatomic) UIControl *feedbacksBtn;
@property(readonly, nonatomic) UIControl *itemsBtn;
@property(readonly, nonatomic) UIView *storeInfoView;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100d79cd8

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AEStoreVoteSelectCouponInnerView, UILabel;

@interface AEStoreVoteCouponView : UIView
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_desLabel;	// 16 = 0x10
    AEStoreVoteSelectCouponInnerView *_couponView;	// 24 = 0x18
}

@property(retain, nonatomic) AEStoreVoteSelectCouponInnerView *couponView; // @synthesize couponView=_couponView;
@property(retain, nonatomic) UILabel *desLabel; // @synthesize desLabel=_desLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;	// IMP=0x0000000100d64cb4
- (void)setupConstraints;	// IMP=0x0000000100d64368
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100d63fd0

@end


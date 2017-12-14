//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class AEShoppingCouponCellBackgroundView, NSString, UIImageView, UILabel;

@interface AEShoppingCouponCell : UITableViewCell
{
    AEShoppingCouponCellBackgroundView *_backgroundImageView;	// 8 = 0x8
    UIImageView *_couponIconView;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UILabel *_amountLabel;	// 32 = 0x20
    UILabel *_validationLabel;	// 40 = 0x28
    UILabel *_actionLabel;	// 48 = 0x30
    UIImageView *_arrowImageView;	// 56 = 0x38
    NSString *_actionUrl;	// 64 = 0x40
}

@property(retain, nonatomic) NSString *actionUrl; // @synthesize actionUrl=_actionUrl;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *actionLabel; // @synthesize actionLabel=_actionLabel;
@property(retain, nonatomic) UILabel *validationLabel; // @synthesize validationLabel=_validationLabel;
@property(retain, nonatomic) UILabel *amountLabel; // @synthesize amountLabel=_amountLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *couponIconView; // @synthesize couponIconView=_couponIconView;
@property(retain, nonatomic) AEShoppingCouponCellBackgroundView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void).cxx_destruct;	// IMP=0x000000010026c3a8
- (void)gotoActionUrl;	// IMP=0x000000010026c0dc
- (void)bindData:(id)arg1;	// IMP=0x000000010026a7e4
- (void)configureView;	// IMP=0x0000000100268d58
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000100268ca8

@end


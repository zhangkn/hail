//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AECouponDTO, NSString, UIImageView, UILabel;

@interface AECouponView : UIView
{
    UIView *_titleView;	// 8 = 0x8
    UIImageView *_iconView;	// 16 = 0x10
    UILabel *_titleLbl;	// 24 = 0x18
    UIImageView *_indicatorIv;	// 32 = 0x20
    UIImageView *_titleDotLine;	// 40 = 0x28
    UIImageView *_bgIV;	// 48 = 0x30
    UILabel *_couponValueLbl;	// 56 = 0x38
    UILabel *_couponLimitLbl;	// 64 = 0x40
    UIImageView *_dotLine;	// 72 = 0x48
    UIView *_bottomView;	// 80 = 0x50
    UILabel *_couponTypeLbl;	// 88 = 0x58
    UILabel *_validPeriodLbl;	// 96 = 0x60
    UILabel *_statusLbl;	// 104 = 0x68
    UILabel *_productsLabel;	// 112 = 0x70
    long long _couponViewType;	// 120 = 0x78
    NSString *_sellerAdminSeq;	// 128 = 0x80
    AECouponDTO *_couponDTO;	// 136 = 0x88
}

@property(retain, nonatomic) AECouponDTO *couponDTO; // @synthesize couponDTO=_couponDTO;
@property(retain, nonatomic) NSString *sellerAdminSeq; // @synthesize sellerAdminSeq=_sellerAdminSeq;
@property(nonatomic) long long couponViewType; // @synthesize couponViewType=_couponViewType;
- (void).cxx_destruct;	// IMP=0x0000000100044aa4
- (void)gotoSelectedItems;	// IMP=0x0000000100044954
- (void)gotoUrl;	// IMP=0x000000010004462c
- (void)bindData:(id)arg1;	// IMP=0x0000000100043b24
- (void)setCouponType:(id)arg1;	// IMP=0x00000001000437b4
- (void)setStatus:(id)arg1;	// IMP=0x00000001000433bc
- (void)setValidPeriod:(id)arg1 endDate:(id)arg2;	// IMP=0x000000010004310c
- (id)dateStart:(id)arg1 end:(id)arg2;	// IMP=0x0000000100042f68
- (void)setCouponValue:(id)arg1 limit:(id)arg2;	// IMP=0x0000000100042af0
- (void)layoutSubviews;	// IMP=0x0000000100042a10
- (void)configConstraints;	// IMP=0x00000001000401b4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000401a4
- (id)initWithType:(long long)arg1;	// IMP=0x000000010003f4f4
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010003f4e4

@end

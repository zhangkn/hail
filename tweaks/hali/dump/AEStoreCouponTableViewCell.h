//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSString, UIButton, UILabel;

@interface AEStoreCouponTableViewCell : UITableViewCell
{
    UILabel *_couponValueLbl;	// 8 = 0x8
    UILabel *_couponUseDesLbl;	// 16 = 0x10
    UILabel *_couponExpireLbl;	// 24 = 0x18
    UIButton *_actionBtn;	// 32 = 0x20
    UILabel *_productsLabel;	// 40 = 0x28
    NSString *_mobileSellerCouponRangeUrl;	// 48 = 0x30
}

@property(retain, nonatomic) NSString *mobileSellerCouponRangeUrl; // @synthesize mobileSellerCouponRangeUrl=_mobileSellerCouponRangeUrl;
@property(readonly, nonatomic) UIButton *actionBtn; // @synthesize actionBtn=_actionBtn;
- (void).cxx_destruct;	// IMP=0x0000000100619130
- (void)gotoSelectedItems;	// IMP=0x0000000100618ee4
- (void)bindShoppingCouponData:(id)arg1;	// IMP=0x0000000100618b14
- (void)bindSellerCouponData:(id)arg1 showTargetURL:(_Bool)arg2;	// IMP=0x0000000100618278
- (id)dateLocale:(id)arg1;	// IMP=0x0000000100618130
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000001006168b4

@end


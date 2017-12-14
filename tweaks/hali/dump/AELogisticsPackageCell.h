//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class AELogisticsInfoVIewController, NSString, PackageAddressView, PackageInfoView, ShippingDetailView, ShippingStatusView, UIImageView, UIView;

@interface AELogisticsPackageCell : UITableViewCell
{
    PackageAddressView *_packageAddressView;	// 8 = 0x8
    ShippingStatusView *_shippingStatusView;	// 16 = 0x10
    ShippingDetailView *_shippingDetailView;	// 24 = 0x18
    PackageInfoView *_packageInfoView;	// 32 = 0x20
    UIView *_collapseView;	// 40 = 0x28
    UIImageView *_collapseImgView;	// 48 = 0x30
    UIView *_sepView1;	// 56 = 0x38
    UIView *_sepView2;	// 64 = 0x40
    long long _packageIndex;	// 72 = 0x48
    AELogisticsInfoVIewController *_delegate;	// 80 = 0x50
    NSString *_orderID;	// 88 = 0x58
}

@property(retain, nonatomic) NSString *orderID; // @synthesize orderID=_orderID;
@property(nonatomic) __weak AELogisticsInfoVIewController *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long packageIndex; // @synthesize packageIndex=_packageIndex;
- (void).cxx_destruct;	// IMP=0x000000010012ecf4
- (void)bindData:(id)arg1 isCollapse:(_Bool)arg2 canCollapse:(_Bool)arg3 showStatusOnly:(_Bool)arg4;	// IMP=0x000000010012c65c
- (float)getHeightForView:(id)arg1;	// IMP=0x000000010012c540
- (float)getCellHeight;	// IMP=0x000000010012c2dc
- (void)setupUI;	// IMP=0x000000010012b57c
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000010012b524

@end

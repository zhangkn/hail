//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIImageView, UILabel;

@interface AEUGCShopNewsPicTextCouponCardCell : UICollectionViewCell
{
    UIImageView *_bgImageView;	// 8 = 0x8
    UILabel *_couponInfoLabel;	// 16 = 0x10
    UILabel *_getCouponLabel;	// 24 = 0x18
    id <AEUGCShopNewsPicTextCouponCardCellViewModel> _viewModel;	// 32 = 0x20
}

@property(nonatomic) __weak id <AEUGCShopNewsPicTextCouponCardCellViewModel> viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;	// IMP=0x0000000100ec18f0
- (void)bindModel:(id)arg1;	// IMP=0x0000000100ec16b4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100ec0a90

@end


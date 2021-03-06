//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class AESelfFetchingAddressCellModel, AEStandardMailingAddressView, NKRRPaddingLabel, UIImageView, UILabel;

@interface AESelfFetchingAddressCell : UITableViewCell
{
    AESelfFetchingAddressCellModel *_viewModel;	// 8 = 0x8
    id <AESelfFetchingAddressCellDelegate> _delegate;	// 16 = 0x10
    NKRRPaddingLabel *_recommendLabel;	// 24 = 0x18
    AEStandardMailingAddressView *_addressView;	// 32 = 0x20
    UIImageView *_iconImageView;	// 40 = 0x28
    UILabel *_distanceLabel;	// 48 = 0x30
}

@property(retain, nonatomic) UILabel *distanceLabel; // @synthesize distanceLabel=_distanceLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) AEStandardMailingAddressView *addressView; // @synthesize addressView=_addressView;
@property(retain, nonatomic) NKRRPaddingLabel *recommendLabel; // @synthesize recommendLabel=_recommendLabel;
@property(nonatomic) __weak id <AESelfFetchingAddressCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AESelfFetchingAddressCellModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;	// IMP=0x00000001005f3ee4
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000001005f3c1c
- (void)onSelectLocation:(id)arg1;	// IMP=0x00000001005f3b70
- (void)setupConstraints:(_Bool)arg1 showDistance:(_Bool)arg2;	// IMP=0x00000001005f25d8
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000001005f1fb4

@end


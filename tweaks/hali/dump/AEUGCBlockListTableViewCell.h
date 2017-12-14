//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class AEUGCBlockButton, AEUGCBlockModel, UIImageView, UILabel;

@interface AEUGCBlockListTableViewCell : UITableViewCell
{
    _Bool _didSetupConstraints;	// 8 = 0x8
    AEUGCBlockButton *_blockingButton;	// 16 = 0x10
    AEUGCBlockButton *_undoButton;	// 24 = 0x18
    UILabel *_unBlockedLabel;	// 32 = 0x20
    UIImageView *_avatarImageView;	// 40 = 0x28
    UILabel *_nickNameLabel;	// 48 = 0x30
    UILabel *_timeLabel;	// 56 = 0x38
    UIImageView *_countryFlagImageView;	// 64 = 0x40
    UIImageView *_genderImageView;	// 72 = 0x48
    UILabel *_buyerLevelLabel;	// 80 = 0x50
    AEUGCBlockModel *_blockUserInfo;	// 88 = 0x58
}

@property(retain, nonatomic) AEUGCBlockModel *blockUserInfo; // @synthesize blockUserInfo=_blockUserInfo;
@property(nonatomic) _Bool didSetupConstraints; // @synthesize didSetupConstraints=_didSetupConstraints;
@property(retain, nonatomic) UILabel *buyerLevelLabel; // @synthesize buyerLevelLabel=_buyerLevelLabel;
@property(retain, nonatomic) UIImageView *genderImageView; // @synthesize genderImageView=_genderImageView;
@property(retain, nonatomic) UIImageView *countryFlagImageView; // @synthesize countryFlagImageView=_countryFlagImageView;
@property(copy, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(copy, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UILabel *unBlockedLabel; // @synthesize unBlockedLabel=_unBlockedLabel;
@property(retain, nonatomic) AEUGCBlockButton *undoButton; // @synthesize undoButton=_undoButton;
@property(retain, nonatomic) AEUGCBlockButton *blockingButton; // @synthesize blockingButton=_blockingButton;
- (void).cxx_destruct;	// IMP=0x0000000100e56c04
- (void)fillCellWithData:(id)arg1;	// IMP=0x0000000100e5589c
- (void)layoutSubviews;	// IMP=0x0000000100e5578c
- (void)updateConstraints;	// IMP=0x0000000100e54ddc
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000100e54ad0

@end


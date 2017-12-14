//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class AEQandAButton, AIFCopyLabel, UIImageView, UILabel;

@interface AEQandAAnswerListCell : UITableViewCell
{
    _Bool _didSetupConstraints;	// 8 = 0x8
    UIImageView *_avatarImageView;	// 16 = 0x10
    AEQandAButton *_moreButton;	// 24 = 0x18
    UILabel *_nickNameLabel;	// 32 = 0x20
    UIImageView *_flagImageView;	// 40 = 0x28
    UILabel *_purchasedLabel;	// 48 = 0x30
    UILabel *_timeLabel;	// 56 = 0x38
    AIFCopyLabel *_replyLabel;	// 64 = 0x40
}

@property(retain, nonatomic) AIFCopyLabel *replyLabel; // @synthesize replyLabel=_replyLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *purchasedLabel; // @synthesize purchasedLabel=_purchasedLabel;
@property(retain, nonatomic) UIImageView *flagImageView; // @synthesize flagImageView=_flagImageView;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(nonatomic) _Bool didSetupConstraints; // @synthesize didSetupConstraints=_didSetupConstraints;
@property(retain, nonatomic) AEQandAButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void).cxx_destruct;	// IMP=0x00000001002317bc
- (void)fillCellWithData:(id)arg1;	// IMP=0x0000000100230934
- (id)nationalFlagImage:(id)arg1;	// IMP=0x000000010023089c
- (void)layoutSubviews;	// IMP=0x00000001002307f4
- (void)updateConstraints;	// IMP=0x000000010022eed0
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000010022ec1c

@end


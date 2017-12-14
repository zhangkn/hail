//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class AEUserMedalSubview, CustomBadge, UIButton, UIImageView, UILabel;

@interface AEUserProfileCell : UITableViewCell
{
    _Bool _isVip;	// 8 = 0x8
    UIImageView *_userAvatarBg;	// 16 = 0x10
    UILabel *_userName;	// 24 = 0x18
    UILabel *_userScore;	// 32 = 0x20
    UIButton *_userAvatar;	// 40 = 0x28
    UILabel *_feedBackScore;	// 48 = 0x30
    AEUserMedalSubview *_userMedal;	// 56 = 0x38
    UILabel *_numberOfMsg;	// 64 = 0x40
    UILabel *_numberOfNotification;	// 72 = 0x48
    UIButton *_msgBtn;	// 80 = 0x50
    UIButton *_notificationBtn;	// 88 = 0x58
    UILabel *_email;	// 96 = 0x60
    UIImageView *_vipImageView;	// 104 = 0x68
    UIImageView *_userLevelImageView;	// 112 = 0x70
    CustomBadge *_badge;	// 120 = 0x78
    UIImageView *_indicatorImg;	// 128 = 0x80
    UILabel *_buyerLevel;	// 136 = 0x88
}

@property(retain, nonatomic) UILabel *buyerLevel; // @synthesize buyerLevel=_buyerLevel;
@property(retain, nonatomic) UIImageView *indicatorImg; // @synthesize indicatorImg=_indicatorImg;
@property(retain, nonatomic) CustomBadge *badge; // @synthesize badge=_badge;
@property(retain, nonatomic) UIImageView *userLevelImageView; // @synthesize userLevelImageView=_userLevelImageView;
@property(retain, nonatomic) UIImageView *vipImageView; // @synthesize vipImageView=_vipImageView;
@property(retain, nonatomic) UILabel *email; // @synthesize email=_email;
@property(retain, nonatomic) UIButton *notificationBtn; // @synthesize notificationBtn=_notificationBtn;
@property(retain, nonatomic) UIButton *msgBtn; // @synthesize msgBtn=_msgBtn;
@property(retain, nonatomic) UILabel *numberOfNotification; // @synthesize numberOfNotification=_numberOfNotification;
@property(retain, nonatomic) UILabel *numberOfMsg; // @synthesize numberOfMsg=_numberOfMsg;
@property(retain, nonatomic) AEUserMedalSubview *userMedal; // @synthesize userMedal=_userMedal;
@property(retain, nonatomic) UILabel *feedBackScore; // @synthesize feedBackScore=_feedBackScore;
@property(retain, nonatomic) UIButton *userAvatar; // @synthesize userAvatar=_userAvatar;
@property(nonatomic) _Bool isVip; // @synthesize isVip=_isVip;
@property(retain, nonatomic) UILabel *userScore; // @synthesize userScore=_userScore;
@property(retain, nonatomic) UILabel *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) UIImageView *userAvatarBg; // @synthesize userAvatarBg=_userAvatarBg;
- (void).cxx_destruct;	// IMP=0x0000000100282ce4
- (void)hideBadge;	// IMP=0x0000000100282820
- (void)showBadge:(id)arg1;	// IMP=0x00000001002825d8
- (_Bool)shouldShowBadge;	// IMP=0x0000000100282520
- (void)handleBadge;	// IMP=0x00000001002824cc
- (void)updateBuyerRewards:(id)arg1;	// IMP=0x00000001002821cc
- (void)resizeCell;	// IMP=0x00000001002813c0
- (void)layoutSubviews;	// IMP=0x00000001002812a4
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000010027f7ac

@end


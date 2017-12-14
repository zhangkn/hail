//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AEModuleUGCUserProfileModel, AEUGCiTaoProfileSwitchBarView, UIButton, UIImageView, UILabel;

@interface AEUGCiTaoProfileHeaderView : UIView
{
    _Bool _bMyProfile;	// 8 = 0x8
    UIImageView *_topView;	// 16 = 0x10
    CDUnknownBlockType _actionTouchAvatar;	// 24 = 0x18
    CDUnknownBlockType _actionTouchFollowers;	// 32 = 0x20
    CDUnknownBlockType _actionTouchFollowing;	// 40 = 0x28
    CDUnknownBlockType _actionTouchExpand;	// 48 = 0x30
    CDUnknownBlockType _actionTouchFollow;	// 56 = 0x38
    CDUnknownBlockType _actionTouchPost;	// 64 = 0x40
    CDUnknownBlockType _actionTouchLike;	// 72 = 0x48
    UIImageView *_avatarImageView;	// 80 = 0x50
    UIView *_avatarContainerView;	// 88 = 0x58
    UILabel *_nickNameLabel;	// 96 = 0x60
    UIButton *_followButton;	// 104 = 0x68
    UIButton *_followersTitleButton;	// 112 = 0x70
    UIButton *_followingTitleButton;	// 120 = 0x78
    UIButton *_expandPushButton;	// 128 = 0x80
    UIView *_topSplitView;	// 136 = 0x88
    UILabel *_userDescriptionLabel;	// 144 = 0x90
    UIView *_profileContentBackgroundView;	// 152 = 0x98
    AEUGCiTaoProfileSwitchBarView *_switchBar;	// 160 = 0xa0
    AEModuleUGCUserProfileModel *_model;	// 168 = 0xa8
}

@property(nonatomic) _Bool bMyProfile; // @synthesize bMyProfile=_bMyProfile;
@property(retain, nonatomic) AEModuleUGCUserProfileModel *model; // @synthesize model=_model;
@property(retain, nonatomic) AEUGCiTaoProfileSwitchBarView *switchBar; // @synthesize switchBar=_switchBar;
@property(retain, nonatomic) UIView *profileContentBackgroundView; // @synthesize profileContentBackgroundView=_profileContentBackgroundView;
@property(retain, nonatomic) UILabel *userDescriptionLabel; // @synthesize userDescriptionLabel=_userDescriptionLabel;
@property(retain, nonatomic) UIView *topSplitView; // @synthesize topSplitView=_topSplitView;
@property(retain, nonatomic) UIButton *expandPushButton; // @synthesize expandPushButton=_expandPushButton;
@property(retain, nonatomic) UIButton *followingTitleButton; // @synthesize followingTitleButton=_followingTitleButton;
@property(retain, nonatomic) UIButton *followersTitleButton; // @synthesize followersTitleButton=_followersTitleButton;
@property(retain, nonatomic) UIButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) UIView *avatarContainerView; // @synthesize avatarContainerView=_avatarContainerView;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(copy, nonatomic) CDUnknownBlockType actionTouchLike; // @synthesize actionTouchLike=_actionTouchLike;
@property(copy, nonatomic) CDUnknownBlockType actionTouchPost; // @synthesize actionTouchPost=_actionTouchPost;
@property(copy, nonatomic) CDUnknownBlockType actionTouchFollow; // @synthesize actionTouchFollow=_actionTouchFollow;
@property(copy, nonatomic) CDUnknownBlockType actionTouchExpand; // @synthesize actionTouchExpand=_actionTouchExpand;
@property(copy, nonatomic) CDUnknownBlockType actionTouchFollowing; // @synthesize actionTouchFollowing=_actionTouchFollowing;
@property(copy, nonatomic) CDUnknownBlockType actionTouchFollowers; // @synthesize actionTouchFollowers=_actionTouchFollowers;
@property(copy, nonatomic) CDUnknownBlockType actionTouchAvatar; // @synthesize actionTouchAvatar=_actionTouchAvatar;
@property(retain, nonatomic) UIImageView *topView; // @synthesize topView=_topView;
- (void).cxx_destruct;	// IMP=0x0000000100e6cabc
- (void)updateFollowButtonStatus:(_Bool)arg1;	// IMP=0x0000000100e6b088
- (void)updateInfoLabel:(_Bool)arg1;	// IMP=0x0000000100e6a8ec
- (void)expandPushButtonAction:(id)arg1;	// IMP=0x0000000100e6a824
- (void)onAvatarTouched:(id)arg1;	// IMP=0x0000000100e6a79c
- (void)onFollowingButtonTouched:(id)arg1;	// IMP=0x0000000100e6a714
- (void)onFollowersButtonTouched:(id)arg1;	// IMP=0x0000000100e6a68c
- (void)onFollowButtonTouched:(id)arg1;	// IMP=0x0000000100e6a604
- (void)touchLike:(CDUnknownBlockType)arg1;	// IMP=0x0000000100e6a5f8
- (void)touchPost:(CDUnknownBlockType)arg1;	// IMP=0x0000000100e6a5ec
- (void)touchFollow:(CDUnknownBlockType)arg1;	// IMP=0x0000000100e6a5e0
- (void)touchExpand:(CDUnknownBlockType)arg1;	// IMP=0x0000000100e6a5d4
- (void)touchFollowing:(CDUnknownBlockType)arg1;	// IMP=0x0000000100e6a5c8
- (void)touchFollowers:(CDUnknownBlockType)arg1;	// IMP=0x0000000100e6a5bc
- (void)touchAvatar:(CDUnknownBlockType)arg1;	// IMP=0x0000000100e6a5b0
- (void)refreshWithModel:(id)arg1;	// IMP=0x0000000100e69494
- (void)initViewContraints;	// IMP=0x0000000100e6650c
- (void)action;	// IMP=0x0000000100e66340
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100e662d8

@end

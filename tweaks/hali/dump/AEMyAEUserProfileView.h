//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AEUserProfileDTO, UIButton, UIImageView, UILabel;

@interface AEMyAEUserProfileView : UIView
{
    UIImageView *_dotImageView;	// 8 = 0x8
    id <AEMyUserProfileViewDelegate> _delegate;	// 16 = 0x10
    UIImageView *_userAvatar;	// 24 = 0x18
    UILabel *_userName;	// 32 = 0x20
    UILabel *_userFeedbackScore;	// 40 = 0x28
    UIImageView *_userLevelImageView;	// 48 = 0x30
    UILabel *_userEmail;	// 56 = 0x38
    UIButton *_enterMyProfile;	// 64 = 0x40
    UILabel *_buyerRewards;	// 72 = 0x48
    AEUserProfileDTO *_userProfileDto;	// 80 = 0x50
    UIButton *_clickAreaButton;	// 88 = 0x58
    UIImageView *_indicatorView;	// 96 = 0x60
    UILabel *_activeMessageLabel;	// 104 = 0x68
    UIButton *_completeButton;	// 112 = 0x70
}

+ (double)viewHeight;	// IMP=0x00000001001a00ac
@property(retain, nonatomic) UIButton *completeButton; // @synthesize completeButton=_completeButton;
@property(retain, nonatomic) UILabel *activeMessageLabel; // @synthesize activeMessageLabel=_activeMessageLabel;
@property(retain, nonatomic) UIImageView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UIButton *clickAreaButton; // @synthesize clickAreaButton=_clickAreaButton;
@property(retain, nonatomic) AEUserProfileDTO *userProfileDto; // @synthesize userProfileDto=_userProfileDto;
@property(retain, nonatomic) UILabel *buyerRewards; // @synthesize buyerRewards=_buyerRewards;
@property(retain, nonatomic) UIButton *enterMyProfile; // @synthesize enterMyProfile=_enterMyProfile;
@property(retain, nonatomic) UILabel *userEmail; // @synthesize userEmail=_userEmail;
@property(retain, nonatomic) UIImageView *userLevelImageView; // @synthesize userLevelImageView=_userLevelImageView;
@property(retain, nonatomic) UILabel *userFeedbackScore; // @synthesize userFeedbackScore=_userFeedbackScore;
@property(retain, nonatomic) UILabel *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) UIImageView *userAvatar; // @synthesize userAvatar=_userAvatar;
@property(nonatomic) __weak id <AEMyUserProfileViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *dotImageView; // @synthesize dotImageView=_dotImageView;
- (void).cxx_destruct;	// IMP=0x00000001001a1544
- (void)completeAccountAction;	// IMP=0x00000001001a1174
- (void)onUserAvatarTapped;	// IMP=0x00000001001a025c
- (void)doEnterProfile:(id)arg1;	// IMP=0x00000001001a00b8
- (id)getavatarDefaultName:(id)arg1;	// IMP=0x000000010019ff84
- (void)bindData:(id)arg1;	// IMP=0x000000010019f568
- (void)privateActivateAreaLayout;	// IMP=0x000000010019ee5c
- (void)privateFeedbackScoreLayout;	// IMP=0x000000010019e1c4
- (void)privateUserEmailLayout;	// IMP=0x000000010019de20
- (void)privateUserNameLayout;	// IMP=0x000000010019d564
- (void)privateAvatarLayout;	// IMP=0x000000010019d150
- (void)privateEnterMyProfileLayout;	// IMP=0x000000010019ce54
- (void)privateLayoutProfileClickArea;	// IMP=0x000000010019cbb4
- (void)privateLayoutIndicatorImageView;	// IMP=0x000000010019c808
- (void)privateLayoutDotImageView;	// IMP=0x000000010019c00c
- (void)layoutViews;	// IMP=0x000000010019bf2c
- (void)setupUI;	// IMP=0x000000010019bd5c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010019bcf4
- (id)init;	// IMP=0x000000010019bc8c

@end


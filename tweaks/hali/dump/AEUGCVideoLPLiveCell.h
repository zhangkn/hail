//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class AELikeAnimationView, AEUGCVideoFollowActionButton, AEUGCVideoLPLiveDTO, MASConstraint, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIView;

@interface AEUGCVideoLPLiveCell : UICollectionViewCell
{
    _Bool _needShowAnimation;	// 8 = 0x8
    id <AEUGCVideoLPLiveCellDelegate> _cellDelegate;	// 16 = 0x10
    UIView *_containerView;	// 24 = 0x18
    UIImageView *_avatarImageView;	// 32 = 0x20
    UILabel *_nicknameLabel;	// 40 = 0x28
    UILabel *_timestampLabel;	// 48 = 0x30
    UIView *_languageContainerView;	// 56 = 0x38
    UILabel *_languageLabel;	// 64 = 0x40
    UIView *_remindButtonContainerView;	// 72 = 0x48
    UIActivityIndicatorView *_remindLoadingView;	// 80 = 0x50
    UIButton *_remindMeButton;	// 88 = 0x58
    UIView *_followButtonContainerView;	// 96 = 0x60
    AEUGCVideoFollowActionButton *_followButton;	// 104 = 0x68
    UIImageView *_coverImageView;	// 112 = 0x70
    UIView *_topLine;	// 120 = 0x78
    UIView *_bottomLine;	// 128 = 0x80
    UIView *_seperateView;	// 136 = 0x88
    UIView *_playbackFlagView;	// 144 = 0x90
    UILabel *_playbackLabel;	// 152 = 0x98
    UIView *_comingsoonFlagView;	// 160 = 0xa0
    UILabel *_comingsoonLabel;	// 168 = 0xa8
    UIView *_livingFlagView;	// 176 = 0xb0
    UIView *_livingDotView;	// 184 = 0xb8
    UILabel *_livingLabel;	// 192 = 0xc0
    UIView *_popularContainerView;	// 200 = 0xc8
    UIView *_popularContainerRightView;	// 208 = 0xd0
    UILabel *_popularLabel;	// 216 = 0xd8
    UIImageView *_popularImageView;	// 224 = 0xe0
    UIView *_couponContainerView;	// 232 = 0xe8
    UILabel *_couponLabel;	// 240 = 0xf0
    UIImageView *_couponImageView;	// 248 = 0xf8
    UILabel *_topProductLabel;	// 256 = 0x100
    UIImageView *_leftProductImageView;	// 264 = 0x108
    UILabel *_leftProductPriceLabel;	// 272 = 0x110
    UIImageView *_rightProductImageView;	// 280 = 0x118
    UILabel *_rightProductPriceLabel;	// 288 = 0x120
    AELikeAnimationView *_likeAnimationView;	// 296 = 0x128
    MASConstraint *_noProductBottomConstraint;	// 304 = 0x130
    MASConstraint *_productBottomConstraint;	// 312 = 0x138
    MASConstraint *_couponBottomConstraint;	// 320 = 0x140
    AEUGCVideoLPLiveDTO *_liveDTO;	// 328 = 0x148
}

@property(nonatomic) _Bool needShowAnimation; // @synthesize needShowAnimation=_needShowAnimation;
@property(retain, nonatomic) AEUGCVideoLPLiveDTO *liveDTO; // @synthesize liveDTO=_liveDTO;
@property(retain, nonatomic) MASConstraint *couponBottomConstraint; // @synthesize couponBottomConstraint=_couponBottomConstraint;
@property(retain, nonatomic) MASConstraint *productBottomConstraint; // @synthesize productBottomConstraint=_productBottomConstraint;
@property(retain, nonatomic) MASConstraint *noProductBottomConstraint; // @synthesize noProductBottomConstraint=_noProductBottomConstraint;
@property(retain, nonatomic) AELikeAnimationView *likeAnimationView; // @synthesize likeAnimationView=_likeAnimationView;
@property(retain, nonatomic) UILabel *rightProductPriceLabel; // @synthesize rightProductPriceLabel=_rightProductPriceLabel;
@property(retain, nonatomic) UIImageView *rightProductImageView; // @synthesize rightProductImageView=_rightProductImageView;
@property(retain, nonatomic) UILabel *leftProductPriceLabel; // @synthesize leftProductPriceLabel=_leftProductPriceLabel;
@property(retain, nonatomic) UIImageView *leftProductImageView; // @synthesize leftProductImageView=_leftProductImageView;
@property(retain, nonatomic) UILabel *topProductLabel; // @synthesize topProductLabel=_topProductLabel;
@property(retain, nonatomic) UIImageView *couponImageView; // @synthesize couponImageView=_couponImageView;
@property(retain, nonatomic) UILabel *couponLabel; // @synthesize couponLabel=_couponLabel;
@property(retain, nonatomic) UIView *couponContainerView; // @synthesize couponContainerView=_couponContainerView;
@property(retain, nonatomic) UIImageView *popularImageView; // @synthesize popularImageView=_popularImageView;
@property(retain, nonatomic) UILabel *popularLabel; // @synthesize popularLabel=_popularLabel;
@property(retain, nonatomic) UIView *popularContainerRightView; // @synthesize popularContainerRightView=_popularContainerRightView;
@property(retain, nonatomic) UIView *popularContainerView; // @synthesize popularContainerView=_popularContainerView;
@property(retain, nonatomic) UILabel *livingLabel; // @synthesize livingLabel=_livingLabel;
@property(retain, nonatomic) UIView *livingDotView; // @synthesize livingDotView=_livingDotView;
@property(retain, nonatomic) UIView *livingFlagView; // @synthesize livingFlagView=_livingFlagView;
@property(retain, nonatomic) UILabel *comingsoonLabel; // @synthesize comingsoonLabel=_comingsoonLabel;
@property(retain, nonatomic) UIView *comingsoonFlagView; // @synthesize comingsoonFlagView=_comingsoonFlagView;
@property(retain, nonatomic) UILabel *playbackLabel; // @synthesize playbackLabel=_playbackLabel;
@property(retain, nonatomic) UIView *playbackFlagView; // @synthesize playbackFlagView=_playbackFlagView;
@property(retain, nonatomic) UIView *seperateView; // @synthesize seperateView=_seperateView;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) AEUGCVideoFollowActionButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UIView *followButtonContainerView; // @synthesize followButtonContainerView=_followButtonContainerView;
@property(retain, nonatomic) UIButton *remindMeButton; // @synthesize remindMeButton=_remindMeButton;
@property(retain, nonatomic) UIActivityIndicatorView *remindLoadingView; // @synthesize remindLoadingView=_remindLoadingView;
@property(retain, nonatomic) UIView *remindButtonContainerView; // @synthesize remindButtonContainerView=_remindButtonContainerView;
@property(retain, nonatomic) UILabel *languageLabel; // @synthesize languageLabel=_languageLabel;
@property(retain, nonatomic) UIView *languageContainerView; // @synthesize languageContainerView=_languageContainerView;
@property(retain, nonatomic) UILabel *timestampLabel; // @synthesize timestampLabel=_timestampLabel;
@property(retain, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <AEUGCVideoLPLiveCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
- (void).cxx_destruct;	// IMP=0x0000000100ff57e0
- (void)setupConstraints;	// IMP=0x0000000100fea5b8
- (void)setRemindMeButtonStatus:(long long)arg1;	// IMP=0x0000000100fe9e88
- (void)bindProductsModel:(id)arg1;	// IMP=0x0000000100fe9490
- (void)onFollowButtonTapped:(id)arg1;	// IMP=0x0000000100fe9278
- (void)onRemindMeButtonTapped:(id)arg1;	// IMP=0x0000000100fe916c
- (void)updateFollowButtonStatus;	// IMP=0x0000000100fe8dfc
- (void)bindModel:(id)arg1;	// IMP=0x0000000100fe686c
- (void)resignActive;	// IMP=0x0000000100fe67dc
- (void)becomeActive;	// IMP=0x0000000100fe64a8
- (void)endDisplay;	// IMP=0x0000000100fe6408
- (void)willDisplay;	// IMP=0x0000000100fe62c0
- (void)prepareForReuse;	// IMP=0x0000000100fe61d4
- (void)dealloc;	// IMP=0x0000000100fe6158
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100fe5248

@end


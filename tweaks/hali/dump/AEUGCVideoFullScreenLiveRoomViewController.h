//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUIViewController.h"

#import "AEUGCVideoFullScreenPresenterViewDelegate.h"
#import "AEUGCVideoFullScreenShoppingViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextViewDelegate.h"

@class AEUGCLiveHighlightView, AEUGCLiveLikeView, AEUGCReportService, AEUGCVideoFollowActionButton, AEUGCVideoFullScreenPresenterView, AEUGCVideoFullScreenShoppingView, AEUGCVideoLiveNoticeDTO, AEUGCVideoLiveRoomViewModel, AEUGCVideoPlayer, AEUGCVideoService, AEUGCVideoUserActionView, NSString, NSTimer, UIButton, UIImageView, UILabel, UITableView, UITextView, UIView;

@interface AEUGCVideoFullScreenLiveRoomViewController : AEUIViewController <UITableViewDelegate, UITableViewDataSource, AEUGCVideoFullScreenShoppingViewDelegate, AEUGCVideoFullScreenPresenterViewDelegate, UITextViewDelegate>
{
    _Bool _hasObserveredLiveRoomViewModel;	// 8 = 0x8
    _Bool _showHostCommentView;	// 9 = 0x9
    AEUGCVideoPlayer *_videoPlayer;	// 16 = 0x10
    UIButton *_backButton;	// 24 = 0x18
    UIImageView *_avatarImageView;	// 32 = 0x20
    UILabel *_nicknameLabel;	// 40 = 0x28
    UIView *_playTypeContainerView;	// 48 = 0x30
    UILabel *_playTypeLabel;	// 56 = 0x38
    UIImageView *_audienceIconImageView;	// 64 = 0x40
    UILabel *_audienceCountLabel;	// 72 = 0x48
    AEUGCVideoFollowActionButton *_followActionButton;	// 80 = 0x50
    UIButton *_topMenuButton;	// 88 = 0x58
    UIView *_fakeInputLabelContainerView;	// 96 = 0x60
    UIImageView *_fakeInputIconImageView;	// 104 = 0x68
    UILabel *_fakeInputLabel;	// 112 = 0x70
    UITableView *_commentTableView;	// 120 = 0x78
    AEUGCVideoUserActionView *_userActionView;	// 128 = 0x80
    UIView *_shoppingButtonContainerView;	// 136 = 0x88
    UIImageView *_shoppingImageView;	// 144 = 0x90
    UIView *_presenterButtonContainerView;	// 152 = 0x98
    UIImageView *_presenterImageView;	// 160 = 0xa0
    UIView *_presenterDotView;	// 168 = 0xa8
    AEUGCLiveLikeView *_likeButtionView;	// 176 = 0xb0
    AEUGCVideoFullScreenShoppingView *_shoppingView;	// 184 = 0xb8
    AEUGCVideoFullScreenPresenterView *_presenterView;	// 192 = 0xc0
    UIView *_inputContainerView;	// 200 = 0xc8
    UIView *_inputInnerView;	// 208 = 0xd0
    UITextView *_inputTextView;	// 216 = 0xd8
    UILabel *_inputCountLabel;	// 224 = 0xe0
    double _screenWidth;	// 232 = 0xe8
    double _screenHeight;	// 240 = 0xf0
    double _rightSliderViewWidth;	// 248 = 0xf8
    AEUGCVideoLiveRoomViewModel *_liveRoomViewModel;	// 256 = 0x100
    AEUGCVideoService *_videoService;	// 264 = 0x108
    long long _currentCommentCount;	// 272 = 0x110
    long long _roomStatus;	// 280 = 0x118
    AEUGCVideoLiveNoticeDTO *_replyPresenterNotice;	// 288 = 0x120
    AEUGCReportService *_reportService;	// 296 = 0x128
    NSString *_reportActionUUID;	// 304 = 0x130
    AEUGCLiveHighlightView *_highlightView;	// 312 = 0x138
    NSTimer *_highlightAniTimer;	// 320 = 0x140
    long long _animationStep;	// 328 = 0x148
}

@property(nonatomic) long long animationStep; // @synthesize animationStep=_animationStep;
@property(retain, nonatomic) NSTimer *highlightAniTimer; // @synthesize highlightAniTimer=_highlightAniTimer;
@property(retain, nonatomic) AEUGCLiveHighlightView *highlightView; // @synthesize highlightView=_highlightView;
@property(copy, nonatomic) NSString *reportActionUUID; // @synthesize reportActionUUID=_reportActionUUID;
@property(retain, nonatomic) AEUGCReportService *reportService; // @synthesize reportService=_reportService;
@property(nonatomic) _Bool showHostCommentView; // @synthesize showHostCommentView=_showHostCommentView;
@property(nonatomic) _Bool hasObserveredLiveRoomViewModel; // @synthesize hasObserveredLiveRoomViewModel=_hasObserveredLiveRoomViewModel;
@property(retain, nonatomic) AEUGCVideoLiveNoticeDTO *replyPresenterNotice; // @synthesize replyPresenterNotice=_replyPresenterNotice;
@property(nonatomic) long long roomStatus; // @synthesize roomStatus=_roomStatus;
@property(nonatomic) long long currentCommentCount; // @synthesize currentCommentCount=_currentCommentCount;
@property(retain, nonatomic) AEUGCVideoService *videoService; // @synthesize videoService=_videoService;
@property(retain, nonatomic) AEUGCVideoLiveRoomViewModel *liveRoomViewModel; // @synthesize liveRoomViewModel=_liveRoomViewModel;
@property(nonatomic) double rightSliderViewWidth; // @synthesize rightSliderViewWidth=_rightSliderViewWidth;
@property(nonatomic) double screenHeight; // @synthesize screenHeight=_screenHeight;
@property(nonatomic) double screenWidth; // @synthesize screenWidth=_screenWidth;
@property(retain, nonatomic) UILabel *inputCountLabel; // @synthesize inputCountLabel=_inputCountLabel;
@property(retain, nonatomic) UITextView *inputTextView; // @synthesize inputTextView=_inputTextView;
@property(retain, nonatomic) UIView *inputInnerView; // @synthesize inputInnerView=_inputInnerView;
@property(retain, nonatomic) UIView *inputContainerView; // @synthesize inputContainerView=_inputContainerView;
@property(retain, nonatomic) AEUGCVideoFullScreenPresenterView *presenterView; // @synthesize presenterView=_presenterView;
@property(retain, nonatomic) AEUGCVideoFullScreenShoppingView *shoppingView; // @synthesize shoppingView=_shoppingView;
@property(retain, nonatomic) AEUGCLiveLikeView *likeButtionView; // @synthesize likeButtionView=_likeButtionView;
@property(retain, nonatomic) UIView *presenterDotView; // @synthesize presenterDotView=_presenterDotView;
@property(retain, nonatomic) UIImageView *presenterImageView; // @synthesize presenterImageView=_presenterImageView;
@property(retain, nonatomic) UIView *presenterButtonContainerView; // @synthesize presenterButtonContainerView=_presenterButtonContainerView;
@property(retain, nonatomic) UIImageView *shoppingImageView; // @synthesize shoppingImageView=_shoppingImageView;
@property(retain, nonatomic) UIView *shoppingButtonContainerView; // @synthesize shoppingButtonContainerView=_shoppingButtonContainerView;
@property(retain, nonatomic) AEUGCVideoUserActionView *userActionView; // @synthesize userActionView=_userActionView;
@property(retain, nonatomic) UITableView *commentTableView; // @synthesize commentTableView=_commentTableView;
@property(retain, nonatomic) UILabel *fakeInputLabel; // @synthesize fakeInputLabel=_fakeInputLabel;
@property(retain, nonatomic) UIImageView *fakeInputIconImageView; // @synthesize fakeInputIconImageView=_fakeInputIconImageView;
@property(retain, nonatomic) UIView *fakeInputLabelContainerView; // @synthesize fakeInputLabelContainerView=_fakeInputLabelContainerView;
@property(retain, nonatomic) UIButton *topMenuButton; // @synthesize topMenuButton=_topMenuButton;
@property(retain, nonatomic) AEUGCVideoFollowActionButton *followActionButton; // @synthesize followActionButton=_followActionButton;
@property(retain, nonatomic) UILabel *audienceCountLabel; // @synthesize audienceCountLabel=_audienceCountLabel;
@property(retain, nonatomic) UIImageView *audienceIconImageView; // @synthesize audienceIconImageView=_audienceIconImageView;
@property(retain, nonatomic) UILabel *playTypeLabel; // @synthesize playTypeLabel=_playTypeLabel;
@property(retain, nonatomic) UIView *playTypeContainerView; // @synthesize playTypeContainerView=_playTypeContainerView;
@property(retain, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) AEUGCVideoPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
- (void).cxx_destruct;	// IMP=0x0000000100fe2458
- (void)reportUserBuyProductInLive:(id)arg1;	// IMP=0x0000000100fdfa4c
- (void)shakeAnimation;	// IMP=0x0000000100fdf774
- (void)updateHighlightProductAndStartAnimation;	// IMP=0x0000000100fddee4
- (void)resetHighlightView;	// IMP=0x0000000100fddb64
- (void)updateHighlightProduct;	// IMP=0x0000000100fdd87c
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100fdced4
- (void)hideLiveRoomError;	// IMP=0x0000000100fdcd20
- (void)showLiveRoomError;	// IMP=0x0000000100fdcbdc
- (void)updateCommentStatus;	// IMP=0x0000000100fdcadc
- (void)updateFollowStatus;	// IMP=0x0000000100fdc9d4
- (void)updateAudienceCount;	// IMP=0x0000000100fdc920
- (void)updateAvatar;	// IMP=0x0000000100fdc6bc
- (void)updateVideoStatusUI;	// IMP=0x0000000100fdae9c
- (void)showUserAction;	// IMP=0x0000000100fdadc0
- (id)gradientAlphaWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100fdab1c
- (void)configConstraints;	// IMP=0x0000000100fd5034
- (id)pageTrackParams;	// IMP=0x0000000100fd4ecc
- (id)pageTrackName;	// IMP=0x0000000100fd4ea0
- (void)onReportDone:(id)arg1;	// IMP=0x0000000100fd4dcc
- (void)onCommentTableViewTapped:(id)arg1;	// IMP=0x0000000100fd4d48
- (void)onVideoPlayerOverlayTapped:(id)arg1;	// IMP=0x0000000100fd4cac
- (void)onAvatarTapped:(id)arg1;	// IMP=0x0000000100fd466c
- (void)onBackButtonTapped:(id)arg1;	// IMP=0x0000000100fd455c
- (void)onTopMenuButtonTapped:(id)arg1;	// IMP=0x0000000100fd3874
- (void)onFollowButtonTapped:(id)arg1;	// IMP=0x0000000100fd37a4
- (void)onCommentListReceived;	// IMP=0x0000000100fd338c
- (void)appDidBecomeActive:(id)arg1;	// IMP=0x0000000100fd31c8
- (void)keyboardWillHide:(id)arg1;	// IMP=0x0000000100fd30bc
- (void)keyboardWillShow:(id)arg1;	// IMP=0x0000000100fd2dd0
- (void)startInputCommentUI;	// IMP=0x0000000100fd2d6c
- (void)onFakeInputTapped:(id)arg1;	// IMP=0x0000000100fd2a40
- (void)onPresenterButtonTapped:(id)arg1;	// IMP=0x0000000100fd2728
- (void)onShoppingButtonTapped:(id)arg1;	// IMP=0x0000000100fd24a8
- (void)fullScreenReplyPresenterNotice:(id)arg1;	// IMP=0x0000000100fd2470
- (void)fullScreenPresenterViewClose;	// IMP=0x0000000100fd20f4
- (void)fullScreenShoppingViewClose;	// IMP=0x0000000100fd19b0
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;	// IMP=0x0000000100fd1418
- (void)textViewDidEndEditing:(id)arg1;	// IMP=0x0000000100fd12e4
- (void)textViewDidBeginEditing:(id)arg1;	// IMP=0x0000000100fd11bc
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100fd1068
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100fd105c
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000100fd100c
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0000000100fd1004
- (long long)preferredInterfaceOrientationForPresentation;	// IMP=0x0000000100fd0ffc
- (_Bool)shouldAutorotate;	// IMP=0x0000000100fd0ff4
- (_Bool)prefersStatusBarHidden;	// IMP=0x0000000100fd0fec
- (void)dealloc;	// IMP=0x0000000100fd0de0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100fd0d90
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100fd08a8
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100fd063c
- (void)viewDidLoad;	// IMP=0x0000000100fcf7e4
- (void)privateInit;	// IMP=0x0000000100fcf658
- (id)initWithViewModel:(id)arg1;	// IMP=0x0000000100fcf5bc
- (id)init;	// IMP=0x0000000100fcf57c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

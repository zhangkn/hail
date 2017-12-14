//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUIViewController.h"

#import "AEUGCVideoPlayerOverlayDelegate.h"
#import "AFCommandViewController.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITextViewDelegate.h"

@class AEUGCCountDownView, AEUGCLiveHighlightView, AEUGCLiveLikeView, AEUGCLiveNoContentView, AEUGCLiveRoomErrorView, AEUGCReportService, AEUGCVideoLiveNoticeDTO, AEUGCVideoLiveRoomViewModel, AEUGCVideoPlayer, AEUGCVideoUserActionView, HMSegmentedControl, NSMutableArray, NSMutableDictionary, NSString, NSTimer, UICollectionView, UIImageView, UILabel, UITextView, UIView;

@interface AEUGCVideoLiveRoomViewController : AEUIViewController <UICollectionViewDataSource, UICollectionViewDelegate, AEUGCVideoPlayerOverlayDelegate, UITextViewDelegate, UIGestureRecognizerDelegate, AFCommandViewController>
{
    _Bool _isSegmentChangeByComment;	// 8 = 0x8
    _Bool _previousNavigationBarHidden;	// 9 = 0x9
    _Bool _isUserActionViewShouldShow;	// 10 = 0xa
    _Bool _isLiveRoomInfoReturned;	// 11 = 0xb
    _Bool _isNeedCalculateNoContentAgain;	// 12 = 0xc
    _Bool _showPageError;	// 13 = 0xd
    _Bool _isSingleInstanceDestoried;	// 14 = 0xe
    _Bool _bCanAddToCard;	// 15 = 0xf
    UIView *_statusBackgroundView;	// 16 = 0x10
    AEUGCVideoPlayer *_videoPlayer;	// 24 = 0x18
    UIView *_maskView;	// 32 = 0x20
    UILabel *_loadingLabel;	// 40 = 0x28
    AEUGCLiveRoomErrorView *_errorView;	// 48 = 0x30
    UIView *_disclaimerView;	// 56 = 0x38
    UILabel *_disClaimerLabel;	// 64 = 0x40
    AEUGCCountDownView *_countdownView;	// 72 = 0x48
    double _countdownViewHeight;	// 80 = 0x50
    UICollectionView *_collectionView;	// 88 = 0x58
    HMSegmentedControl *_segmentedControl;	// 96 = 0x60
    UIImageView *_commentRedPointImgView;	// 104 = 0x68
    UIImageView *_hostRedPointImgView;	// 112 = 0x70
    unsigned long long _segmentType;	// 120 = 0x78
    UIView *_bottomView;	// 128 = 0x80
    UIView *_bottomGradientView;	// 136 = 0x88
    UIView *_fakeInputLabelContainerView;	// 144 = 0x90
    UIImageView *_fakeInputIconImageView;	// 152 = 0x98
    UILabel *_fakeInputLabel;	// 160 = 0xa0
    AEUGCLiveLikeView *_likeView;	// 168 = 0xa8
    UIView *_inputContainerView;	// 176 = 0xb0
    UIView *_inputInnerView;	// 184 = 0xb8
    UITextView *_inputTextView;	// 192 = 0xc0
    UILabel *_inputCountLabel;	// 200 = 0xc8
    long long _roomStatus;	// 208 = 0xd0
    AEUGCVideoLiveRoomViewModel *_liveRoomViewModel;	// 216 = 0xd8
    AEUGCVideoUserActionView *_userActionView;	// 224 = 0xe0
    AEUGCLiveNoContentView *_noContentView;	// 232 = 0xe8
    NSMutableArray *_productHightInfosArray;	// 240 = 0xf0
    NSMutableArray *_productInfosArray;	// 248 = 0xf8
    NSMutableArray *_userCommentsArray;	// 256 = 0x100
    NSMutableArray *_hostCommentsArray;	// 264 = 0x108
    NSMutableArray *_storeInfosArray;	// 272 = 0x110
    AEUGCVideoLiveNoticeDTO *_currentReplyhostNoticeInfo;	// 280 = 0x118
    double _segmentBarOriginOffset;	// 288 = 0x120
    double _segmentBarOriginOffsetToSelfView;	// 296 = 0x128
    AEUGCReportService *_reportService;	// 304 = 0x130
    NSString *_reportActionUUID;	// 312 = 0x138
    double _segmentTopOffset;	// 320 = 0x140
    double _currentCollectionOffset;	// 328 = 0x148
    double _lastRefreshTime;	// 336 = 0x150
    double _lastCommentRedPointTime;	// 344 = 0x158
    NSMutableDictionary *_userCommentHeightDic;	// 352 = 0x160
    NSMutableDictionary *_hostNoticeHeightDic;	// 360 = 0x168
    NSMutableArray *_clickedAddToCardCellsArr;	// 368 = 0x170
    AEUGCLiveHighlightView *_highlightView;	// 376 = 0x178
    NSTimer *_highlightAniTimer;	// 384 = 0x180
    long long _animationStep;	// 392 = 0x188
}

@property(nonatomic) long long animationStep; // @synthesize animationStep=_animationStep;
@property(retain, nonatomic) NSTimer *highlightAniTimer; // @synthesize highlightAniTimer=_highlightAniTimer;
@property(retain, nonatomic) AEUGCLiveHighlightView *highlightView; // @synthesize highlightView=_highlightView;
@property(retain, nonatomic) NSMutableArray *clickedAddToCardCellsArr; // @synthesize clickedAddToCardCellsArr=_clickedAddToCardCellsArr;
@property(nonatomic) _Bool bCanAddToCard; // @synthesize bCanAddToCard=_bCanAddToCard;
@property(retain, nonatomic) NSMutableDictionary *hostNoticeHeightDic; // @synthesize hostNoticeHeightDic=_hostNoticeHeightDic;
@property(retain, nonatomic) NSMutableDictionary *userCommentHeightDic; // @synthesize userCommentHeightDic=_userCommentHeightDic;
@property(nonatomic) double lastCommentRedPointTime; // @synthesize lastCommentRedPointTime=_lastCommentRedPointTime;
@property(nonatomic) double lastRefreshTime; // @synthesize lastRefreshTime=_lastRefreshTime;
@property(nonatomic) double currentCollectionOffset; // @synthesize currentCollectionOffset=_currentCollectionOffset;
@property(nonatomic) double segmentTopOffset; // @synthesize segmentTopOffset=_segmentTopOffset;
@property(nonatomic) _Bool isSingleInstanceDestoried; // @synthesize isSingleInstanceDestoried=_isSingleInstanceDestoried;
@property(nonatomic) _Bool showPageError; // @synthesize showPageError=_showPageError;
@property(copy, nonatomic) NSString *reportActionUUID; // @synthesize reportActionUUID=_reportActionUUID;
@property(retain, nonatomic) AEUGCReportService *reportService; // @synthesize reportService=_reportService;
@property(nonatomic) double segmentBarOriginOffsetToSelfView; // @synthesize segmentBarOriginOffsetToSelfView=_segmentBarOriginOffsetToSelfView;
@property(nonatomic) double segmentBarOriginOffset; // @synthesize segmentBarOriginOffset=_segmentBarOriginOffset;
@property(nonatomic) _Bool isNeedCalculateNoContentAgain; // @synthesize isNeedCalculateNoContentAgain=_isNeedCalculateNoContentAgain;
@property(nonatomic) _Bool isLiveRoomInfoReturned; // @synthesize isLiveRoomInfoReturned=_isLiveRoomInfoReturned;
@property(retain, nonatomic) AEUGCVideoLiveNoticeDTO *currentReplyhostNoticeInfo; // @synthesize currentReplyhostNoticeInfo=_currentReplyhostNoticeInfo;
@property(retain, nonatomic) NSMutableArray *storeInfosArray; // @synthesize storeInfosArray=_storeInfosArray;
@property(retain, nonatomic) NSMutableArray *hostCommentsArray; // @synthesize hostCommentsArray=_hostCommentsArray;
@property(retain, nonatomic) NSMutableArray *userCommentsArray; // @synthesize userCommentsArray=_userCommentsArray;
@property(retain, nonatomic) NSMutableArray *productInfosArray; // @synthesize productInfosArray=_productInfosArray;
@property(retain, nonatomic) NSMutableArray *productHightInfosArray; // @synthesize productHightInfosArray=_productHightInfosArray;
@property(retain, nonatomic) AEUGCLiveNoContentView *noContentView; // @synthesize noContentView=_noContentView;
@property(nonatomic) _Bool isUserActionViewShouldShow; // @synthesize isUserActionViewShouldShow=_isUserActionViewShouldShow;
@property(retain, nonatomic) AEUGCVideoUserActionView *userActionView; // @synthesize userActionView=_userActionView;
@property(retain, nonatomic) AEUGCVideoLiveRoomViewModel *liveRoomViewModel; // @synthesize liveRoomViewModel=_liveRoomViewModel;
@property(nonatomic) _Bool previousNavigationBarHidden; // @synthesize previousNavigationBarHidden=_previousNavigationBarHidden;
@property(nonatomic) long long roomStatus; // @synthesize roomStatus=_roomStatus;
@property(retain, nonatomic) UILabel *inputCountLabel; // @synthesize inputCountLabel=_inputCountLabel;
@property(retain, nonatomic) UITextView *inputTextView; // @synthesize inputTextView=_inputTextView;
@property(retain, nonatomic) UIView *inputInnerView; // @synthesize inputInnerView=_inputInnerView;
@property(retain, nonatomic) UIView *inputContainerView; // @synthesize inputContainerView=_inputContainerView;
@property(retain, nonatomic) AEUGCLiveLikeView *likeView; // @synthesize likeView=_likeView;
@property(retain, nonatomic) UILabel *fakeInputLabel; // @synthesize fakeInputLabel=_fakeInputLabel;
@property(retain, nonatomic) UIImageView *fakeInputIconImageView; // @synthesize fakeInputIconImageView=_fakeInputIconImageView;
@property(retain, nonatomic) UIView *fakeInputLabelContainerView; // @synthesize fakeInputLabelContainerView=_fakeInputLabelContainerView;
@property(retain, nonatomic) UIView *bottomGradientView; // @synthesize bottomGradientView=_bottomGradientView;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) _Bool isSegmentChangeByComment; // @synthesize isSegmentChangeByComment=_isSegmentChangeByComment;
@property(nonatomic) unsigned long long segmentType; // @synthesize segmentType=_segmentType;
@property(retain, nonatomic) UIImageView *hostRedPointImgView; // @synthesize hostRedPointImgView=_hostRedPointImgView;
@property(retain, nonatomic) UIImageView *commentRedPointImgView; // @synthesize commentRedPointImgView=_commentRedPointImgView;
@property(retain, nonatomic) HMSegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) double countdownViewHeight; // @synthesize countdownViewHeight=_countdownViewHeight;
@property(retain, nonatomic) AEUGCCountDownView *countdownView; // @synthesize countdownView=_countdownView;
@property(retain, nonatomic) UILabel *disClaimerLabel; // @synthesize disClaimerLabel=_disClaimerLabel;
@property(retain, nonatomic) UIView *disclaimerView; // @synthesize disclaimerView=_disclaimerView;
@property(retain, nonatomic) AEUGCLiveRoomErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) UILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) AEUGCVideoPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(retain, nonatomic) UIView *statusBackgroundView; // @synthesize statusBackgroundView=_statusBackgroundView;
- (void).cxx_destruct;	// IMP=0x0000000100f4b324
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x0000000100f4a7d4
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x0000000100f4a788
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;	// IMP=0x0000000100f4a188
- (void)textViewDidEndEditing:(id)arg1;	// IMP=0x0000000100f4a054
- (void)textViewDidBeginEditing:(id)arg1;	// IMP=0x0000000100f49f2c
- (void)onVideoPlayerOverlayTapped:(id)arg1;	// IMP=0x0000000100f49eb0
- (void)onFakeInputTapped:(id)arg1;	// IMP=0x0000000100f49c4c
- (void)removeAddToCardLoading;	// IMP=0x0000000100f49ac4
- (void)addLoadingToCell:(id)arg1;	// IMP=0x0000000100f499ac
- (void)checkAndPopToSelf;	// IMP=0x0000000100f4981c
- (void)showWatchWhileBuyingView;	// IMP=0x0000000100f495c0
- (void)appEnterBackground:(id)arg1;	// IMP=0x0000000100f49528
- (void)appDidBecomeActive:(id)arg1;	// IMP=0x0000000100f492f0
- (void)onReportDone:(id)arg1;	// IMP=0x0000000100f4921c
- (void)keyboardWillHide:(id)arg1;	// IMP=0x0000000100f49068
- (void)keyboardWillShow:(id)arg1;	// IMP=0x0000000100f48ba0
- (void)videoPlayerTopBackButtonTapped:(id)arg1;	// IMP=0x0000000100f48a00
- (void)videoPlayerTopMenuButtonTapped:(id)arg1;	// IMP=0x0000000100f47cc4
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0000000100f47af0
- (void)showPageErrorWithMsg:(id)arg1;	// IMP=0x0000000100f47a54
- (void)showOrHideNoContentView;	// IMP=0x0000000100f4764c
- (void)updateFollowStatus;	// IMP=0x0000000100f4760c
- (void)onStoreListRequestReceived;	// IMP=0x0000000100f47364
- (void)onProductListMsgReceived;	// IMP=0x0000000100f46fb4
- (void)showUserAction;	// IMP=0x0000000100f46df8
- (void)onUserActionMsgReceived;	// IMP=0x0000000100f46c80
- (void)hideHostRedPoint;	// IMP=0x0000000100f46c40
- (void)showHostRedPoint;	// IMP=0x0000000100f46a54
- (void)handleTapOnNewMessageView:(id)arg1;	// IMP=0x0000000100f469fc
- (void)hideCommentRedPoint;	// IMP=0x0000000100f46954
- (void)showCommentRedPoint;	// IMP=0x0000000100f46558
- (void)setupCollecitonOffset:(double)arg1;	// IMP=0x0000000100f464dc
- (void)onHostMsgReceived;	// IMP=0x0000000100f46100
- (void)onCommentMsgReceived;	// IMP=0x0000000100f45b7c
- (void)showUnReadPointAtSegmentIndex:(long long)arg1;	// IMP=0x0000000100f45ad8
- (void)shakeAnimation;	// IMP=0x0000000100f45800
- (void)updateHighlightProductAndStartAnimation;	// IMP=0x0000000100f44018
- (void)resetHighlightView;	// IMP=0x0000000100f43c78
- (void)updateHighlightProduct;	// IMP=0x0000000100f43788
- (void)updatePlayerUI;	// IMP=0x0000000100f427e0
- (void)updateLiveRoomView;	// IMP=0x0000000100f41b24
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100f40b58
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000100f3fa0c
- (struct CGSize)calculateSizeForItemAtIndexPath:(id)arg1;	// IMP=0x0000000100f3f8d4
- (struct CGSize)calculateHostNoticeCellSizeForItemAtIndexPath:(id)arg1;	// IMP=0x0000000100f3f65c
- (struct CGSize)calculateUserCommentCellSizeForItemAtIndexPath:(id)arg1;	// IMP=0x0000000100f3f3e4
- (struct CGSize)calculateStoreCellSizeForItemAtIndexPath:(id)arg1;	// IMP=0x0000000100f3f360
- (struct CGSize)calculateProductCellSizeForItemAtIndexPath:(id)arg1;	// IMP=0x0000000100f3f2bc
- (struct CGSize)calculateHighlightProductCellSizeForItemAtIndexPath:(id)arg1;	// IMP=0x0000000100f3f1d8
- (struct CGSize)calculateBannersCellSizeForItemAtIndexPath:(id)arg1;	// IMP=0x0000000100f3f03c
- (struct CGSize)calculateFollowBarCellSizeForItemAtIndexPath:(id)arg1;	// IMP=0x0000000100f3efe0
- (id)getCollectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100f3ee1c
- (id)getCollectionView:(id)arg1 hostCellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100f3e194
- (id)getCollectionView:(id)arg1 userCommentCellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100f3e05c
- (id)getCollectionView:(id)arg1 storeCellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100f3dd38
- (id)getCollectionView:(id)arg1 productCellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100f3d664
- (id)getCollectionView:(id)arg1 highlightProductCellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100f3cf7c
- (id)getCollectionView:(id)arg1 bannersBarCellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100f3ca64
- (id)getCollectionView:(id)arg1 followBarCellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100f3c7c8
- (long long)calculateNumberOfItemsInSection:(long long)arg1;	// IMP=0x0000000100f3c4e4
- (struct UIEdgeInsets)calculateInsetForSectionAtIndex:(long long)arg1;	// IMP=0x0000000100f3c260
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x0000000100f3c1c0
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x0000000100f3c1b0
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x0000000100f3c13c
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000100f3c12c
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000100f3bb84
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100f3bb24
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000100f3bb14
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000100f3bac0
- (void)reportUserBuyProductInLive:(id)arg1;	// IMP=0x0000000100f3b9d8
- (void)remindMeOrCancelRemind;	// IMP=0x0000000100f3b81c
- (void)toProductDetail:(id)arg1;	// IMP=0x0000000100f3b708
- (void)checkAndLoadMore;	// IMP=0x0000000100f3b2f0
- (void)updateCollectionBottomOffset:(double)arg1 withoutTop:(_Bool)arg2;	// IMP=0x0000000100f3a380
- (double)fittingSegmentFontSize;	// IMP=0x0000000100f39fa0
- (void)segmentChanged:(id)arg1;	// IMP=0x0000000100f3937c
- (void)segmentReSelect:(id)arg1;	// IMP=0x0000000100f392ec
- (id)gradientAlphaWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100f37838
- (void)endInputCommentUI;	// IMP=0x0000000100f37774
- (void)startInputCommentUI:(id)arg1;	// IMP=0x0000000100f376dc
- (void)reConfigConstraints;	// IMP=0x0000000100f33ff4
- (void)configConstraints;	// IMP=0x0000000100f30458
- (void)onLiveRoomTapped:(id)arg1;	// IMP=0x0000000100f303dc
- (void)onBackButtonTapped:(id)arg1;	// IMP=0x0000000100f30350
- (void)handleDisclaimerLabel:(id)arg1;	// IMP=0x0000000100f2fe1c
- (void)updateLikeView;	// IMP=0x0000000100f2fbbc
- (long long)preferredStatusBarStyle;	// IMP=0x0000000100f2fb54
- (_Bool)prefersStatusBarHidden;	// IMP=0x0000000100f2fb4c
- (void)checkAndRefreshComment;	// IMP=0x0000000100f2fa68
- (void)reAddVideoPlayer;	// IMP=0x0000000100f2f4a4
- (id)pageTrackParams;	// IMP=0x0000000100f2f33c
- (id)pageTrackName;	// IMP=0x0000000100f2f310
- (void)dealloc;	// IMP=0x0000000100f2f084
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100f2efd8
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100f2eed8
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100f2ec60
- (void)viewDidLoad;	// IMP=0x0000000100f2db94
- (id)initWithViewModel:(id)arg1;	// IMP=0x0000000100f2db08
- (id)initWithParam:(id)arg1;	// IMP=0x0000000100f2da0c
- (id)init;	// IMP=0x0000000100f2d9ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

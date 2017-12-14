//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUGCVideoPlayerOverlayView.h"

@class AEUGCVideoPlayerOverlayViewModel, AEUGCVideoProgressSlider, MASConstraint, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIView;

@interface AEUGCVideoPlayerFullScreenOverlay : AEUGCVideoPlayerOverlayView
{
    AEUGCVideoPlayerOverlayViewModel *_viewModel;	// 8 = 0x8
    UIImageView *_coverImageView;	// 16 = 0x10
    UIImageView *_appBarBackgroundImageView;	// 24 = 0x18
    UIButton *_mainControlButton;	// 32 = 0x20
    UIActivityIndicatorView *_loadingView;	// 40 = 0x28
    UILabel *_loadingLabel;	// 48 = 0x30
    UIView *_errorContainerView;	// 56 = 0x38
    UILabel *_errorLabel;	// 64 = 0x40
    UIView *_refreshButtonContainerView;	// 72 = 0x48
    UIButton *_refreshButton;	// 80 = 0x50
    UIImageView *_errorImageView;	// 88 = 0x58
    AEUGCVideoProgressSlider *_progressSlider;	// 96 = 0x60
    MASConstraint *_refreshButtonBottomConstraint;	// 104 = 0x68
    MASConstraint *_errorLabelBottomConstraint;	// 112 = 0x70
}

@property(retain, nonatomic) MASConstraint *errorLabelBottomConstraint; // @synthesize errorLabelBottomConstraint=_errorLabelBottomConstraint;
@property(retain, nonatomic) MASConstraint *refreshButtonBottomConstraint; // @synthesize refreshButtonBottomConstraint=_refreshButtonBottomConstraint;
@property(retain, nonatomic) AEUGCVideoProgressSlider *progressSlider; // @synthesize progressSlider=_progressSlider;
@property(retain, nonatomic) UIImageView *errorImageView; // @synthesize errorImageView=_errorImageView;
@property(retain, nonatomic) UIButton *refreshButton; // @synthesize refreshButton=_refreshButton;
@property(retain, nonatomic) UIView *refreshButtonContainerView; // @synthesize refreshButtonContainerView=_refreshButtonContainerView;
@property(retain, nonatomic) UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain, nonatomic) UIView *errorContainerView; // @synthesize errorContainerView=_errorContainerView;
@property(retain, nonatomic) UILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property(retain, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIButton *mainControlButton; // @synthesize mainControlButton=_mainControlButton;
@property(retain, nonatomic) UIImageView *appBarBackgroundImageView; // @synthesize appBarBackgroundImageView=_appBarBackgroundImageView;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) AEUGCVideoPlayerOverlayViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;	// IMP=0x0000000100f8f338
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100f8e55c
- (void)hideMainButton;	// IMP=0x0000000100f8e3b4
- (void)hideErrorView;	// IMP=0x0000000100f8e260
- (void)showErrorView:(id)arg1 needRefreshButton:(_Bool)arg2 showBigImage:(_Bool)arg3;	// IMP=0x0000000100f8d88c
- (void)hideLoadingView;	// IMP=0x0000000100f8d79c
- (void)showLoadingView;	// IMP=0x0000000100f8d6e8
- (void)configConstraints;	// IMP=0x0000000100f8b300
- (void)onOverlayTapped:(id)arg1;	// IMP=0x0000000100f8b058
- (void)onRefreshButtonTapped:(id)arg1;	// IMP=0x0000000100f8ae20
- (void)onMainControlButtonTapped:(id)arg1;	// IMP=0x0000000100f8aba0
- (void)onRoomVideoStatusChanged;	// IMP=0x0000000100f89f9c
- (void)videoPlayerStateChanged:(id)arg1 playState:(long long)arg2;	// IMP=0x0000000100f897f0
- (void)dealloc;	// IMP=0x0000000100f8973c
- (id)initWithVideoPlayer:(id)arg1;	// IMP=0x0000000100f89350
- (id)initWithVideoPlayer:(id)arg1 withViewModel:(id)arg2;	// IMP=0x0000000100f8928c

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FDViewDelegate.h"

@class ABAudio, ABFaceLivenessNaviView, CMMotionManager, NSString, NSTimer, ScrollLabel, UIImageView, UILabel;

@interface ABFaceLivenessView : UIView <FDViewDelegate>
{
    id <FDViewDelegate> _fdViewDelegate;	// 8 = 0x8
    UIView *_mainView;	// 16 = 0x10
    ABFaceLivenessNaviView *_navigationView;	// 24 = 0x18
    ScrollLabel *_actionTipLabel;	// 32 = 0x20
    UILabel *_environmentTipLabel;	// 40 = 0x28
    UIImageView *_tipImageView;	// 48 = 0x30
    UIView *_tipView;	// 56 = 0x38
    UIImageView *_maskTopImageView;	// 64 = 0x40
    UIImageView *_maskImageView;	// 72 = 0x48
    UIImageView *_lineImageView;	// 80 = 0x50
    UIImageView *_blueLineImageView;	// 88 = 0x58
    NSTimer *_thinTimer;	// 96 = 0x60
    UIImageView *_star1;	// 104 = 0x68
    UIImageView *_star2;	// 112 = 0x70
    UIImageView *_star3;	// 120 = 0x78
    UIImageView *_line1to2;	// 128 = 0x80
    UIImageView *_line2to3;	// 136 = 0x88
    UIImageView *_actionFinishPrompt;	// 144 = 0x90
    CMMotionManager *_motionManager;	// 152 = 0x98
    ABAudio *_audio;	// 160 = 0xa0
    struct CGRect _maskRect;	// 168 = 0xa8
}

@property(retain, nonatomic) ABAudio *audio; // @synthesize audio=_audio;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(retain, nonatomic) UIImageView *actionFinishPrompt; // @synthesize actionFinishPrompt=_actionFinishPrompt;
@property(retain, nonatomic) UIImageView *line2to3; // @synthesize line2to3=_line2to3;
@property(retain, nonatomic) UIImageView *line1to2; // @synthesize line1to2=_line1to2;
@property(retain, nonatomic) UIImageView *star3; // @synthesize star3=_star3;
@property(retain, nonatomic) UIImageView *star2; // @synthesize star2=_star2;
@property(retain, nonatomic) UIImageView *star1; // @synthesize star1=_star1;
@property(nonatomic) __weak NSTimer *thinTimer; // @synthesize thinTimer=_thinTimer;
@property(retain, nonatomic) UIImageView *blueLineImageView; // @synthesize blueLineImageView=_blueLineImageView;
@property(retain, nonatomic) UIImageView *lineImageView; // @synthesize lineImageView=_lineImageView;
@property(nonatomic) struct CGRect maskRect; // @synthesize maskRect=_maskRect;
@property(retain, nonatomic) UIImageView *maskImageView; // @synthesize maskImageView=_maskImageView;
@property(retain, nonatomic) UIImageView *maskTopImageView; // @synthesize maskTopImageView=_maskTopImageView;
@property(retain, nonatomic) UIView *tipView; // @synthesize tipView=_tipView;
@property(retain, nonatomic) UIImageView *tipImageView; // @synthesize tipImageView=_tipImageView;
@property(retain, nonatomic) UILabel *environmentTipLabel; // @synthesize environmentTipLabel=_environmentTipLabel;
@property(retain, nonatomic) ScrollLabel *actionTipLabel; // @synthesize actionTipLabel=_actionTipLabel;
@property(retain, nonatomic) ABFaceLivenessNaviView *navigationView; // @synthesize navigationView=_navigationView;
@property(retain, nonatomic) UIView *mainView; // @synthesize mainView=_mainView;
@property(nonatomic) __weak id <FDViewDelegate> fdViewDelegate; // @synthesize fdViewDelegate=_fdViewDelegate;
- (void).cxx_destruct;	// IMP=0x00000001012cb110
- (struct CGAffineTransform)transformForOrientation;	// IMP=0x00000001012caaa8
- (void)cancelActionPrompt;	// IMP=0x00000001012caa68
- (void)actionPromptAfter:(double)arg1;	// IMP=0x00000001012caa50
- (void)actionPrompt:(id)arg1;	// IMP=0x00000001012ca9c0
- (void)cancelShowtimeoutAlertView;	// IMP=0x00000001012ca980
- (void)showtimeoutAlertViewafter:(double)arg1;	// IMP=0x00000001012ca968
- (void)showtimeoutAlertView:(id)arg1;	// IMP=0x00000001012ca8b0
- (_Bool)isDetectReady;	// IMP=0x00000001012ca848
- (_Bool)isFinishedPhase;	// IMP=0x00000001012ca7a8
- (void)stopCaptureVideo;	// IMP=0x00000001012ca6f8
- (void)showEnvironmentView:(id)arg1;	// IMP=0x00000001012ca2e8
- (_Bool)setEnvironmentTip:(id)arg1;	// IMP=0x00000001012c9d04
- (void)checkEnvironment:(id)arg1;	// IMP=0x00000001012c9a7c
- (void)processInitPhaseWithFace:(_Bool)arg1 Range:(_Bool)arg2 Pitch:(_Bool)arg3 Quality:(_Bool)arg4;	// IMP=0x00000001012c97dc
- (_Bool)faceInRectRange:(id)arg1;	// IMP=0x00000001012c9610
- (int)detectDistance:(struct CGRect)arg1;	// IMP=0x00000001012c95e4
- (_Bool)isFacePitchInRange:(float)arg1;	// IMP=0x00000001012c95b8
- (void)onFaceDetectReady;	// IMP=0x00000001012c94cc
- (_Bool)capturedFaceIsRight:(struct CGRect)arg1 in:(struct CGRect)arg2;	// IMP=0x00000001012c9498
- (struct CGRect)convertVideoRectToScreenRect:(struct CGRect)arg1;	// IMP=0x00000001012c93fc
- (void)playPhaseSound;	// IMP=0x00000001012c91b0
- (void)audioPlay:(int)arg1;	// IMP=0x00000001012c89c4
- (void)starAnimation:(id)arg1;	// IMP=0x00000001012c8604
- (void)showPhaseView;	// IMP=0x00000001012c824c
- (void)thinBlink;	// IMP=0x00000001012c80bc
- (void)hideEnvTipsView;	// IMP=0x00000001012c8078
- (void)adjustTipImageView;	// IMP=0x00000001012c7e9c
- (void)showDetectTypeView;	// IMP=0x00000001012c7cac
- (void)onVolumeNotify:(float)arg1;	// IMP=0x00000001012c7c18
- (void)onRestartDetect;	// IMP=0x00000001012c7aec
- (void)showStep:(int)arg1;	// IMP=0x00000001012c71cc
- (void)hideStep;	// IMP=0x00000001012c70b8
- (void)showStep;	// IMP=0x00000001012c6f20
- (void)onGoBack;	// IMP=0x00000001012c6e4c
- (void)onApplicationDidBecomeActive;	// IMP=0x00000001012c6bd4
- (void)onApplicationWillResignActive;	// IMP=0x00000001012c6bc8
- (void)onGoBackClick;	// IMP=0x00000001012c6bbc
- (void)addNavigationView;	// IMP=0x00000001012c6a88
- (void)addMainView;	// IMP=0x00000001012c4f10
- (void)addEnvTipView;	// IMP=0x00000001012c4850
- (void)addBackgroundView;	// IMP=0x00000001012c4518
- (void)stopMotionUpdate;	// IMP=0x00000001012c444c
- (void)startMotionUpdate;	// IMP=0x00000001012c4168
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001012c3fdc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


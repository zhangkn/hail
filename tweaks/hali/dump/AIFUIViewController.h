//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "AESessionUserChangeTask.h"
#import "AFCommandViewController.h"
#import "AIFDataTrackProtocol.h"

@class AIFTimeProfileUtil, NSDictionary, NSString;

@interface AIFUIViewController : UIViewController <AIFDataTrackProtocol, AESessionUserChangeTask, AFCommandViewController>
{
    _Bool _statusBarHidden;	// 8 = 0x8
    NSString *_pageId;	// 16 = 0x10
    NSDictionary *_trackParams;	// 24 = 0x18
    double _startTime;	// 32 = 0x20
    double _startRequestTime;	// 40 = 0x28
    double _finishRequestTime;	// 48 = 0x30
    NSDictionary *_commandParam;	// 56 = 0x38
    NSDictionary *_additionalParams;	// 64 = 0x40
}

+ (id)appName;	// IMP=0x0000000100a43e58
+ (id)spmB4Test;	// IMP=0x0000000100a43c38
+ (long long)topViewControllerStatusBarForceLevel;	// IMP=0x0000000100a47490
+ (long long)popViewControllerStatusBarForceLevel;	// IMP=0x0000000100a4739c
+ (void)pushViewControllerStatusBarForceLevel:(long long)arg1;	// IMP=0x0000000100a47324
+ (id)flagStack;	// IMP=0x0000000100a47208
@property(retain, nonatomic) NSDictionary *additionalParams; // @synthesize additionalParams=_additionalParams;
@property(readonly, nonatomic) NSDictionary *commandParam; // @synthesize commandParam=_commandParam;
@property(nonatomic) double finishRequestTime; // @synthesize finishRequestTime=_finishRequestTime;
@property(nonatomic) double startRequestTime; // @synthesize startRequestTime=_startRequestTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool statusBarHidden; // @synthesize statusBarHidden=_statusBarHidden;
@property(retain, nonatomic) NSDictionary *trackParams; // @synthesize trackParams=_trackParams;
@property(retain, nonatomic) NSString *pageId; // @synthesize pageId=_pageId;
- (void).cxx_destruct;	// IMP=0x0000000100a471a0
- (void)finishRequestTiming;	// IMP=0x0000000100a46fb4
- (void)startRequestTiming;	// IMP=0x0000000100a46f88
- (void)failTiming;	// IMP=0x0000000100a46de4
- (void)startTiming;	// IMP=0x0000000100a46db8
- (void)finishTiming;	// IMP=0x0000000100a46a1c
- (long long)preferredInterfaceOrientationForPresentation;	// IMP=0x0000000100a4698c
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0000000100a4692c
- (_Bool)shouldAutorotate;	// IMP=0x0000000100a46924
- (void)didReceiveSessionLogoutNotification;	// IMP=0x0000000100a46920
- (void)didReceiveSessionLoginNotification;	// IMP=0x0000000100a4691c
- (void)execute:(unsigned long long)arg1;	// IMP=0x0000000100a468fc
- (void)dealloc;	// IMP=0x0000000100a46880
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100a4681c
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100a467b8
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100a46768
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100a46718
- (void)viewDidLoad;	// IMP=0x0000000100a46644
- (id)initWithParam:(id)arg1;	// IMP=0x0000000100a46528
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100a464b4
- (id)init;	// IMP=0x0000000100a464a0
@property(nonatomic) _Bool isPopingBack;
- (id)_trackPageEnterParam;	// IMP=0x0000000100a3e3a0
- (id)_trackPageLeaveParam;	// IMP=0x0000000100a3e1e0
- (void)endExposureTrack;	// IMP=0x0000000100a3e1a0
- (void)startExposureTrack;	// IMP=0x0000000100a3e160
- (id)additionalTrackParams;	// IMP=0x0000000100a3e114
- (void)extractAdditionalParams:(id)arg1;	// IMP=0x0000000100a3de7c
- (id)pageTrackParams;	// IMP=0x0000000100a3de44
- (id)pageTrackName;	// IMP=0x0000000100a3de28
- (void)trackGotoPage:(long long)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100a3dc04
- (void)trackGotoPage:(long long)arg1;	// IMP=0x0000000100a3dbf4
- (void)trackPageRefreshWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100a3daa4
- (void)trackPageRefresh;	// IMP=0x0000000100a3da94
- (void)enterSubPage:(id)arg1;	// IMP=0x0000000100a3d9b4
- (void)trackPageLeave;	// IMP=0x0000000100a3d938
- (void)updateTrackPageParam:(id)arg1;	// IMP=0x0000000100a3d848
- (void)trackPageEnter;	// IMP=0x0000000100a3d744
- (_Bool)needTrackPage;	// IMP=0x0000000100a3d73c
- (void)trackWhenViewWillDisappear;	// IMP=0x0000000100a3d6f4
- (void)trackWhenViewDidAppear;	// IMP=0x0000000100a3d6ac
@property(retain, nonatomic) NSString *generatedSPM;
- (id)currentSPMOfController;	// IMP=0x0000000100a43dc8
- (id)pageSPMOfController;	// IMP=0x0000000100a43d24
- (id)spmB;	// IMP=0x0000000100a43aa0
- (void)hideStatusBarIfNeeded;	// IMP=0x0000000100a4754c
- (void)mark_endCache;	// IMP=0x0000000100a591f4
- (void)mark_startCache;	// IMP=0x0000000100a591a4
- (void)mark_endRender;	// IMP=0x0000000100a59154
- (void)mark_startRender;	// IMP=0x0000000100a59104
- (void)mark_endRequest;	// IMP=0x0000000100a590b4
- (void)mark_startRequest;	// IMP=0x0000000100a59064
- (void)mark_endReady;	// IMP=0x0000000100a59014
- (void)mark_startReady;	// IMP=0x0000000100a58fc4
- (void)mark_end;	// IMP=0x0000000100a58f74
- (void)mark_start;	// IMP=0x0000000100a58f24
- (void)mark_finish;	// IMP=0x0000000100a58ee4
- (void)mark_endEvent:(id)arg1;	// IMP=0x0000000100a58e70
- (void)mark_startEvent:(id)arg1;	// IMP=0x0000000100a58dfc
@property(readonly, nonatomic) AIFTimeProfileUtil *timeProfile;
- (id)paramsForProfile;	// IMP=0x0000000100a58d4c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"
#import "FDControllerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "WelcomeViewDelegate.h"

@class AVCaptureStillImageOutput, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, FDViewAgent, NSObject<OS_dispatch_queue>, NSString, WelcomeView;

@interface ABFaceCameraViewController : UIViewController <AVCaptureVideoDataOutputSampleBufferDelegate, FDControllerDelegate, UIAlertViewDelegate, WelcomeViewDelegate>
{
    AVCaptureVideoPreviewLayer *previewLayer;	// 8 = 0x8
    AVCaptureVideoDataOutput *videoDataOutput;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *videoDataOutputQueue;	// 24 = 0x18
    AVCaptureStillImageOutput *stillImageOutput;	// 32 = 0x20
    FDViewAgent *_viewAgent;	// 40 = 0x28
    WelcomeView *_welcomeView;	// 48 = 0x30
}

@property(retain, nonatomic) WelcomeView *welcomeView; // @synthesize welcomeView=_welcomeView;
@property(retain, nonatomic) FDViewAgent *viewAgent; // @synthesize viewAgent=_viewAgent;
- (void).cxx_destruct;	// IMP=0x00000001012cdaf4
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;	// IMP=0x00000001012cda58
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;	// IMP=0x00000001012cd8e4
- (void)configureCameraFront;	// IMP=0x00000001012cd5c4
- (void)teardownAVCapture;	// IMP=0x00000001012cd5ac
- (_Bool)setupAVCapture;	// IMP=0x00000001012cd044
- (_Bool)isCurrentViewController;	// IMP=0x00000001012cd03c
- (void)setCommon;	// IMP=0x00000001012ccb78
- (void)volumeDidChange:(id)arg1;	// IMP=0x00000001012ccac0
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x00000001012cca5c
- (void)applicationWillResignActive:(id)arg1;	// IMP=0x00000001012cca1c
- (void)onGoBack;	// IMP=0x00000001012cc880
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000001012cc770
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000001012cc5f4
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001012cc5a4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001012cc4a4
- (_Bool)prefersStatusBarHidden;	// IMP=0x00000001012cc49c
- (void)onSoundButtonClicked:(id)arg1;	// IMP=0x00000001012cc280
- (void)onCancelButtonClicked:(id)arg1;	// IMP=0x00000001012cc148
- (void)onHideButtonClicked:(id)arg1;	// IMP=0x00000001012cc0b4
- (void)setup;	// IMP=0x00000001012cbd54
- (void)viewDidLoad;	// IMP=0x00000001012cba60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

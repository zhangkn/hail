//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSDKWebDialogViewDelegate.h"

@class FBSDKWebDialogView, NSDictionary, NSString, UIView;

@interface FBSDKWebDialog : NSObject <FBSDKWebDialogViewDelegate>
{
    UIView *_backgroundView;	// 8 = 0x8
    FBSDKWebDialogView *_dialogView;	// 16 = 0x10
    _Bool _deferVisibility;	// 24 = 0x18
    id <FBSDKWebDialogDelegate> _delegate;	// 32 = 0x20
    NSString *_name;	// 40 = 0x28
    NSDictionary *_parameters;	// 48 = 0x30
}

+ (id)showWithName:(id)arg1 parameters:(id)arg2 delegate:(id)arg3;	// IMP=0x0000000101272be8
@property(copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) __weak id <FBSDKWebDialogDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool deferVisibility; // @synthesize deferVisibility=_deferVisibility;
- (void).cxx_destruct;	// IMP=0x0000000101274550
- (void)_updateViewsWithScale:(double)arg1 alpha:(double)arg2 animationDuration:(double)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000101274120
- (struct CGRect)_applicationFrameForOrientation;	// IMP=0x0000000101273fe0
- (struct CGAffineTransform)_transformForOrientation;	// IMP=0x0000000101273f08
- (_Bool)_showWebView;	// IMP=0x0000000101273c2c
- (id)_generateURL:(id *)arg1;	// IMP=0x0000000101273994
- (id)_findWindow;	// IMP=0x0000000101273788
- (void)_failWithError:(id)arg1;	// IMP=0x0000000101273640
- (void)_dismissAnimated:(_Bool)arg1;	// IMP=0x000000010127336c
- (void)_completeWithResults:(id)arg1;	// IMP=0x00000001012732dc
- (void)_cancel;	// IMP=0x0000000101273268
- (void)_removeObservers;	// IMP=0x0000000101273208
- (void)_deviceOrientationDidChangeNotification:(id)arg1;	// IMP=0x00000001012730bc
- (void)_addObservers;	// IMP=0x0000000101273054
- (void)webDialogViewDidFinishLoad:(id)arg1;	// IMP=0x0000000101272f84
- (void)webDialogViewDidCancel:(id)arg1;	// IMP=0x0000000101272f78
- (void)webDialogView:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000101272f68
- (void)webDialogView:(id)arg1 didCompleteWithResults:(id)arg2;	// IMP=0x0000000101272f58
- (_Bool)show;	// IMP=0x0000000101272d88
- (void)dealloc;	// IMP=0x0000000101272cc8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

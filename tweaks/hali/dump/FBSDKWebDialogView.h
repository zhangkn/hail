//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIWebViewDelegate.h"

@class NSString, UIActivityIndicatorView, UIButton, UIWebView;

@interface FBSDKWebDialogView : UIView <UIWebViewDelegate>
{
    UIButton *_closeButton;	// 8 = 0x8
    UIActivityIndicatorView *_loadingView;	// 16 = 0x10
    UIWebView *_webView;	// 24 = 0x18
    id <FBSDKWebDialogViewDelegate> _delegate;	// 32 = 0x20
}

@property(nonatomic) __weak id <FBSDKWebDialogViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000101275378
- (void)webViewDidFinishLoad:(id)arg1;	// IMP=0x00000001012752e8
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;	// IMP=0x0000000101274f5c
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;	// IMP=0x0000000101274e14
- (void)_close:(id)arg1;	// IMP=0x0000000101274dd0
- (void)layoutSubviews;	// IMP=0x0000000101274b98
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000101274a2c
- (void)stopLoading;	// IMP=0x0000000101274a14
- (void)loadURL:(id)arg1;	// IMP=0x0000000101274970
- (void)dealloc;	// IMP=0x0000000101274910
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001012745c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


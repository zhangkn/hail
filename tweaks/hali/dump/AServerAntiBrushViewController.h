//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIWebViewDelegate.h"

@class NSString;

@interface AServerAntiBrushViewController : UIViewController <UIWebViewDelegate>
{
    NSString *_location;	// 8 = 0x8
}

+ (_Bool)isTripartite;	// IMP=0x000000010119da1c
- (void).cxx_destruct;	// IMP=0x000000010119e428
- (long long)preferredInterfaceOrientationForPresentation;	// IMP=0x000000010119e420
- (_Bool)shouldAutorotate;	// IMP=0x000000010119e418
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x000000010119e410
- (void)showAlertWithTitle:(id)arg1 message:(id)arg2;	// IMP=0x000000010119e2a8
- (void)refresh;	// IMP=0x000000010119e1e0
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;	// IMP=0x000000010119e15c
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;	// IMP=0x000000010119e044
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010119df98
- (id)getURL;	// IMP=0x000000010119ddd8
- (_Bool)checkCodeSuccessByURL:(id)arg1;	// IMP=0x000000010119dd24
- (void)viewDidLoad;	// IMP=0x000000010119dc4c
- (void)loadView;	// IMP=0x000000010119da40
- (id)initWithLocation:(id)arg1;	// IMP=0x000000010119d97c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

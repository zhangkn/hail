//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUIViewController.h"

#import "UIScrollViewDelegate.h"

@class AEWebView, NSDictionary, NSString, UIView;

@interface AEProductDetailDescPCViewController : AEUIViewController <UIScrollViewDelegate>
{
    UIView *_headerView;	// 8 = 0x8
    NSDictionary *_parameters;	// 16 = 0x10
    CDUnknownBlockType _controllerQuit;	// 24 = 0x18
    AEWebView *_webView;	// 32 = 0x20
    NSString *_productId;	// 40 = 0x28
}

@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(retain, nonatomic) AEWebView *webView; // @synthesize webView=_webView;
@property(copy, nonatomic) CDUnknownBlockType controllerQuit; // @synthesize controllerQuit=_controllerQuit;
@property(retain, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
- (void).cxx_destruct;	// IMP=0x00000001005a4350
- (id)pageTrackParams;	// IMP=0x00000001005a4134
- (id)pageTrackName;	// IMP=0x00000001005a4108
- (_Bool)prefersStatusBarHidden;	// IMP=0x00000001005a4100
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x00000001005a40a4
- (void)setupHeaderView;	// IMP=0x00000001005a3bcc
- (void)viewDidLoad;	// IMP=0x00000001005a351c
- (void)viewDidLayoutSubviews;	// IMP=0x00000001005a3488
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001005a3454
- (void)resetForRouterInstance:(id)arg1;	// IMP=0x00000001005a33e8
- (void)dealloc;	// IMP=0x00000001005a3368
- (id)initWithParam:(id)arg1;	// IMP=0x00000001005a3298
- (id)initWithProductId:(id)arg1;	// IMP=0x00000001005a3224
- (id)init;	// IMP=0x00000001005a31f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WKWebView.h"

#import "UIAlertViewDelegate.h"
#import "WKUIDelegate.h"
#import "WVWebViewProtocol.h"

@class NSDictionary, NSString, NSURL, NSURLRequest, UIAlertController, UIScrollView, UIViewController, WVCommonWebView, WVJavascriptApplication, WVPagePerformance, WVUserContentController;

@interface WVWKWebView : WKWebView <WKUIDelegate, UIAlertViewDelegate, WVWebViewProtocol>
{
    _Bool _autoPlayAudio;	// 8 = 0x8
    _Bool _useCustomPullToRefresh;	// 9 = 0x9
    NSString *bizCode;	// 16 = 0x10
    id <WKUIDelegate> _subUIDelegate;	// 24 = 0x18
    UIAlertController *_alert;	// 32 = 0x20
    WVCommonWebView *_commonWebView;	// 40 = 0x28
}

+ (void)injectNativeBridge:(id)arg1;	// IMP=0x0000000101b51c1c
+ (id)defaultConfiguration;	// IMP=0x0000000101b51590
@property(retain, nonatomic) WVCommonWebView *commonWebView; // @synthesize commonWebView=_commonWebView;
@property(retain, nonatomic) UIAlertController *alert; // @synthesize alert=_alert;
@property(nonatomic) __weak id <WKUIDelegate> subUIDelegate; // @synthesize subUIDelegate=_subUIDelegate;
@property(nonatomic, getter=isUseCustomPullToRefresh) _Bool useCustomPullToRefresh; // @synthesize useCustomPullToRefresh=_useCustomPullToRefresh;
@property(retain, nonatomic) NSString *bizCode; // @synthesize bizCode;
@property(nonatomic, getter=isAutoPlayAudio) _Bool autoPlayAudio; // @synthesize autoPlayAudio=_autoPlayAudio;
- (void).cxx_destruct;	// IMP=0x0000000101b548ec
- (CDUnknownBlockType)callBackResponeseForJSWithHandlerName:(id)arg1 className:(id)arg2;	// IMP=0x0000000101b547b8
- (void)openJSBridgeLog;	// IMP=0x0000000101b547b4
- (void)deallocWebViewService;	// IMP=0x0000000101b547b0
@property(nonatomic) _Bool isOpenAutoPlayAudio;
@property(nonatomic, getter=isForbiddenPullScroll) _Bool forbiddenPullScroll;
- (_Bool)forbiddenPullScroll;	// IMP=0x0000000101b54700
- (void)fetchElementValue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000101b5465c
@property(readonly, nonatomic) WVJavascriptApplication *webviewJSBContext;
- (void)callRegistedHandler:(id)arg1 withMethod:(id)arg2 withData:(id)arg3 withFatherClass:(id)arg4 withFatherMethod:(id)arg5 withResultCallback:(CDUnknownBlockType)arg6;	// IMP=0x0000000101b544f4
- (void)callRegistedHandler:(id)arg1 withMethod:(id)arg2 withData:(id)arg3 withFatherClass:(id)arg4 withFatherMethod:(id)arg5;	// IMP=0x0000000101b543c4
- (void)registeHandler:(id)arg1 withClassName:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000101b5430c
- (void)registerHandler:(id)arg1 withClassName:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000101b54254
- (void)registerHandler:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000101b541c0
- (void)setIsOpenLocalService:(_Bool)arg1;	// IMP=0x0000000101b5416c
@property(nonatomic, getter=isOpenLocalService) _Bool openLocalService;
- (void)dealloc;	// IMP=0x0000000101b54028
- (void)bindingWebViewService;	// IMP=0x0000000101b54010
- (void)releaseWebViewService;	// IMP=0x0000000101b53ff8
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;	// IMP=0x0000000101b53e90
- (void)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000101b53754
- (void)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000101b53174
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000101b52d5c
- (void)setDelegate:(id)arg1;	// IMP=0x0000000101b52d48
- (id)delegate;	// IMP=0x0000000101b52d30
- (id)UIDelegate;	// IMP=0x0000000101b52d24
- (void)setUIDelegate:(id)arg1;	// IMP=0x0000000101b52ccc
- (id)navigationDelegate;	// IMP=0x0000000101b52cc4
- (void)setNavigationDelegate:(id)arg1;	// IMP=0x0000000101b52c74
- (void)evaluateJavaScript:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000101b52adc
- (void)stopLoading;	// IMP=0x0000000101b52a4c
- (void)reload;	// IMP=0x0000000101b52920
- (id)getRequestUrl;	// IMP=0x0000000101b528cc
- (id)appendCookies:(id)arg1;	// IMP=0x0000000101b525ec
- (void)loadRequest:(id)arg1;	// IMP=0x0000000101b52448
@property(readonly, retain, nonatomic) NSURLRequest *request;
@property(readonly, nonatomic, getter=isMainFrame) _Bool mainFrame;
@property(nonatomic) _Bool mediaPlaybackAllowsAirPlay;
@property(nonatomic) _Bool mediaPlaybackRequiresUserAction;
@property(nonatomic) _Bool allowsInlineMediaPlayback;
- (void)setIsOpenLongPressSaveImage:(_Bool)arg1;	// IMP=0x0000000101b52254
@property(nonatomic, getter=isOpenLongPressSaveImage) _Bool openLongPressSaveImage;
@property(nonatomic, getter=isOpenWebKitLongPress) _Bool openWebKitLongPress;
@property(nonatomic) _Bool scrollsToTop;
- (void)stopInfiniteScrollingAnimating;	// IMP=0x0000000101b520e8
@property(nonatomic, getter=isUseInfiniteScrolling) _Bool useInfiniteScrolling;
@property(nonatomic, getter=isUsePullToRefresh) _Bool usePullToRefresh;
@property(nonatomic) _Bool bounces;
@property(nonatomic) __weak id <WVWebViewDelegate> windVaneDelegate;
@property(readonly, nonatomic) NSDictionary *jsBridgeCallHistory;
- (id)perfRecorder;	// IMP=0x0000000101b51f04
@property(readonly, nonatomic) WVPagePerformance *pagePerformance;
- (void)isPageEmpty:(CDUnknownBlockType)arg1;	// IMP=0x0000000101b51e8c
@property(readonly, nonatomic, getter=isPageEmpty) _Bool pageEmpty;
@property(nonatomic) long long contentType;
@property(readonly, nonatomic) long long visiblity;
@property(nonatomic) long long visibleInViewController;
@property(nonatomic) __weak UIViewController *sourceViewController;
@property(readonly, nonatomic) WVUserContentController *userContentController;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2;	// IMP=0x0000000101b516a4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000101b51610

// Remaining properties
@property(readonly, copy, nonatomic) NSURL *URL;
@property(readonly, nonatomic, getter=canGoBack) _Bool canGoBack;
@property(readonly, nonatomic, getter=canGoForward) _Bool canGoForward;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) double estimatedProgress;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
@property(readonly, retain, nonatomic) UIScrollView *scrollView;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *title;

@end

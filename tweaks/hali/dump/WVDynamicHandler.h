//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WVBridgeProtocol.h"

@class NSString, UIView<WVWebViewBasicProtocol>, UIViewController;

@interface WVDynamicHandler : NSObject <WVBridgeProtocol>
{
    id <WVBridgeContext> _context;	// 8 = 0x8
    UIViewController *_viewController;	// 16 = 0x10
    UIView<WVWebViewBasicProtocol> *_webview;	// 24 = 0x18
}

+ (void)WVJSBridgeInterface$callback:(CDUnknownBlockType)arg1 withRet:(id)arg2 withResult:(id)arg3;	// IMP=0x0000000101b426b8
+ (void)WVJSBridgeInterface$forbiddenThisMethodToJSB:(SEL)arg1;	// IMP=0x0000000101b426b4
+ (unsigned long long)instanceScope;	// IMP=0x0000000101b42534
@property(nonatomic) __weak UIView<WVWebViewBasicProtocol> *webview; // @synthesize webview=_webview;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak id <WVBridgeContext> context; // @synthesize context=_context;
- (void).cxx_destruct;	// IMP=0x0000000101b42784
- (void)WVJSBridgeInterface$release;	// IMP=0x0000000101b4271c
- (void)set_runtimeContext:(id)arg1;	// IMP=0x0000000101b426b0
- (id)_runtimeContext;	// IMP=0x0000000101b426a8
- (void)dealloc;	// IMP=0x0000000101b42650
- (void)releaseInstance;	// IMP=0x0000000101b425dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

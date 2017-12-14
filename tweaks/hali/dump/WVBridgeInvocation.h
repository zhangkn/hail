//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WVBridgeCallbackContext.h"

@class NSDictionary, NSError, NSMutableArray, NSString, NSURL, UIView, UIView<WVWebViewBasicProtocol>, UIViewController, WVBridge, WVBridgeHandlerInfo, WVBridgeHandlerKey, WXSDKInstance;

@interface WVBridgeInvocation : NSObject <WVBridgeCallbackContext>
{
    _Bool _keepAlive;	// 8 = 0x8
    _Bool _tailInvocation;	// 9 = 0x9
    _Bool _hasLogged;	// 10 = 0xa
    _Bool _isStringParams;	// 11 = 0xb
    NSString *_realName;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
    WVBridge *_bridge;	// 32 = 0x20
    NSURL *_referrer;	// 40 = 0x28
    NSString *_pageId;	// 48 = 0x30
    WVBridgeHandlerKey *_handlerKey;	// 56 = 0x38
    unsigned long long _callbackType;	// 64 = 0x40
    NSString *_reqId;	// 72 = 0x48
    CDUnknownBlockType _callback;	// 80 = 0x50
    NSDictionary *_params;	// 88 = 0x58
    WVBridgeHandlerInfo *_handlerInfo;	// 96 = 0x60
    unsigned long long _phase;	// 104 = 0x68
    NSMutableArray *_resultCallbacks;	// 112 = 0x70
}

@property(retain, nonatomic) NSMutableArray *resultCallbacks; // @synthesize resultCallbacks=_resultCallbacks;
@property(nonatomic) unsigned long long phase; // @synthesize phase=_phase;
@property(nonatomic) _Bool isStringParams; // @synthesize isStringParams=_isStringParams;
@property(retain, nonatomic) WVBridgeHandlerInfo *handlerInfo; // @synthesize handlerInfo=_handlerInfo;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) NSString *reqId; // @synthesize reqId=_reqId;
@property(nonatomic) unsigned long long callbackType; // @synthesize callbackType=_callbackType;
@property(nonatomic) _Bool hasLogged; // @synthesize hasLogged=_hasLogged;
@property(retain, nonatomic) WVBridgeHandlerKey *handlerKey; // @synthesize handlerKey=_handlerKey;
@property(retain, nonatomic) NSString *pageId; // @synthesize pageId=_pageId;
@property(retain, nonatomic) NSURL *referrer; // @synthesize referrer=_referrer;
@property(nonatomic) __weak WVBridge *bridge; // @synthesize bridge=_bridge;
@property(nonatomic, getter=isTailInvocation) _Bool tailInvocation; // @synthesize tailInvocation=_tailInvocation;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSString *realName; // @synthesize realName=_realName;
- (void).cxx_destruct;	// IMP=0x0000000101b67a90
- (void)addTailInvocation:(id)arg1 className:(id)arg2 params:(id)arg3 withViewController:(id)arg4;	// IMP=0x0000000101b676b4
- (void)notifyEvent:(id)arg1 withResult:(id)arg2 withCallback:(CDUnknownBlockType)arg3;	// IMP=0x0000000101b67648
- (void)notifyEvent:(id)arg1 withResult:(id)arg2;	// IMP=0x0000000101b675f8
- (void)removeDynamicJSBHandler:(id)arg1;	// IMP=0x0000000101b675ec
- (void)releaseHandler:(id)arg1;	// IMP=0x0000000101b67528
- (id)addTailInvocation:(id)arg1 withParams:(id)arg2;	// IMP=0x0000000101b6741c
- (_Bool)compatibleRedirect:(id)arg1 withParams:(id)arg2 withResultCallback:(CDUnknownBlockType)arg3;	// IMP=0x0000000101b67198
- (_Bool)redirect:(id)arg1 withParams:(id)arg2 withResultCallback:(CDUnknownBlockType)arg3 isIgnorePermission:(_Bool)arg4;	// IMP=0x0000000101b66e84
- (_Bool)redirect:(id)arg1 withParams:(id)arg2;	// IMP=0x0000000101b66e20
- (_Bool)dispatchEvent:(id)arg1 withParam:(id)arg2 withCallback:(CDUnknownBlockType)arg3;	// IMP=0x0000000101b66d48
- (_Bool)dispatchEvent:(id)arg1 withParam:(id)arg2;	// IMP=0x0000000101b66c94
- (_Bool)callbackNotSupported:(id)arg1;	// IMP=0x0000000101b66b1c
- (_Bool)callbackInvalidParameter:(id)arg1 withMessage:(id)arg2;	// IMP=0x0000000101b6694c
- (_Bool)callbackFailure:(id)arg1 withMessage:(id)arg2;	// IMP=0x0000000101b66820
- (void)resultCallback:(id)arg1 withResult:(id)arg2;	// IMP=0x0000000101b6675c
- (_Bool)callbackFailure:(id)arg1 withResult:(id)arg2;	// IMP=0x0000000101b66408
- (_Bool)callbackSuccess:(id)arg1;	// IMP=0x0000000101b660cc
@property(readonly, copy, nonatomic) CDUnknownBlockType callbackBlock;
@property(nonatomic, getter=isKeepAlive) _Bool keepAlive;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
@property(readonly, nonatomic) __weak WXSDKInstance *weexEnv;
@property(readonly, nonatomic) __weak UIView<WVWebViewBasicProtocol> *webViewEnv;
@property(readonly, nonatomic) __weak id env;
@property(readonly, nonatomic) __weak UIViewController *viewController;
@property(readonly, nonatomic) __weak UIView *view;
@property(readonly, nonatomic) NSString *name;
- (void)invokeUnsafe:(id)arg1;	// IMP=0x0000000101b65890
- (void)dealloc;	// IMP=0x0000000101b6581c
- (id)invalidParamsTypeError;	// IMP=0x0000000101b657dc
- (id)errorWithRet:(id)arg1 withMessage:(id)arg2;	// IMP=0x0000000101b656a0
- (_Bool)checkPermission;	// IMP=0x0000000101b6542c
- (_Bool)fixParamsType;	// IMP=0x0000000101b652dc
- (_Bool)findHandlerInfoUnsafe;	// IMP=0x0000000101b65190
- (_Bool)parseHandlerKeyFromName:(id)arg1;	// IMP=0x0000000101b650bc
- (_Bool)convertStringParamsToDictionary:(id)arg1 compatible:(BOOL)arg2;	// IMP=0x0000000101b64f34
- (_Bool)parseParamsFromURL:(id)arg1;	// IMP=0x0000000101b64e1c
- (_Bool)parseHandlerKeyFromURL:(id)arg1;	// IMP=0x0000000101b64c30
- (_Bool)checkEnvironment;	// IMP=0x0000000101b64b6c
- (id)initWithName:(id)arg1 withParams:(id)arg2 withInvocation:(id)arg3 isIgnorePermission:(_Bool)arg4;	// IMP=0x0000000101b64888
- (id)initWithName:(id)arg1 withParams:(id)arg2 withCallback:(CDUnknownBlockType)arg3 withReferrer:(id)arg4 withBridge:(id)arg5;	// IMP=0x0000000101b64620
- (id)initWithName:(id)arg1 withStringParams:(id)arg2 withReqId:(id)arg3 withReferrer:(id)arg4 withBridge:(id)arg5;	// IMP=0x0000000101b64400
- (id)initWithName:(id)arg1 withParams:(id)arg2 withReqId:(id)arg3 withReferrer:(id)arg4 withBridge:(id)arg5;	// IMP=0x0000000101b641f0
- (id)initWithURL:(id)arg1 withReferrer:(id)arg2 withBridge:(id)arg3;	// IMP=0x0000000101b64024
- (id)initWithReferrer:(id)arg1 withBridge:(id)arg2;	// IMP=0x0000000101b63f5c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

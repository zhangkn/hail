//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SFSafariViewControllerDelegate.h"

@class NSMutableArray, NSSet, NSString, UIViewController, VKAccessToken;

@interface VKSdk : NSObject <SFSafariViewControllerDelegate>
{
    id <VKSdkUIDelegate> _uiDelegate;	// 8 = 0x8
    NSString *_apiVersion;	// 16 = 0x10
    NSMutableArray *_sdkDelegates;	// 24 = 0x18
    unsigned long long _authState;	// 32 = 0x20
    unsigned long long _lastKnownOptions;	// 40 = 0x28
    NSString *_currentAppId;	// 48 = 0x30
    VKAccessToken *_accessToken;	// 56 = 0x38
    UIViewController *_presentedSafariViewController;	// 64 = 0x40
    NSSet *_permissions;	// 72 = 0x48
}

+ (void)setSchedulerEnabled:(_Bool)arg1;	// IMP=0x000000010096d5b4
+ (void)wakeUpSession:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010096cc44
+ (_Bool)isLoggedIn;	// IMP=0x000000010096cbb0
+ (void)forceLogout;	// IMP=0x000000010096c96c
+ (_Bool)processOpenInternalURL:(id)arg1 validation:(_Bool)arg2;	// IMP=0x000000010096c960
+ (_Bool)processOpenURL:(id)arg1 fromApplication:(id)arg2;	// IMP=0x000000010096c7dc
+ (_Bool)processOpenURL:(id)arg1 validation:(_Bool)arg2;	// IMP=0x000000010096b82c
+ (id)accessToken;	// IMP=0x000000010096b818
+ (void)setAccessToken:(id)arg1;	// IMP=0x000000010096b748
+ (_Bool)vkAppMayExists;	// IMP=0x000000010096b6b0
+ (void)authorize:(id)arg1 withOptions:(unsigned long long)arg2;	// IMP=0x000000010096b1fc
+ (void)authorize:(id)arg1;	// IMP=0x000000010096b1ec
+ (id)initializeWithAppId:(id)arg1 apiVersion:(id)arg2;	// IMP=0x000000010096ac1c
+ (id)initializeWithAppId:(id)arg1;	// IMP=0x000000010096ac08
+ (_Bool)initialized;	// IMP=0x000000010096abf4
+ (id)instance;	// IMP=0x000000010096ab7c
+ (void)initialize;	// IMP=0x000000010096aae8
@property(retain, nonatomic) NSSet *permissions; // @synthesize permissions=_permissions;
@property(nonatomic) __weak UIViewController *presentedSafariViewController; // @synthesize presentedSafariViewController=_presentedSafariViewController;
@property(retain, nonatomic) VKAccessToken *accessToken; // @synthesize accessToken=_accessToken;
@property(copy, nonatomic) NSString *currentAppId; // @synthesize currentAppId=_currentAppId;
@property(nonatomic) unsigned long long lastKnownOptions; // @synthesize lastKnownOptions=_lastKnownOptions;
@property(nonatomic) unsigned long long authState; // @synthesize authState=_authState;
@property(readonly, nonatomic) NSMutableArray *sdkDelegates; // @synthesize sdkDelegates=_sdkDelegates;
@property(copy, nonatomic) NSString *apiVersion; // @synthesize apiVersion=_apiVersion;
@property(nonatomic) __weak id <VKSdkUIDelegate> uiDelegate; // @synthesize uiDelegate=_uiDelegate;
- (void).cxx_destruct;	// IMP=0x000000010096e2b4
- (void)safariViewControllerDidFinish:(id)arg1;	// IMP=0x000000010096e110
- (void)notifyDelegate:(SEL)arg1 obj:(id)arg2;	// IMP=0x000000010096ddc0
- (void)resetSdkState;	// IMP=0x000000010096dd5c
- (void)notifyUserAuthorizationFailed:(id)arg1;	// IMP=0x000000010096dcfc
- (void)requestSdkState:(CDUnknownBlockType)arg1 trackVisitor:(_Bool)arg2 token:(id)arg3;	// IMP=0x000000010096d8b4
- (void)handleDidBecomeActive;	// IMP=0x000000010096d74c
- (void)dealloc;	// IMP=0x000000010096d6d0
- (id)initUniqueInstance;	// IMP=0x000000010096d604
- (id)updatePermissions:(long long)arg1;	// IMP=0x000000010096d3d0
- (_Bool)hasPermissions:(id)arg1;	// IMP=0x000000010096d1c4
- (void)unregisterDelegate:(id)arg1;	// IMP=0x000000010096afe8
- (void)registerDelegate:(id)arg1;	// IMP=0x000000010096ae30

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


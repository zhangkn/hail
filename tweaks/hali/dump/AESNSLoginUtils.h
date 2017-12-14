//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GIDSignInDelegate.h"
#import "GIDSignInUIDelegate.h"
#import "VKSdkDelegate.h"
#import "VKSdkUIDelegate.h"

@class AELoginService, GIDSignInButton, NSString, UIViewController<AELoginResultHanderDelegate>;

@interface AESNSLoginUtils : NSObject <VKSdkDelegate, VKSdkUIDelegate, GIDSignInDelegate, GIDSignInUIDelegate>
{
    AELoginService *_loginService;	// 8 = 0x8
    unsigned long long _snsType;	// 16 = 0x10
    GIDSignInButton *googleButton;	// 24 = 0x18
    UIViewController<AELoginResultHanderDelegate> *_baseVC;	// 32 = 0x20
    CDUnknownBlockType _callback;	// 40 = 0x28
}

@property(copy) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void).cxx_destruct;	// IMP=0x0000000100ba9340
- (void)dealloc;	// IMP=0x0000000100ba92ec
- (void)loginFailedWithErrorMessage:(id)arg1;	// IMP=0x0000000100ba91c8
- (_Bool)handleSNSAuthRedirectURL:(id)arg1 sourceApplication:(id)arg2;	// IMP=0x0000000100ba8920
- (void)addEmailInfo:(id)arg1 baseVC:(id)arg2 loginType:(unsigned long long)arg3;	// IMP=0x0000000100ba835c
- (id)trackSnsTypeValueFromLoginType:(unsigned long long)arg1;	// IMP=0x0000000100ba82f4
- (void)checkEmailExistsAndContinue:(id)arg1 type:(unsigned long long)arg2;	// IMP=0x0000000100ba7bf0
- (void)signIn:(id)arg1 dismissViewController:(id)arg2;	// IMP=0x0000000100ba7bd8
- (void)signIn:(id)arg1 presentViewController:(id)arg2;	// IMP=0x0000000100ba7b78
- (void)signInWithGGUser:(id)arg1;	// IMP=0x0000000100ba79cc
- (void)signIn:(id)arg1 didSignInForUser:(id)arg2 withError:(id)arg3;	// IMP=0x0000000100ba7754
- (void)startGGAuth;	// IMP=0x0000000100ba762c
- (void)vkSdkShouldPresentViewController:(id)arg1;	// IMP=0x0000000100ba75cc
- (void)vkSdkNeedCaptchaEnter:(id)arg1;	// IMP=0x0000000100ba75c8
- (void)vkSdkTokenHasExpired:(id)arg1;	// IMP=0x0000000100ba7524
- (void)vkSdkUserAuthorizationFailed;	// IMP=0x0000000100ba7480
- (void)vkSdkAccessAuthorizationFinishedWithResult:(id)arg1;	// IMP=0x0000000100ba721c
- (void)startVKAuth;	// IMP=0x0000000100ba701c
- (void)startFBAuth;	// IMP=0x0000000100ba68b8
- (void)startAuth:(unsigned long long)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x0000000100ba6700
- (id)initWithBaseVC:(id)arg1;	// IMP=0x0000000100ba6688

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


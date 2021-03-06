//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIApplicationDelegate.h"
#import "WCSessionDelegate.h"

@class NSString, UITabBarController, UIWindow;

@interface iAliexpressAppDelegate : NSObject <WCSessionDelegate, UIApplicationDelegate>
{
    UIWindow *window;	// 8 = 0x8
    UITabBarController *rootController;	// 16 = 0x10
}

@property(retain, nonatomic) UITabBarController *rootController; // @synthesize rootController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window;
- (void).cxx_destruct;	// IMP=0x00000001000066cc
- (_Bool)isHomeVCLoaded;	// IMP=0x00000001000065d8
- (void)session:(id)arg1 activationDidCompleteWithState:(long long)arg2 error:(id)arg3;	// IMP=0x0000000100006588
- (void)sessionDidDeactivate:(id)arg1;	// IMP=0x0000000100006540
- (void)sessionDidBecomeInactive:(id)arg1;	// IMP=0x000000010000653c
- (void)session:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x0000000100006328
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100005c48
- (void)application:(id)arg1 handleWatchKitExtensionRequest:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100005c44
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;	// IMP=0x0000000100005b9c
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;	// IMP=0x0000000100005aec
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;	// IMP=0x0000000100005a7c
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000054ec
- (void)dealloc;	// IMP=0x0000000100005470
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x0000000100005334
- (_Bool)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;	// IMP=0x00000001000051f8
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;	// IMP=0x000000010000500c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


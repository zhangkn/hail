//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface FBSDKTestUsersManager : NSObject
{
    NSString *_appID;	// 8 = 0x8
    NSString *_appSecret;	// 16 = 0x10
    NSMutableDictionary *_accounts;	// 24 = 0x18
}

+ (id)sharedInstanceForAppID:(id)arg1 appSecret:(id)arg2;	// IMP=0x000000010126cb10
- (void).cxx_destruct;	// IMP=0x000000010126f480
- (void)fetchExistingTestAccountsWithAfterCursor:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010126e7dc
- (id)appAccessToken;	// IMP=0x000000010126e788
- (id)userIdAndTokenOfExistingAccountWithPermissions:(id)arg1 skip:(id)arg2;	// IMP=0x000000010126e3e0
- (id)tokenDataForTokenString:(id)arg1 permissions:(id)arg2 userId:(id)arg3;	// IMP=0x000000010126e2dc
- (void)removeTestAccount:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010126e158
- (void)makeFriendsWithFirst:(id)arg1 second:(id)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x000000010126dae8
- (void)addTestAccountWithPermissions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010126d534
- (void)requestTestAccountTokensWithArraysOfPermissions:(id)arg1 createIfNotFound:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010126ccac
- (id)init;	// IMP=0x000000010126ca54
- (id)initWithAppID:(id)arg1 appSecret:(id)arg2;	// IMP=0x000000010126c94c

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACAccountStore, ACAccountType;

@interface FBSDKSystemAccountStoreAdapter : NSObject
{
    ACAccountStore *_accountStore;	// 8 = 0x8
    ACAccountType *_accountType;	// 16 = 0x10
    _Bool _forceBlockingRenew;	// 24 = 0x18
}

+ (void)setSharedInstance:(id)arg1;	// IMP=0x000000010126b48c
+ (id)sharedInstance;	// IMP=0x000000010126b480
+ (void)initialize;	// IMP=0x000000010126b20c
@property(nonatomic) _Bool forceBlockingRenew; // @synthesize forceBlockingRenew=_forceBlockingRenew;
- (void).cxx_destruct;	// IMP=0x000000010126c90c
- (void)renewSystemAuthorization:(CDUnknownBlockType)arg1;	// IMP=0x000000010126c2cc
- (void)requestAccessToFacebookAccountStore:(id)arg1 retrying:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010126bc04
- (void)requestAccessToFacebookAccountStore:(id)arg1 defaultAudience:(id)arg2 isReauthorize:(_Bool)arg3 appID:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x000000010126b620
- (id)accessTokenString;	// IMP=0x000000010126b49c
@property(readonly, nonatomic) ACAccountType *accountType;
@property(readonly, retain, nonatomic) ACAccountStore *accountStore;
- (id)init;	// IMP=0x000000010126b27c

@end


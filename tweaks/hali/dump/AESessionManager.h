//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIAlertViewDelegate.h"

@class AESessionUserInternal, NSPointerArray, NSString, UIAlertView;

@interface AESessionManager : NSObject <UIAlertViewDelegate>
{
    _Bool _isUpdatingToken;	// 8 = 0x8
    AESessionUserInternal *_currentInternalSession;	// 16 = 0x10
    UIAlertView *_alertView;	// 24 = 0x18
    NSPointerArray *_tokenUpdateRetryRequestArray;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x0000000100a23c30
+ (void)clearAllUserCacheData;	// IMP=0x0000000100a25c88
@property(nonatomic) _Bool isUpdatingToken; // @synthesize isUpdatingToken=_isUpdatingToken;
@property(retain, nonatomic) NSPointerArray *tokenUpdateRetryRequestArray; // @synthesize tokenUpdateRetryRequestArray=_tokenUpdateRetryRequestArray;
@property(retain, nonatomic) UIAlertView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) AESessionUserInternal *currentInternalSession; // @synthesize currentInternalSession=_currentInternalSession;
- (void).cxx_destruct;	// IMP=0x0000000100a25c34
- (void)retryRequest;	// IMP=0x0000000100a25898
- (void)updateAccessTokenWhenComplete:(CDUnknownBlockType)arg1;	// IMP=0x0000000100a252ec
- (void)handleRequestAuthError:(id)arg1;	// IMP=0x0000000100a25004
- (void)updateSessionToken:(id)arg1;	// IMP=0x0000000100a24b80
- (void)userLogout;	// IMP=0x0000000100a249e0
- (void)userLogin:(id)arg1 snsLoginResult:(id)arg2;	// IMP=0x0000000100a24468
- (void)userLogin:(id)arg1 loginResult:(id)arg2;	// IMP=0x0000000100a23ee8
- (id)currentMember;	// IMP=0x0000000100a23e94
- (void)updateCurrentMember:(id)arg1;	// IMP=0x0000000100a23e28
- (id)currentSession;	// IMP=0x0000000100a23dd4
- (void)updateLoginIdentifier:(id)arg1;	// IMP=0x0000000100a23d48
- (id)init;	// IMP=0x0000000100a23b04

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


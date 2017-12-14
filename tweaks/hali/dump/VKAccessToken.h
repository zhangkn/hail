//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKObject.h"

#import "NSCoding.h"

@class NSArray, NSString, VKUser;

@interface VKAccessToken : VKObject <NSCoding>
{
    NSString *_accessToken;	// 8 = 0x8
    NSString *_userId;	// 16 = 0x10
    NSString *_secret;	// 24 = 0x18
    NSArray *_permissions;	// 32 = 0x20
    _Bool _httpsRequired;	// 40 = 0x28
    long long _expiresIn;	// 48 = 0x30
    VKUser *_localUser;	// 56 = 0x38
    NSString *_email;	// 64 = 0x40
    double _created;	// 72 = 0x48
}

+ (void)delete:(id)arg1;	// IMP=0x00000001009513dc
+ (id)load:(id)arg1;	// IMP=0x0000000100951270
+ (void)save:(id)arg1 data:(id)arg2;	// IMP=0x0000000100951188
+ (id)getKeychainQuery:(id)arg1;	// IMP=0x0000000100951074
+ (id)savedToken:(id)arg1;	// IMP=0x0000000100950c6c
+ (id)tokenFromUrlString:(id)arg1;	// IMP=0x000000010094fe28
+ (id)tokenWithToken:(id)arg1 secret:(id)arg2 userId:(id)arg3;	// IMP=0x000000010094fd84
@property(copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(readonly, nonatomic) VKUser *localUser; // @synthesize localUser=_localUser;
@property(readonly, nonatomic) double created; // @synthesize created=_created;
@property(readonly, nonatomic) _Bool httpsRequired; // @synthesize httpsRequired=_httpsRequired;
@property(readonly, nonatomic) long long expiresIn; // @synthesize expiresIn=_expiresIn;
@property(readonly, copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(readonly, copy, nonatomic) NSArray *permissions; // @synthesize permissions=_permissions;
@property(readonly, copy, nonatomic) NSString *secret; // @synthesize secret=_secret;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;	// IMP=0x00000001009514a0
- (id)mutableCopy;	// IMP=0x0000000100951038
- (id)copy;	// IMP=0x0000000100950ffc
- (void)saveTokenToDefaults:(id)arg1;	// IMP=0x0000000100950f7c
- (void)checkIfExpired;	// IMP=0x0000000100950e98
- (_Bool)isExpired;	// IMP=0x0000000100950df8
- (id)initWithVKAccessToken:(id)arg1;	// IMP=0x0000000100950a20
- (id)initWithUrlString:(id)arg1;	// IMP=0x000000010095069c
- (id)restorePermissions:(id)arg1;	// IMP=0x0000000100950464
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001009501a4
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010094ff98
- (id)initWithToken:(id)arg1 secret:(id)arg2 userId:(id)arg3;	// IMP=0x000000010094fe8c
- (void)notifyTokenExpired;	// IMP=0x000000010096e674
- (void)setAccessTokenRequiredHTTPS;	// IMP=0x000000010096e5f0

@end

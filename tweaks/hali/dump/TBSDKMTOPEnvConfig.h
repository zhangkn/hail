//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TBSDKMTOPEnvConfig : NSObject
{
    int _environment;	// 8 = 0x8
    NSString *_appkey;	// 16 = 0x10
    NSString *_appSecret;	// 24 = 0x18
    NSString *_uid;	// 32 = 0x20
    NSString *_gatewayDomain;	// 40 = 0x28
    NSString *_customMtopRequestURL;	// 48 = 0x30
    NSString *_authCode;	// 56 = 0x38
    unsigned long long _appkeyIndex;	// 64 = 0x40
}

+ (id)urlEncodeString:(id)arg1;	// IMP=0x000000010137b1ec
+ (id)shareInstance;	// IMP=0x000000010137ad6c
+ (void)initialize;	// IMP=0x000000010137ad08
@property(nonatomic) unsigned long long appkeyIndex; // @synthesize appkeyIndex=_appkeyIndex;
@property(retain, nonatomic) NSString *authCode; // @synthesize authCode=_authCode;
@property(retain, nonatomic) NSString *customMtopRequestURL; // @synthesize customMtopRequestURL=_customMtopRequestURL;
@property(retain, nonatomic) NSString *gatewayDomain; // @synthesize gatewayDomain=_gatewayDomain;
@property(nonatomic) int environment; // @synthesize environment=_environment;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSString *appSecret; // @synthesize appSecret=_appSecret;
@property(retain, nonatomic) NSString *appkey; // @synthesize appkey=_appkey;
- (void).cxx_destruct;	// IMP=0x000000010137b320
- (id)readUtdid;	// IMP=0x000000010137b158
- (id)init;	// IMP=0x000000010137adf0

@end


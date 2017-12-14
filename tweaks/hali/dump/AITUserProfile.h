//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface AITUserProfile : NSObject
{
    _Bool _isFollowing;	// 8 = 0x8
    _Bool _isLogin;	// 9 = 0x9
    _Bool _isOffical;	// 10 = 0xa
    _Bool _isInBlackList;	// 11 = 0xb
    NSString *_fakeMemberSeq;	// 16 = 0x10
    NSDictionary *_securityProfileDictionary;	// 24 = 0x18
    NSString *_memberSeq;	// 32 = 0x20
    long long _fansCount;	// 40 = 0x28
    long long _followCount;	// 48 = 0x30
    NSString *_gender;	// 56 = 0x38
    NSString *_lastActiveTime;	// 64 = 0x40
    long long _likeCount;	// 72 = 0x48
    NSString *_nickName;	// 80 = 0x50
    NSString *_personalAvatarUrl;	// 88 = 0x58
    NSString *_personalAvatarFsUrl;	// 96 = 0x60
    NSString *_personalBio;	// 104 = 0x68
    NSString *_featureName1;	// 112 = 0x70
    NSString *_featureid1;	// 120 = 0x78
    NSString *_featureName2;	// 128 = 0x80
    NSString *_featureid2;	// 136 = 0x88
    long long _postCount;	// 144 = 0x90
    NSString *_registerTime;	// 152 = 0x98
    NSString *_role;	// 160 = 0xa0
    NSString *_status;	// 168 = 0xa8
    NSString *_userName;	// 176 = 0xb0
    long long _addBlackListTime;	// 184 = 0xb8
    NSMutableDictionary *_securityProfileMutableDictionary;	// 192 = 0xc0
}

+ (id)getUserProfileFromSecurityDictionary:(id)arg1;	// IMP=0x000000010071ba5c
@property(copy, nonatomic) NSMutableDictionary *securityProfileMutableDictionary; // @synthesize securityProfileMutableDictionary=_securityProfileMutableDictionary;
@property(nonatomic) long long addBlackListTime; // @synthesize addBlackListTime=_addBlackListTime;
@property(nonatomic) _Bool isInBlackList; // @synthesize isInBlackList=_isInBlackList;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *role; // @synthesize role=_role;
@property(copy, nonatomic) NSString *registerTime; // @synthesize registerTime=_registerTime;
@property(nonatomic) long long postCount; // @synthesize postCount=_postCount;
@property(copy, nonatomic) NSString *featureid2; // @synthesize featureid2=_featureid2;
@property(copy, nonatomic) NSString *featureName2; // @synthesize featureName2=_featureName2;
@property(copy, nonatomic) NSString *featureid1; // @synthesize featureid1=_featureid1;
@property(copy, nonatomic) NSString *featureName1; // @synthesize featureName1=_featureName1;
@property(copy, nonatomic) NSString *personalBio; // @synthesize personalBio=_personalBio;
@property(copy, nonatomic) NSString *personalAvatarFsUrl; // @synthesize personalAvatarFsUrl=_personalAvatarFsUrl;
@property(copy, nonatomic) NSString *personalAvatarUrl; // @synthesize personalAvatarUrl=_personalAvatarUrl;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(nonatomic) long long likeCount; // @synthesize likeCount=_likeCount;
@property(copy, nonatomic) NSString *lastActiveTime; // @synthesize lastActiveTime=_lastActiveTime;
@property(nonatomic) _Bool isOffical; // @synthesize isOffical=_isOffical;
@property(nonatomic) _Bool isLogin; // @synthesize isLogin=_isLogin;
@property(nonatomic) _Bool isFollowing; // @synthesize isFollowing=_isFollowing;
@property(copy, nonatomic) NSString *gender; // @synthesize gender=_gender;
@property(nonatomic) long long followCount; // @synthesize followCount=_followCount;
@property(nonatomic) long long fansCount; // @synthesize fansCount=_fansCount;
@property(copy, nonatomic) NSString *memberSeq; // @synthesize memberSeq=_memberSeq;
@property(copy, nonatomic) NSDictionary *securityProfileDictionary; // @synthesize securityProfileDictionary=_securityProfileDictionary;
- (void).cxx_destruct;	// IMP=0x000000010071d5b8
@property(copy, nonatomic) NSString *fakeMemberSeq; // @synthesize fakeMemberSeq=_fakeMemberSeq;
- (id)init;	// IMP=0x000000010071c380

@end


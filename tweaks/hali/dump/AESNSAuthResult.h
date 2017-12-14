//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface AESNSAuthResult : NSObject <NSCopying>
{
    NSString *_snsUserId;	// 8 = 0x8
    NSString *_snsEmail;	// 16 = 0x10
    NSString *_snsFirstName;	// 24 = 0x18
    NSString *_snsLastName;	// 32 = 0x20
    NSString *_snsGender;	// 40 = 0x28
    unsigned long long _loginType;	// 48 = 0x30
    NSString *_aeSNSAuthSignature;	// 56 = 0x38
    NSString *_snsAccessToken;	// 64 = 0x40
}

@property(retain, nonatomic) NSString *snsAccessToken; // @synthesize snsAccessToken=_snsAccessToken;
@property(retain, nonatomic) NSString *aeSNSAuthSignature; // @synthesize aeSNSAuthSignature=_aeSNSAuthSignature;
@property(nonatomic) unsigned long long loginType; // @synthesize loginType=_loginType;
@property(retain, nonatomic) NSString *snsGender; // @synthesize snsGender=_snsGender;
@property(retain, nonatomic) NSString *snsLastName; // @synthesize snsLastName=_snsLastName;
@property(retain, nonatomic) NSString *snsFirstName; // @synthesize snsFirstName=_snsFirstName;
@property(retain, nonatomic) NSString *snsEmail; // @synthesize snsEmail=_snsEmail;
@property(retain, nonatomic) NSString *snsUserId; // @synthesize snsUserId=_snsUserId;
- (void).cxx_destruct;	// IMP=0x0000000100a3cebc
- (id)description;	// IMP=0x0000000100a3cafc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100a3c9dc

@end


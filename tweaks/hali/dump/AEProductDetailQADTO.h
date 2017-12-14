//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface AEProductDetailQADTO : NSObject
{
    NSNumber *_productId;	// 8 = 0x8
    NSString *_userAccountId;	// 16 = 0x10
    NSString *_userCountry;	// 24 = 0x18
    NSString *_userAvatar;	// 32 = 0x20
    NSString *_userName;	// 40 = 0x28
    NSString *_answerUnit;	// 48 = 0x30
    NSString *_gmtCreate;	// 56 = 0x38
    NSString *_questionPrefix;	// 64 = 0x40
    NSString *_content;	// 72 = 0x48
    NSString *_language;	// 80 = 0x50
    NSNumber *_answerCount;	// 88 = 0x58
    NSString *_noAnswerTip;	// 96 = 0x60
    NSString *_ansPrefix;	// 104 = 0x68
    NSString *_ansContent;	// 112 = 0x70
    NSString *_ansLanguage;	// 120 = 0x78
}

+ (id)replacedKeyFromPropertyName;	// IMP=0x00000001005c01d4
@property(retain, nonatomic) NSString *ansLanguage; // @synthesize ansLanguage=_ansLanguage;
@property(retain, nonatomic) NSString *ansContent; // @synthesize ansContent=_ansContent;
@property(retain, nonatomic) NSString *ansPrefix; // @synthesize ansPrefix=_ansPrefix;
@property(retain, nonatomic) NSString *noAnswerTip; // @synthesize noAnswerTip=_noAnswerTip;
@property(retain, nonatomic) NSNumber *answerCount; // @synthesize answerCount=_answerCount;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *questionPrefix; // @synthesize questionPrefix=_questionPrefix;
@property(retain, nonatomic) NSString *gmtCreate; // @synthesize gmtCreate=_gmtCreate;
@property(retain, nonatomic) NSString *answerUnit; // @synthesize answerUnit=_answerUnit;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *userAvatar; // @synthesize userAvatar=_userAvatar;
@property(retain, nonatomic) NSString *userCountry; // @synthesize userCountry=_userCountry;
@property(retain, nonatomic) NSString *userAccountId; // @synthesize userAccountId=_userAccountId;
@property(retain, nonatomic) NSNumber *productId; // @synthesize productId=_productId;
- (void).cxx_destruct;	// IMP=0x00000001005c0728

@end


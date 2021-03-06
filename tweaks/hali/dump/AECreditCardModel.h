//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AECreditCardModel : NSObject
{
    _Bool _bindCard;	// 8 = 0x8
    NSString *_cardNumber;	// 16 = 0x10
    NSString *_month;	// 24 = 0x18
    NSString *_year;	// 32 = 0x20
    NSString *_secCode;	// 40 = 0x28
    NSString *_firstName;	// 48 = 0x30
    NSString *_lastName;	// 56 = 0x38
    long long _fakeCardType;	// 64 = 0x40
    NSString *_cpfNumber;	// 72 = 0x48
}

+ (_Bool)isCPFWeakValid:(id)arg1;	// IMP=0x00000001004e7cc0
+ (_Bool)isCPFValid:(id)arg1;	// IMP=0x00000001004e7ae0
@property(retain, nonatomic) NSString *cpfNumber; // @synthesize cpfNumber=_cpfNumber;
@property(nonatomic) long long fakeCardType; // @synthesize fakeCardType=_fakeCardType;
@property(nonatomic) _Bool bindCard; // @synthesize bindCard=_bindCard;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(retain, nonatomic) NSString *secCode; // @synthesize secCode=_secCode;
@property(retain, nonatomic) NSString *year; // @synthesize year=_year;
@property(retain, nonatomic) NSString *month; // @synthesize month=_month;
@property(retain, nonatomic) NSString *cardNumber; // @synthesize cardNumber=_cardNumber;
- (void).cxx_destruct;	// IMP=0x00000001004e7a00
- (long long)cardType;	// IMP=0x00000001004e76ec
- (id)channelInfo;	// IMP=0x00000001004e729c
- (id)init;	// IMP=0x00000001004e722c
- (id)validate;	// IMP=0x00000001004e7d78
- (_Bool)isValid;	// IMP=0x00000001004e7aa4

@end


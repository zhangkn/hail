//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFMoney, NSString;

@interface AEDirectShippingDTO : NSObject
{
    NSString *_company;	// 8 = 0x8
    AFMoney *_freightAmount;	// 16 = 0x10
    NSString *_time;	// 24 = 0x18
    NSString *_currency;	// 32 = 0x20
    NSString *_discount;	// 40 = 0x28
    NSString *_totalFreight;	// 48 = 0x30
    NSString *_saveMoney;	// 56 = 0x38
    NSString *_serviceName;	// 64 = 0x40
    NSString *_sendGoodsCountryFullName;	// 72 = 0x48
    NSString *_sendGoodsCountry;	// 80 = 0x50
    NSString *_commitDay;	// 88 = 0x58
}

@property(copy, nonatomic) NSString *commitDay; // @synthesize commitDay=_commitDay;
@property(copy, nonatomic) NSString *sendGoodsCountry; // @synthesize sendGoodsCountry=_sendGoodsCountry;
@property(copy, nonatomic) NSString *sendGoodsCountryFullName; // @synthesize sendGoodsCountryFullName=_sendGoodsCountryFullName;
@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(retain, nonatomic) NSString *saveMoney; // @synthesize saveMoney=_saveMoney;
@property(retain, nonatomic) NSString *totalFreight; // @synthesize totalFreight=_totalFreight;
@property(retain, nonatomic) NSString *discount; // @synthesize discount=_discount;
@property(retain, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(retain, nonatomic) NSString *time; // @synthesize time=_time;
@property(retain, nonatomic) AFMoney *freightAmount; // @synthesize freightAmount=_freightAmount;
@property(retain, nonatomic) NSString *company; // @synthesize company=_company;
- (void).cxx_destruct;	// IMP=0x00000001004ea450

@end

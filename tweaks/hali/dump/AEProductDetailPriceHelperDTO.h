//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFMoney, NSNumber, NSString;

@interface AEProductDetailPriceHelperDTO : NSObject
{
    AFMoney *_minAmount;	// 8 = 0x8
    AFMoney *_maxAmount;	// 16 = 0x10
    AFMoney *_originalMinAmount;	// 24 = 0x18
    AFMoney *_originalMaxAmount;	// 32 = 0x20
    AFMoney *_previewMinAmount;	// 40 = 0x28
    AFMoney *_previewMaxAmount;	// 48 = 0x30
    NSString *_bigsalePrice;	// 56 = 0x38
    NSString *_bulkPrice;	// 64 = 0x40
    NSString *_priceUnit;	// 72 = 0x48
    NSString *_multiUnit;	// 80 = 0x50
    NSString *_mobileonlyDisplay;	// 88 = 0x58
    NSNumber *_discount;	// 96 = 0x60
    NSString *_memberPriceLoginOut;	// 104 = 0x68
    NSString *_memberPriceDesc;	// 112 = 0x70
    unsigned long long _discountType;	// 120 = 0x78
    NSNumber *_coinExchangeNumber;	// 128 = 0x80
}

+ (id)priceHelperDTOWithCoinProductDTO:(id)arg1;	// IMP=0x00000001005bf9d0
+ (id)priceHelperDTOWithProductDetailDTO:(id)arg1;	// IMP=0x00000001005bf05c
@property(retain, nonatomic) NSNumber *coinExchangeNumber; // @synthesize coinExchangeNumber=_coinExchangeNumber;
@property(nonatomic) unsigned long long discountType; // @synthesize discountType=_discountType;
@property(retain, nonatomic) NSString *memberPriceDesc; // @synthesize memberPriceDesc=_memberPriceDesc;
@property(retain, nonatomic) NSString *memberPriceLoginOut; // @synthesize memberPriceLoginOut=_memberPriceLoginOut;
@property(retain, nonatomic) NSNumber *discount; // @synthesize discount=_discount;
@property(retain, nonatomic) NSString *mobileonlyDisplay; // @synthesize mobileonlyDisplay=_mobileonlyDisplay;
@property(retain, nonatomic) NSString *multiUnit; // @synthesize multiUnit=_multiUnit;
@property(retain, nonatomic) NSString *priceUnit; // @synthesize priceUnit=_priceUnit;
@property(retain, nonatomic) NSString *bulkPrice; // @synthesize bulkPrice=_bulkPrice;
@property(retain, nonatomic) NSString *bigsalePrice; // @synthesize bigsalePrice=_bigsalePrice;
@property(retain, nonatomic) AFMoney *previewMaxAmount; // @synthesize previewMaxAmount=_previewMaxAmount;
@property(retain, nonatomic) AFMoney *previewMinAmount; // @synthesize previewMinAmount=_previewMinAmount;
@property(retain, nonatomic) AFMoney *originalMaxAmount; // @synthesize originalMaxAmount=_originalMaxAmount;
@property(retain, nonatomic) AFMoney *originalMinAmount; // @synthesize originalMinAmount=_originalMinAmount;
@property(retain, nonatomic) AFMoney *maxAmount; // @synthesize maxAmount=_maxAmount;
@property(retain, nonatomic) AFMoney *minAmount; // @synthesize minAmount=_minAmount;
- (void).cxx_destruct;	// IMP=0x00000001005c0090

@end


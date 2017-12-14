//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AEMobileRechargeProductSKUInfoDTO, NSNumber, NSString;

@interface AEMobileRechargeProductDetailDTO : NSObject
{
    _Bool _canBuyProduct;	// 8 = 0x8
    _Bool _hasPoundage;	// 9 = 0x9
    _Bool _promotionProduct;	// 10 = 0xa
    NSString *_productId;	// 16 = 0x10
    NSString *_currency;	// 24 = 0x18
    NSString *_currencyCode;	// 32 = 0x20
    NSString *_price;	// 40 = 0x28
    NSString *_payAmount;	// 48 = 0x30
    NSString *_poundage;	// 56 = 0x38
    NSString *_discountPrice;	// 64 = 0x40
    NSNumber *_discount;	// 72 = 0x48
    AEMobileRechargeProductSKUInfoDTO *_skuInfo;	// 80 = 0x50
}

+ (id)objectWithKeyValues:(id)arg1 context:(id)arg2 error:(id *)arg3;	// IMP=0x000000010051bc80
@property(retain, nonatomic) AEMobileRechargeProductSKUInfoDTO *skuInfo; // @synthesize skuInfo=_skuInfo;
@property(retain, nonatomic) NSNumber *discount; // @synthesize discount=_discount;
@property(retain, nonatomic) NSString *discountPrice; // @synthesize discountPrice=_discountPrice;
@property(nonatomic) _Bool promotionProduct; // @synthesize promotionProduct=_promotionProduct;
@property(retain, nonatomic) NSString *poundage; // @synthesize poundage=_poundage;
@property(nonatomic) _Bool hasPoundage; // @synthesize hasPoundage=_hasPoundage;
@property(retain, nonatomic) NSString *payAmount; // @synthesize payAmount=_payAmount;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(retain, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(nonatomic) _Bool canBuyProduct; // @synthesize canBuyProduct=_canBuyProduct;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
- (void).cxx_destruct;	// IMP=0x000000010051c0dc

@end

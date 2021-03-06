//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFMoney, NSArray, NSString;

@interface AECartProductDTO : NSObject
{
    _Bool _isWarrantyFor3C;	// 8 = 0x8
    NSString *_productName;	// 16 = 0x10
    NSString *_unitName;	// 24 = 0x18
    NSString *_shoppingCartID;	// 32 = 0x20
    long long _maxLimit;	// 40 = 0x28
    NSString *_multiUnitName;	// 48 = 0x30
    NSString *_smallPicUrlPath;	// 56 = 0x38
    NSString *_skuAttr;	// 64 = 0x40
    long long _skuStock;	// 72 = 0x48
    NSArray *_skuProperties;	// 80 = 0x50
    NSString *_productID;	// 88 = 0x58
    NSString *_oddUnitName;	// 96 = 0x60
    AFMoney *_originalAmount;	// 104 = 0x68
    AFMoney *_sellingAmount;	// 112 = 0x70
    NSString *_goodsPrepareTime;	// 120 = 0x78
    long long _productCount;	// 128 = 0x80
    NSArray *_warranties;	// 136 = 0x88
    NSString *_bigSalePriceStr;	// 144 = 0x90
}

+ (id)objectClassInArray;	// IMP=0x000000010049d1ac
+ (id)replacedKeyFromPropertyName;	// IMP=0x000000010049d0e4
@property(copy, nonatomic) NSString *bigSalePriceStr; // @synthesize bigSalePriceStr=_bigSalePriceStr;
@property(retain, nonatomic) NSArray *warranties; // @synthesize warranties=_warranties;
@property(nonatomic) _Bool isWarrantyFor3C; // @synthesize isWarrantyFor3C=_isWarrantyFor3C;
@property(nonatomic) long long productCount; // @synthesize productCount=_productCount;
@property(retain, nonatomic) NSString *goodsPrepareTime; // @synthesize goodsPrepareTime=_goodsPrepareTime;
@property(retain, nonatomic) AFMoney *sellingAmount; // @synthesize sellingAmount=_sellingAmount;
@property(retain, nonatomic) AFMoney *originalAmount; // @synthesize originalAmount=_originalAmount;
@property(retain, nonatomic) NSString *oddUnitName; // @synthesize oddUnitName=_oddUnitName;
@property(retain, nonatomic) NSString *productID; // @synthesize productID=_productID;
@property(retain, nonatomic) NSArray *skuProperties; // @synthesize skuProperties=_skuProperties;
@property(nonatomic) long long skuStock; // @synthesize skuStock=_skuStock;
@property(retain, nonatomic) NSString *skuAttr; // @synthesize skuAttr=_skuAttr;
@property(retain, nonatomic) NSString *smallPicUrlPath; // @synthesize smallPicUrlPath=_smallPicUrlPath;
@property(retain, nonatomic) NSString *multiUnitName; // @synthesize multiUnitName=_multiUnitName;
@property(nonatomic) long long maxLimit; // @synthesize maxLimit=_maxLimit;
@property(retain, nonatomic) NSString *shoppingCartID; // @synthesize shoppingCartID=_shoppingCartID;
@property(retain, nonatomic) NSString *unitName; // @synthesize unitName=_unitName;
@property(retain, nonatomic) NSString *productName; // @synthesize productName=_productName;
- (void).cxx_destruct;	// IMP=0x000000010049d700
- (long long)availableProductCount;	// IMP=0x000000010049d250

@end


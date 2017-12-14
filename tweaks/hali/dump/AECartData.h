//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AEProductDetailBigSaleMarkDTO, AFMoney, NSArray, NSString;

@interface AECartData : NSObject
{
    NSString *_countryCode;	// 8 = 0x8
    NSString *_countryFullName;	// 16 = 0x10
    NSArray *_vendors;	// 24 = 0x18
    AEProductDetailBigSaleMarkDTO *_bigSaleMarkDTO;	// 32 = 0x20
    NSArray *_bills;	// 40 = 0x28
    AFMoney *_totalAmount;	// 48 = 0x30
    AFMoney *_previewTotalAmount;	// 56 = 0x38
    long long _availableProductItemCount;	// 64 = 0x40
    NSArray *_availableCartIDs;	// 72 = 0x48
    NSString *_recommendedProductsInfo;	// 80 = 0x50
}

+ (id)objectWithKeyValues:(id)arg1 context:(id)arg2 error:(id *)arg3;	// IMP=0x000000010049b9b0
+ (id)objectClassInArray;	// IMP=0x000000010049b90c
+ (id)ignoredPropertyNames;	// IMP=0x000000010049b8a4
+ (id)replacedKeyFromPropertyName;	// IMP=0x000000010049b66c
@property(retain, nonatomic) NSString *recommendedProductsInfo; // @synthesize recommendedProductsInfo=_recommendedProductsInfo;
@property(retain, nonatomic) NSArray *availableCartIDs; // @synthesize availableCartIDs=_availableCartIDs;
@property(nonatomic) long long availableProductItemCount; // @synthesize availableProductItemCount=_availableProductItemCount;
@property(retain, nonatomic) AFMoney *previewTotalAmount; // @synthesize previewTotalAmount=_previewTotalAmount;
@property(retain, nonatomic) AFMoney *totalAmount; // @synthesize totalAmount=_totalAmount;
@property(retain, nonatomic) NSArray *bills; // @synthesize bills=_bills;
@property(retain, nonatomic) AEProductDetailBigSaleMarkDTO *bigSaleMarkDTO; // @synthesize bigSaleMarkDTO=_bigSaleMarkDTO;
@property(retain, nonatomic) NSArray *vendors; // @synthesize vendors=_vendors;
@property(retain, nonatomic) NSString *countryFullName; // @synthesize countryFullName=_countryFullName;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
- (void).cxx_destruct;	// IMP=0x000000010049bde8
- (id)newValueFromOldValue:(id)arg1 property:(id)arg2;	// IMP=0x000000010049b750

@end

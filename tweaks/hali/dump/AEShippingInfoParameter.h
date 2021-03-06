//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AIFViewControllerParameterObject.h"

@class AIFCountry, NSArray, NSDictionary, NSString, ProductShippingInfoDTO;

@interface AEShippingInfoParameter : AIFViewControllerParameterObject
{
    _Bool _saveCountry;	// 8 = 0x8
    _Bool _isShippingMethodLoadedFromServer;	// 9 = 0x9
    _Bool _shouldShowPackageInfo;	// 10 = 0xa
    _Bool _shouldShowShipsFrom;	// 11 = 0xb
    _Bool _shouldEnableShipsFrom;	// 12 = 0xc
    _Bool _shouldEnableShipsTo;	// 13 = 0xd
    _Bool _shouldCallBackEveryShippingCostRequest;	// 14 = 0xe
    _Bool _isStatic;	// 15 = 0xf
    _Bool _isCountryChanged;	// 16 = 0x10
    NSString *_productId;	// 24 = 0x18
    NSDictionary *_shipsFromSKUDict;	// 32 = 0x20
    long long _availableQuantity;	// 40 = 0x28
    ProductShippingInfoDTO *_shippingInfoDTO;	// 48 = 0x30
    NSDictionary *_packageInfo;	// 56 = 0x38
    NSString *_shoppingCartID;	// 64 = 0x40
    AIFCountry *_fromCountry;	// 72 = 0x48
    AIFCountry *_toCountry;	// 80 = 0x50
    long long _quantity;	// 88 = 0x58
    NSDictionary *_shippingMethod;	// 96 = 0x60
    NSArray *_availableShippingMethods;	// 104 = 0x68
}

@property(nonatomic) _Bool isCountryChanged; // @synthesize isCountryChanged=_isCountryChanged;
@property(retain, nonatomic) NSArray *availableShippingMethods; // @synthesize availableShippingMethods=_availableShippingMethods;
@property(nonatomic) _Bool isStatic; // @synthesize isStatic=_isStatic;
@property(nonatomic) _Bool shouldCallBackEveryShippingCostRequest; // @synthesize shouldCallBackEveryShippingCostRequest=_shouldCallBackEveryShippingCostRequest;
@property(nonatomic) _Bool shouldEnableShipsTo; // @synthesize shouldEnableShipsTo=_shouldEnableShipsTo;
@property(nonatomic) _Bool shouldEnableShipsFrom; // @synthesize shouldEnableShipsFrom=_shouldEnableShipsFrom;
@property(nonatomic) _Bool shouldShowShipsFrom; // @synthesize shouldShowShipsFrom=_shouldShowShipsFrom;
@property(nonatomic) _Bool shouldShowPackageInfo; // @synthesize shouldShowPackageInfo=_shouldShowPackageInfo;
@property(nonatomic) _Bool isShippingMethodLoadedFromServer; // @synthesize isShippingMethodLoadedFromServer=_isShippingMethodLoadedFromServer;
@property(retain, nonatomic) NSDictionary *shippingMethod; // @synthesize shippingMethod=_shippingMethod;
@property(nonatomic) long long quantity; // @synthesize quantity=_quantity;
@property(retain, nonatomic) AIFCountry *toCountry; // @synthesize toCountry=_toCountry;
@property(retain, nonatomic) AIFCountry *fromCountry; // @synthesize fromCountry=_fromCountry;
@property(retain, nonatomic) NSString *shoppingCartID; // @synthesize shoppingCartID=_shoppingCartID;
@property(nonatomic) _Bool saveCountry; // @synthesize saveCountry=_saveCountry;
@property(retain, nonatomic) NSDictionary *packageInfo; // @synthesize packageInfo=_packageInfo;
@property(retain, nonatomic) ProductShippingInfoDTO *shippingInfoDTO; // @synthesize shippingInfoDTO=_shippingInfoDTO;
@property(nonatomic) long long availableQuantity; // @synthesize availableQuantity=_availableQuantity;
@property(retain, nonatomic) NSDictionary *shipsFromSKUDict; // @synthesize shipsFromSKUDict=_shipsFromSKUDict;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
- (void).cxx_destruct;	// IMP=0x00000001005fd914
@property(readonly, nonatomic) _Bool couldShipToCurrentCountry;
- (id)init;	// IMP=0x00000001005fd3f0

// Remaining properties
@property(nonatomic) __weak id <AEShippingInfoViewControllerCallback> delegate; // @dynamic delegate;

@end


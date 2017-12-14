//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AEQuantityStepperCellModel, AEShippingInfoParameter, AIFCountry, NSArray, NSMutableArray, ProductShippingInfoDTO;

@interface AEShippingInfoDataModel : NSObject
{
    ProductShippingInfoDTO *_shippingInfoDTO;	// 8 = 0x8
    NSMutableArray *_shippingMethods;	// 16 = 0x10
    NSArray *_shippingMethodTitlePositions;	// 24 = 0x18
    AEShippingInfoParameter *_inputPara;	// 32 = 0x20
    _Bool _shouldShowPackageInfo;	// 40 = 0x28
    _Bool _shouldShowShipsFrom;	// 41 = 0x29
    long long _availableQuantity;	// 48 = 0x30
    AEQuantityStepperCellModel *_quantityStepperCellModel;	// 56 = 0x38
    AIFCountry *_fromCountry;	// 64 = 0x40
    AIFCountry *_toCountry;	// 72 = 0x48
}

@property(retain, nonatomic) AIFCountry *toCountry; // @synthesize toCountry=_toCountry;
@property(retain, nonatomic) AIFCountry *fromCountry; // @synthesize fromCountry=_fromCountry;
@property(nonatomic) _Bool shouldShowShipsFrom; // @synthesize shouldShowShipsFrom=_shouldShowShipsFrom;
@property(nonatomic) _Bool shouldShowPackageInfo; // @synthesize shouldShowPackageInfo=_shouldShowPackageInfo;
@property(retain, nonatomic) AEQuantityStepperCellModel *quantityStepperCellModel; // @synthesize quantityStepperCellModel=_quantityStepperCellModel;
@property(retain, nonatomic) AEShippingInfoParameter *inputPara; // @synthesize inputPara=_inputPara;
@property(nonatomic) long long availableQuantity; // @synthesize availableQuantity=_availableQuantity;
@property(retain, nonatomic) ProductShippingInfoDTO *shippingInfoDTO; // @synthesize shippingInfoDTO=_shippingInfoDTO;
- (void).cxx_destruct;	// IMP=0x00000001005fc97c
- (_Bool)noShippingMethod;	// IMP=0x00000001005fc830
- (id)skuPropertyValueIDForCountry:(id)arg1;	// IMP=0x00000001005fc760
- (id)shipsFromCountryCodes;	// IMP=0x00000001005fc6e4
- (void)setInitializedShippingInfoParameter;	// IMP=0x00000001005fc54c
- (id)getFinalizedShippingInfoParameter;	// IMP=0x00000001005fc378
- (id)shippingServiceNameAtIndex:(long long)arg1;	// IMP=0x00000001005fc2f4
- (void)selectShippingMethodAtIndex:(long long)arg1;	// IMP=0x00000001005fc1f0
- (id)selectedShippingMethodCellModel;	// IMP=0x00000001005fc198
- (id)shippingMethodCellModelAtIndex:(long long)arg1;	// IMP=0x00000001005fc130
- (long long)indexOfSelectedShippingMethod;	// IMP=0x00000001005fc074
- (long long)numberOfShippingMethods;	// IMP=0x00000001005fc05c
- (id)shippingMethodTitlePositions;	// IMP=0x00000001005fc04c
- (id)cellModelForIndexPath:(id)arg1;	// IMP=0x00000001005fbcf8
@property(nonatomic) long long quantity;
- (long long)numberOfRowsInSection:(long long)arg1;	// IMP=0x00000001005fbbf4
- (id)dictionaryForShippingInfoDTO:(id)arg1;	// IMP=0x00000001005fb7ac
- (void)initShippingMethodsFromStatic;	// IMP=0x00000001005fb3d0
- (void)setupShippingMethodTitlePositions;	// IMP=0x00000001005fae64
- (id)init;	// IMP=0x00000001005fac48

@end

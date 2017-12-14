//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AECategoryRefineAttributes, AECategoryRefineDTO, AESearchFilterNavigationBarModel, AESearchFilterTableViewModel, AESearchLogistics, AESearchQuery, NSString;

@interface AESearchFilterDataController : NSObject
{
    _Bool _shoppingCoupon;	// 8 = 0x8
    _Bool _isShowingAllAttributes;	// 9 = 0x9
    AESearchFilterNavigationBarModel *_navigationBarModel;	// 16 = 0x10
    AESearchFilterTableViewModel *_tableViewModel;	// 24 = 0x18
    AESearchQuery *_searchQuery;	// 32 = 0x20
    AESearchLogistics *_searchLogistics;	// 40 = 0x28
    AECategoryRefineAttributes *_currentSelectedAttribute;	// 48 = 0x30
    AECategoryRefineDTO *_currentCategoryRefineDto;	// 56 = 0x38
    NSString *_totalNum;	// 64 = 0x40
    AESearchQuery *_originSearchQuery;	// 72 = 0x48
    NSString *_logoWallproperty;	// 80 = 0x50
}

@property(nonatomic) _Bool isShowingAllAttributes; // @synthesize isShowingAllAttributes=_isShowingAllAttributes;
@property(nonatomic) _Bool shoppingCoupon; // @synthesize shoppingCoupon=_shoppingCoupon;
@property(copy, nonatomic) NSString *logoWallproperty; // @synthesize logoWallproperty=_logoWallproperty;
@property(retain, nonatomic) AESearchQuery *originSearchQuery; // @synthesize originSearchQuery=_originSearchQuery;
@property(copy, nonatomic) NSString *totalNum; // @synthesize totalNum=_totalNum;
@property(retain, nonatomic) AECategoryRefineDTO *currentCategoryRefineDto; // @synthesize currentCategoryRefineDto=_currentCategoryRefineDto;
@property(retain, nonatomic) AECategoryRefineAttributes *currentSelectedAttribute; // @synthesize currentSelectedAttribute=_currentSelectedAttribute;
@property(retain, nonatomic) AESearchLogistics *searchLogistics; // @synthesize searchLogistics=_searchLogistics;
@property(retain, nonatomic) AESearchQuery *searchQuery; // @synthesize searchQuery=_searchQuery;
@property(retain, nonatomic) AESearchFilterTableViewModel *tableViewModel; // @synthesize tableViewModel=_tableViewModel;
@property(retain, nonatomic) AESearchFilterNavigationBarModel *navigationBarModel; // @synthesize navigationBarModel=_navigationBarModel;
- (void).cxx_destruct;	// IMP=0x0000000100cd0ba8
- (void)updateSearchQueryWithDeleteRefineAttributes:(id)arg1;	// IMP=0x0000000100cd06fc
- (void)updateSearchQueryWithDeleteSelectedAttributesValue:(id)arg1;	// IMP=0x0000000100cd039c
- (void)updateSearchQueryWithDeleteAllSelectedAttributesValue:(id)arg1;	// IMP=0x0000000100cd01f8
- (void)updateSearchQueryWithAddSelectedAttributesValue:(id)arg1;	// IMP=0x0000000100ccfe10
- (void)updateCurrentSelectedAttribute;	// IMP=0x0000000100ccfbd8
- (void)updateModelsWithAttributeControlCellSelected;	// IMP=0x0000000100ccfb58
- (void)updateModelsWithStartSearching;	// IMP=0x0000000100ccfb10
- (void)updateSearchQueryWithShipToCountry:(id)arg1;	// IMP=0x0000000100ccf980
- (void)updateSearchQueryWithShipFromCountryCode:(id)arg1;	// IMP=0x0000000100ccf914
- (void)updateSearchQueryWithCategoryId:(id)arg1 categoryName:(id)arg2;	// IMP=0x0000000100ccf7d8
- (void)updateSearchQueryWithReset;	// IMP=0x0000000100ccf56c
- (id)formatPropertyValueFromArray:(id)arg1;	// IMP=0x0000000100ccf048
- (id)getSearchPropertiesWithCategoryRefineDTO:(id)arg1;	// IMP=0x0000000100cceb30
- (void)updateModels;	// IMP=0x0000000100ccde30
- (void)updateData;	// IMP=0x0000000100ccdc68
- (void)initModel;	// IMP=0x0000000100ccdbc8
- (void)initData;	// IMP=0x0000000100ccdbb8
- (id)getShipFromCountries;	// IMP=0x0000000100ccda18
- (void)updateWithSearchQuery:(id)arg1 categoryRefineDTO:(id)arg2 searchLogistics:(id)arg3 logoWallproperty:(id)arg4 shoppingCoupon:(_Bool)arg5 totalNum:(id)arg6;	// IMP=0x0000000100ccd8b0
- (id)initWithSearchQuery:(id)arg1 categoryRefineDTO:(id)arg2 searchLogistics:(id)arg3 logoWallproperty:(id)arg4 shoppingCoupon:(_Bool)arg5 totalNum:(id)arg6;	// IMP=0x0000000100ccd73c

@end


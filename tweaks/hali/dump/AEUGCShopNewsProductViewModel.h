//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AEUGCPromotionItemViewModel.h"
#import "AEUGCShopNewsPostProductCellViewModel.h"

@class AEUGCShopNewsProductDTO, NSAttributedString, NSString;

@interface AEUGCShopNewsProductViewModel : NSObject <AEUGCPromotionItemViewModel, AEUGCShopNewsPostProductCellViewModel>
{
    AEUGCShopNewsProductDTO *_dto;	// 8 = 0x8
    unsigned long long _displayScene;	// 16 = 0x10
}

+ (id)mock;	// IMP=0x0000000100ec09f0
@property(readonly, nonatomic) unsigned long long displayScene; // @synthesize displayScene=_displayScene;
- (void).cxx_destruct;	// IMP=0x0000000100ec09dc
@property(readonly, copy, nonatomic) NSString *productId;
@property(readonly, copy, nonatomic) NSString *productUrl;
@property(readonly, copy, nonatomic) NSString *originPriceStr;
@property(readonly, copy, nonatomic) NSString *priceStr;
@property(readonly, copy, nonatomic) NSString *bigProductImageUrl;
@property(readonly, copy, nonatomic) NSString *productImgUrl;
@property(readonly, copy, nonatomic) NSAttributedString *subtitleText;
@property(readonly, copy, nonatomic) NSString *titleText;
@property(readonly, copy, nonatomic) NSString *imageUrl;
- (id)initWithDTO:(id)arg1 displayScene:(unsigned long long)arg2;	// IMP=0x0000000100ec038c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

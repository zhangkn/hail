//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTile.h"

@class AEBigSaleMarkDTO, AESearchProductItemDTO, NSDictionary, NSString, ProductListViewVO;

@interface AEProductListSliderProductFloorViewModel : AEBaseTile
{
    _Bool _moreFlag;	// 8 = 0x8
    _Bool _hasListCategory;	// 9 = 0x9
    unsigned long long _slideType;	// 16 = 0x10
    id <AEProductListSliderProductFloorDelegate> _delegate;	// 24 = 0x18
    AESearchProductItemDTO *_productItemDTO;	// 32 = 0x20
    ProductListViewVO *_data;	// 40 = 0x28
    AEBigSaleMarkDTO *_bigSaleMark;	// 48 = 0x30
    NSDictionary *_bigSaleResource;	// 56 = 0x38
    NSString *_searchKw;	// 64 = 0x40
}

+ (Class)cellClass;	// IMP=0x0000000100c788e8
@property(copy, nonatomic) NSString *searchKw; // @synthesize searchKw=_searchKw;
@property(nonatomic) _Bool hasListCategory; // @synthesize hasListCategory=_hasListCategory;
@property(retain, nonatomic) NSDictionary *bigSaleResource; // @synthesize bigSaleResource=_bigSaleResource;
@property(nonatomic) _Bool moreFlag; // @synthesize moreFlag=_moreFlag;
@property(retain, nonatomic) AEBigSaleMarkDTO *bigSaleMark; // @synthesize bigSaleMark=_bigSaleMark;
@property(retain, nonatomic) ProductListViewVO *data; // @synthesize data=_data;
@property(retain, nonatomic) AESearchProductItemDTO *productItemDTO; // @synthesize productItemDTO=_productItemDTO;
@property(nonatomic) __weak id <AEProductListSliderProductFloorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long slideType; // @synthesize slideType=_slideType;
- (void).cxx_destruct;	// IMP=0x0000000100c7873c
- (double)heightForReferenceWidth:(double)arg1;	// IMP=0x0000000100c78560
- (id)init;	// IMP=0x0000000100c78458

@end


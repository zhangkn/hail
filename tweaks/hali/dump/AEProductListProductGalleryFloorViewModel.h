//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTile.h"

@class AEBigSaleMarkDTO, AESearchProductItemDTO, NSDictionary, NSString;

@interface AEProductListProductGalleryFloorViewModel : AEBaseTile
{
    _Bool _moreFlag;	// 8 = 0x8
    _Bool _hasListCategory;	// 9 = 0x9
    AESearchProductItemDTO *_data;	// 16 = 0x10
    AEBigSaleMarkDTO *_bigSaleMark;	// 24 = 0x18
    NSString *_searchKw;	// 32 = 0x20
    NSDictionary *_bigSaleResource;	// 40 = 0x28
}

+ (Class)cellClass;	// IMP=0x0000000100c26fd4
@property(retain, nonatomic) NSDictionary *bigSaleResource; // @synthesize bigSaleResource=_bigSaleResource;
@property(copy, nonatomic) NSString *searchKw; // @synthesize searchKw=_searchKw;
@property(nonatomic) _Bool hasListCategory; // @synthesize hasListCategory=_hasListCategory;
@property(nonatomic) _Bool moreFlag; // @synthesize moreFlag=_moreFlag;
@property(retain, nonatomic) AEBigSaleMarkDTO *bigSaleMark; // @synthesize bigSaleMark=_bigSaleMark;
@property(retain, nonatomic) AESearchProductItemDTO *data; // @synthesize data=_data;
- (void).cxx_destruct;	// IMP=0x0000000100c26e4c
- (double)heightForReferenceWidth:(double)arg1;	// IMP=0x0000000100c26ce4
- (id)init;	// IMP=0x0000000100c26bc8

@end


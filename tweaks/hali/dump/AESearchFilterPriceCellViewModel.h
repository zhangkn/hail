//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AESearchFilterCellBaseViewModel.h"

@class NSString;

@interface AESearchFilterPriceCellViewModel : AESearchFilterCellBaseViewModel
{
    NSString *_priceName;	// 8 = 0x8
    NSString *_currency;	// 16 = 0x10
    double _minPrice;	// 24 = 0x18
    double _maxPrice;	// 32 = 0x20
    NSString *_minPlaceholder;	// 40 = 0x28
    NSString *_maxPlaceholder;	// 48 = 0x30
}

+ (id)viewModelWithModel:(id)arg1;	// IMP=0x0000000100c2a12c
@property(copy, nonatomic) NSString *maxPlaceholder; // @synthesize maxPlaceholder=_maxPlaceholder;
@property(copy, nonatomic) NSString *minPlaceholder; // @synthesize minPlaceholder=_minPlaceholder;
@property(nonatomic) double maxPrice; // @synthesize maxPrice=_maxPrice;
@property(nonatomic) double minPrice; // @synthesize minPrice=_minPrice;
@property(copy, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(copy, nonatomic) NSString *priceName; // @synthesize priceName=_priceName;
- (void).cxx_destruct;	// IMP=0x0000000100c2a480

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AESearchFilterCellBaseModel.h"

@class NSString;

@interface AESearchFilterPriceCellModel : AESearchFilterCellBaseModel
{
    double _minPrice;	// 8 = 0x8
    double _maxPrice;	// 16 = 0x10
    NSString *_currency;	// 24 = 0x18
}

@property(retain, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(nonatomic) double maxPrice; // @synthesize maxPrice=_maxPrice;
@property(nonatomic) double minPrice; // @synthesize minPrice=_minPrice;
- (void).cxx_destruct;	// IMP=0x0000000100c40f48

@end


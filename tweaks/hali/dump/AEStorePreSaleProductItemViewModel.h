//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AEStoreProductItemViewModel, NSString;

@interface AEStorePreSaleProductItemViewModel : NSObject
{
    AEStoreProductItemViewModel *_product;	// 8 = 0x8
    NSString *_bookedCount;	// 16 = 0x10
    NSString *_preOrderPriceTitle;	// 24 = 0x18
    NSString *_bookingNowText;	// 32 = 0x20
}

+ (void)inflate:(id)arg1 withFields:(id)arg2;	// IMP=0x0000000100d68230
+ (id)modelFromStoreCellItemDTO:(id)arg1;	// IMP=0x0000000100d68148
@property(copy, nonatomic) NSString *bookingNowText; // @synthesize bookingNowText=_bookingNowText;
@property(copy, nonatomic) NSString *preOrderPriceTitle; // @synthesize preOrderPriceTitle=_preOrderPriceTitle;
@property(copy, nonatomic) NSString *bookedCount; // @synthesize bookedCount=_bookedCount;
@property(retain, nonatomic) AEStoreProductItemViewModel *product; // @synthesize product=_product;
- (void).cxx_destruct;	// IMP=0x0000000100d685a8

@end

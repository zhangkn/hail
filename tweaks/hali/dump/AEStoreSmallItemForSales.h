//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEStoreBaseItem.h"

@class UILabel;

@interface AEStoreSmallItemForSales : AEStoreBaseItem
{
    UILabel *_priceLabel;	// 8 = 0x8
    UILabel *_originalPriceLabel;	// 16 = 0x10
    UILabel *_discountLabel;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100869118
- (void)setViewModel:(id)arg1;	// IMP=0x0000000100868e34
- (void)setupDiscountLabel:(id)arg1;	// IMP=0x00000001008688f8
- (void)setupOriginalPriceLabel:(id)arg1;	// IMP=0x00000001008684ac
- (void)setupPriceLabel:(id)arg1;	// IMP=0x0000000100868068
- (void)setupContentView:(id)arg1;	// IMP=0x0000000100867ef0

@end

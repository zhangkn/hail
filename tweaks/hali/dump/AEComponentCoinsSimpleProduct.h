//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETileAdapterView.h"

@class UIImageView, UILabel;

@interface AEComponentCoinsSimpleProduct : AETileAdapterView
{
    UILabel *_richPrice;	// 8 = 0x8
    UILabel *_originalPrice;	// 16 = 0x10
    UILabel *_productsLeft;	// 24 = 0x18
    UIImageView *_product;	// 32 = 0x20
}

@property(retain, nonatomic) UIImageView *product; // @synthesize product=_product;
@property(retain, nonatomic) UILabel *productsLeft; // @synthesize productsLeft=_productsLeft;
@property(retain, nonatomic) UILabel *originalPrice; // @synthesize originalPrice=_originalPrice;
@property(retain, nonatomic) UILabel *richPrice; // @synthesize richPrice=_richPrice;
- (void).cxx_destruct;	// IMP=0x00000001002f9318
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x00000001002f90a0
- (void)configConstraints;	// IMP=0x00000001002f8688
- (void)configSubviews;	// IMP=0x00000001002f82a4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001002f81e0

@end


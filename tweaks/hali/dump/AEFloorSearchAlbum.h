//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETileAdapterFloor.h"

@class UIImageView, UILabel;

@interface AEFloorSearchAlbum : AETileAdapterFloor
{
    UILabel *_priceLabel;	// 8 = 0x8
    UILabel *_originPriceLabel;	// 16 = 0x10
    UIImageView *_productImageView;	// 24 = 0x18
}

+ (Class)modelClass;	// IMP=0x0000000100bf5514
+ (id)identifier;	// IMP=0x0000000100bf54e8
@property(retain, nonatomic) UIImageView *productImageView; // @synthesize productImageView=_productImageView;
@property(retain, nonatomic) UILabel *originPriceLabel; // @synthesize originPriceLabel=_originPriceLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
- (void).cxx_destruct;	// IMP=0x0000000100bf6d6c
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x0000000100bf679c
- (void)configConstraints;	// IMP=0x0000000100bf568c
- (void)configComponents;	// IMP=0x0000000100bf55cc
- (id)initFloor;	// IMP=0x0000000100bf5528

@end

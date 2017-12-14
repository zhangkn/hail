//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTileComponent.h"

@class AEImageTileComponent, AETextTileComponent;

@interface AEComponentCoinsSimpleProductViewModel : AEBaseTileComponent
{
    AETextTileComponent *_richPriceModel;	// 8 = 0x8
    AETextTileComponent *_originalPriceModel;	// 16 = 0x10
    AETextTileComponent *_productsLeftModel;	// 24 = 0x18
    AEImageTileComponent *_productModel;	// 32 = 0x20
}

@property(retain, nonatomic) AEImageTileComponent *productModel; // @synthesize productModel=_productModel;
@property(retain, nonatomic) AETextTileComponent *productsLeftModel; // @synthesize productsLeftModel=_productsLeftModel;
@property(retain, nonatomic) AETextTileComponent *originalPriceModel; // @synthesize originalPriceModel=_originalPriceModel;
@property(retain, nonatomic) AETextTileComponent *richPriceModel; // @synthesize richPriceModel=_richPriceModel;
- (void).cxx_destruct;	// IMP=0x00000001002f9778
- (double)heightForReferenceWidth:(double)arg1;	// IMP=0x00000001002f9630
- (id)initWithTileDTO:(id)arg1;	// IMP=0x00000001002f9380

@end


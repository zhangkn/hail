//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTile.h"

@class AETextTileComponent;

@interface AELinerBottomTile : AEBaseTile
{
    AETextTileComponent *_productTile;	// 8 = 0x8
    AETextTileComponent *_priceTile;	// 16 = 0x10
    AETextTileComponent *_ordersTile;	// 24 = 0x18
}

+ (Class)cellClass;	// IMP=0x00000001003dd544
@property(retain, nonatomic) AETextTileComponent *ordersTile; // @synthesize ordersTile=_ordersTile;
@property(retain, nonatomic) AETextTileComponent *priceTile; // @synthesize priceTile=_priceTile;
@property(retain, nonatomic) AETextTileComponent *productTile; // @synthesize productTile=_productTile;
- (void).cxx_destruct;	// IMP=0x00000001003dd890
- (id)initWithTileDTO:(id)arg1;	// IMP=0x00000001003dd558

@end


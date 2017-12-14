//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTile.h"

@class AEImageTileComponent, AETextTileComponent;

@interface AEStoreTitleTile : AEBaseTile
{
    AEImageTileComponent *_storeImgModel;	// 8 = 0x8
    AETextTileComponent *_storeName;	// 16 = 0x10
    AETextTileComponent *_storeLevel;	// 24 = 0x18
    AETextTileComponent *_positiveRate;	// 32 = 0x20
    long long _widthHeightRatio;	// 40 = 0x28
    AEImageTileComponent *_topBrandImage;	// 48 = 0x30
    AETextTileComponent *_topBrandText;	// 56 = 0x38
    AETextTileComponent *_topBrandAction;	// 64 = 0x40
}

+ (Class)cellClass;	// IMP=0x0000000100d2d488
@property(retain, nonatomic) AETextTileComponent *topBrandAction; // @synthesize topBrandAction=_topBrandAction;
@property(retain, nonatomic) AETextTileComponent *topBrandText; // @synthesize topBrandText=_topBrandText;
@property(retain, nonatomic) AEImageTileComponent *topBrandImage; // @synthesize topBrandImage=_topBrandImage;
@property(nonatomic) long long widthHeightRatio; // @synthesize widthHeightRatio=_widthHeightRatio;
@property(retain, nonatomic) AETextTileComponent *positiveRate; // @synthesize positiveRate=_positiveRate;
@property(retain, nonatomic) AETextTileComponent *storeLevel; // @synthesize storeLevel=_storeLevel;
@property(retain, nonatomic) AETextTileComponent *storeName; // @synthesize storeName=_storeName;
@property(retain, nonatomic) AEImageTileComponent *storeImgModel; // @synthesize storeImgModel=_storeImgModel;
- (void).cxx_destruct;	// IMP=0x0000000100d2dab8
- (double)heightForReferenceWidth:(double)arg1;	// IMP=0x0000000100d2d92c
- (id)initWithTileDTO:(id)arg1;	// IMP=0x0000000100d2d49c

@end


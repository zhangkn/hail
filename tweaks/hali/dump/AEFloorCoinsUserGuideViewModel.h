//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTile.h"

@class AEImageTileComponent, AETextTileComponent;

@interface AEFloorCoinsUserGuideViewModel : AEBaseTile
{
    AEImageTileComponent *_imageModel;	// 8 = 0x8
    AETextTileComponent *_okModel;	// 16 = 0x10
}

+ (Class)cellClass;	// IMP=0x0000000100332f9c
@property(retain, nonatomic) AETextTileComponent *okModel; // @synthesize okModel=_okModel;
@property(retain, nonatomic) AEImageTileComponent *imageModel; // @synthesize imageModel=_imageModel;
- (void).cxx_destruct;	// IMP=0x0000000100332e3c
- (id)initWithTileDTO:(id)arg1;	// IMP=0x00000001003329ec

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTile.h"

@class AEImageTileComponent, AETextTileComponent;

@interface AEStoreBrandStoryFloorViewModel : AEBaseTile
{
    AEImageTileComponent *_bannerImageModel;	// 8 = 0x8
    AEImageTileComponent *_backgroundImageModel;	// 16 = 0x10
    AETextTileComponent *_titleModel;	// 24 = 0x18
    AETextTileComponent *_subjectModel;	// 32 = 0x20
}

+ (Class)cellClass;	// IMP=0x0000000100d4f220
@property(retain, nonatomic) AETextTileComponent *subjectModel; // @synthesize subjectModel=_subjectModel;
@property(retain, nonatomic) AETextTileComponent *titleModel; // @synthesize titleModel=_titleModel;
@property(retain, nonatomic) AEImageTileComponent *backgroundImageModel; // @synthesize backgroundImageModel=_backgroundImageModel;
@property(retain, nonatomic) AEImageTileComponent *bannerImageModel; // @synthesize bannerImageModel=_bannerImageModel;
- (void).cxx_destruct;	// IMP=0x0000000100d4f094
- (id)initWithTileDTO:(id)arg1;	// IMP=0x0000000100d4e698

@end


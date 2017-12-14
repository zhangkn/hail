//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTile.h"

@class AEImageTileComponent, AETextTileComponent, NSArray;

@interface AEFloorTrendingStyle2Row3ImagesViewModel : AEBaseTile
{
    AEImageTileComponent *_iconModel;	// 8 = 0x8
    AETextTileComponent *_titleText;	// 16 = 0x10
    AETextTileComponent *_subtitleText;	// 24 = 0x18
    AETextTileComponent *_styleTitleText;	// 32 = 0x20
    AETextTileComponent *_descText;	// 40 = 0x28
    AETextTileComponent *_tagText;	// 48 = 0x30
    NSArray *_photos;	// 56 = 0x38
}

+ (Class)cellClass;	// IMP=0x0000000100394ad0
@property(copy, nonatomic) NSArray *photos; // @synthesize photos=_photos;
@property(retain, nonatomic) AETextTileComponent *tagText; // @synthesize tagText=_tagText;
@property(retain, nonatomic) AETextTileComponent *descText; // @synthesize descText=_descText;
@property(retain, nonatomic) AETextTileComponent *styleTitleText; // @synthesize styleTitleText=_styleTitleText;
@property(retain, nonatomic) AETextTileComponent *subtitleText; // @synthesize subtitleText=_subtitleText;
@property(retain, nonatomic) AETextTileComponent *titleText; // @synthesize titleText=_titleText;
@property(retain, nonatomic) AEImageTileComponent *iconModel; // @synthesize iconModel=_iconModel;
- (void).cxx_destruct;	// IMP=0x000000010039490c
- (id)initWithTileDTO:(id)arg1;	// IMP=0x0000000100393f9c

@end

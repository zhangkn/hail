//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTile.h"

@class AEImageTileComponent, AETextTileComponent;

@interface AEFloorViewMoreViewModel : AEBaseTile
{
    AEImageTileComponent *_leftDecorationImg;	// 8 = 0x8
    AETextTileComponent *_viewMoreModel;	// 16 = 0x10
    AEImageTileComponent *_rightDecorationImg;	// 24 = 0x18
}

+ (Class)cellClass;	// IMP=0x00000001003b125c
@property(retain, nonatomic) AEImageTileComponent *rightDecorationImg; // @synthesize rightDecorationImg=_rightDecorationImg;
@property(retain, nonatomic) AETextTileComponent *viewMoreModel; // @synthesize viewMoreModel=_viewMoreModel;
@property(retain, nonatomic) AEImageTileComponent *leftDecorationImg; // @synthesize leftDecorationImg=_leftDecorationImg;
- (void).cxx_destruct;	// IMP=0x00000001003b10e8
- (id)initWithTileDTO:(id)arg1;	// IMP=0x00000001003b0db0

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTile.h"

@class AEImageTileComponent;

@interface AEImageTile : AEBaseTile
{
    AEImageTileComponent *_imageComponent;	// 8 = 0x8
}

+ (Class)cellClass;	// IMP=0x00000001009eff3c
@property(retain, nonatomic) AEImageTileComponent *imageComponent; // @synthesize imageComponent=_imageComponent;
- (void).cxx_destruct;	// IMP=0x00000001009f00b8
- (double)heightForReferenceWidth:(double)arg1;	// IMP=0x00000001009f006c
- (id)initWithTileDTO:(id)arg1;	// IMP=0x00000001009eff50

@end


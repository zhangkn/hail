//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTile.h"

@class AEImageTileComponent, NSMutableArray;

@interface AERussiaMallTitleTile : AEBaseTile
{
    AEImageTileComponent *_tmallComponent;	// 8 = 0x8
    NSMutableArray *_benefitComponentList;	// 16 = 0x10
}

+ (Class)cellClass;	// IMP=0x0000000100404694
@property(retain, nonatomic) NSMutableArray *benefitComponentList; // @synthesize benefitComponentList=_benefitComponentList;
@property(retain, nonatomic) AEImageTileComponent *tmallComponent; // @synthesize tmallComponent=_tmallComponent;
- (void).cxx_destruct;	// IMP=0x0000000100404a10
- (double)heightForReferenceWidth:(double)arg1;	// IMP=0x0000000100404974
- (id)initWithTileDTO:(id)arg1;	// IMP=0x00000001004046a8

@end


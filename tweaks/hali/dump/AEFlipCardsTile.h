//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTile.h"

@class NSMutableArray;

@interface AEFlipCardsTile : AEBaseTile
{
    NSMutableArray *_imageComponentList;	// 8 = 0x8
}

+ (Class)cellClass;	// IMP=0x00000001003051a0
@property(retain) NSMutableArray *imageComponentList; // @synthesize imageComponentList=_imageComponentList;
- (void).cxx_destruct;	// IMP=0x0000000100305424
- (double)heightForReferenceWidth:(double)arg1;	// IMP=0x0000000100305404
- (id)initWithTileDTO:(id)arg1;	// IMP=0x00000001003051b4

@end

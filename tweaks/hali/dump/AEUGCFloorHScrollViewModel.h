//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTile.h"

@class AETextTileComponent, NSArray, NSMutableArray;

@interface AEUGCFloorHScrollViewModel : AEBaseTile
{
    AETextTileComponent *_titleModel;	// 8 = 0x8
    AETextTileComponent *_subtitleModel;	// 16 = 0x10
    NSArray *_itemArray;	// 24 = 0x18
    NSMutableArray *_itemMutableArray;	// 32 = 0x20
}

+ (Class)cellClass;	// IMP=0x0000000100db589c
@property(retain, nonatomic) NSMutableArray *itemMutableArray; // @synthesize itemMutableArray=_itemMutableArray;
@property(copy, nonatomic) NSArray *itemArray; // @synthesize itemArray=_itemArray;
@property(retain, nonatomic) AETextTileComponent *subtitleModel; // @synthesize subtitleModel=_subtitleModel;
@property(retain, nonatomic) AETextTileComponent *titleModel; // @synthesize titleModel=_titleModel;
- (void).cxx_destruct;	// IMP=0x0000000100db5714
- (double)heightForReferenceWidth:(double)arg1;	// IMP=0x0000000100db53d8
- (id)initWithTileDTO:(id)arg1;	// IMP=0x0000000100db4d88

@end


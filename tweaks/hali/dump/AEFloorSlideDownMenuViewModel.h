//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTile.h"

@class NSArray;

@interface AEFloorSlideDownMenuViewModel : AEBaseTile
{
    long long _selectedIndex;	// 8 = 0x8
    NSArray *_itemTitles;	// 16 = 0x10
    NSArray *_itemActions;	// 24 = 0x18
}

+ (Class)cellClass;	// IMP=0x0000000100376dd4
@property(copy, nonatomic) NSArray *itemActions; // @synthesize itemActions=_itemActions;
@property(copy, nonatomic) NSArray *itemTitles; // @synthesize itemTitles=_itemTitles;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (void).cxx_destruct;	// IMP=0x0000000100376b14
- (double)heightForReferenceWidth:(double)arg1;	// IMP=0x0000000100376ab0
- (id)layoutAttributesOptions;	// IMP=0x0000000100376a9c
- (id)initWithTileDTO:(id)arg1;	// IMP=0x0000000100376df4

@end

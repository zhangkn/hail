//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AESegmentedFloorViewModel.h"

@class NSArray, NSDictionary, UIColor;

@interface AEGradientSegmentedFloorViewModel : AESegmentedFloorViewModel
{
    NSArray *_segmentTitles;	// 8 = 0x8
    NSArray *_segmentActions;	// 16 = 0x10
    NSDictionary *_segmentAttrs;	// 24 = 0x18
    NSDictionary *_selectedSegmentAttrs;	// 32 = 0x20
    UIColor *_indicatorColor;	// 40 = 0x28
    double _segmentHeight;	// 48 = 0x30
    NSArray *_segmentTimeBorders;	// 56 = 0x38
    NSArray *_tabIds;	// 64 = 0x40
}

+ (Class)cellClass;	// IMP=0x00000001003b770c
@property(retain, nonatomic) NSArray *tabIds; // @synthesize tabIds=_tabIds;
@property(retain, nonatomic) NSArray *segmentTimeBorders; // @synthesize segmentTimeBorders=_segmentTimeBorders;
@property(nonatomic) double segmentHeight; // @synthesize segmentHeight=_segmentHeight;
@property(copy, nonatomic) UIColor *indicatorColor; // @synthesize indicatorColor=_indicatorColor;
@property(copy, nonatomic) NSDictionary *selectedSegmentAttrs; // @synthesize selectedSegmentAttrs=_selectedSegmentAttrs;
@property(copy, nonatomic) NSDictionary *segmentAttrs; // @synthesize segmentAttrs=_segmentAttrs;
@property(copy, nonatomic) NSArray *segmentActions; // @synthesize segmentActions=_segmentActions;
@property(copy, nonatomic) NSArray *segmentTitles; // @synthesize segmentTitles=_segmentTitles;
- (void).cxx_destruct;	// IMP=0x00000001003b73e8
- (id)initWithTileDTO:(id)arg1;	// IMP=0x00000001003b6658
- (double)heightForReferenceWidth:(double)arg1;	// IMP=0x00000001003b6648
- (void)pagingScrollViewDidEndDecelerating:(id)arg1;	// IMP=0x00000001003b65bc
- (void)pagingScrollViewDidScroll:(id)arg1;	// IMP=0x00000001003b6530
- (void)setSelectedSegmentIndex:(long long)arg1;	// IMP=0x00000001003b648c
- (long long)numberOfSegments;	// IMP=0x00000001003b6474

@end


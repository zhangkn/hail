//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEGradientSegmentedFloorViewModel.h"

@class NSArray, NSTimer;

@interface AEDealsSegmentedFloorViewModel : AEGradientSegmentedFloorViewModel
{
    NSArray *_timeBorders;	// 8 = 0x8
    NSTimer *_timer;	// 16 = 0x10
    long long _nextRoundIndex;	// 24 = 0x18
    NSArray *_nextRoundTitles;	// 32 = 0x20
    NSArray *_nextRoundActions;	// 40 = 0x28
}

+ (Class)cellClass;	// IMP=0x0000000100300aec
@property(retain, nonatomic) NSArray *nextRoundActions; // @synthesize nextRoundActions=_nextRoundActions;
@property(retain, nonatomic) NSArray *nextRoundTitles; // @synthesize nextRoundTitles=_nextRoundTitles;
@property(nonatomic) long long nextRoundIndex; // @synthesize nextRoundIndex=_nextRoundIndex;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSArray *timeBorders; // @synthesize timeBorders=_timeBorders;
- (void).cxx_destruct;	// IMP=0x0000000100300804
- (void)dealloc;	// IMP=0x000000010030065c
- (void)fire;	// IMP=0x0000000100300594
- (void)autoRefresh;	// IMP=0x00000001003003f0
- (id)initWithTileDTO:(id)arg1;	// IMP=0x00000001002ff774
- (void)setSelectedSegmentIndex:(long long)arg1;	// IMP=0x00000001002ff740

@end


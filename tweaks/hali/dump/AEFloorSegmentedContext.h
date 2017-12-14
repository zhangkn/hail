//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AEFloorSegmentedContext : NSObject
{
    long long _position;	// 8 = 0x8
    long long _selectedSegmentIndex;	// 16 = 0x10
    double _containerHeight;	// 24 = 0x18
    double _constantAreaContentHeight;	// 32 = 0x20
    double _segmentFloorHeight;	// 40 = 0x28
    double _pagingAreaContentHeight;	// 48 = 0x30
    struct UIEdgeInsets _segmentInsets;	// 56 = 0x38
}

@property(nonatomic) double pagingAreaContentHeight; // @synthesize pagingAreaContentHeight=_pagingAreaContentHeight;
@property(nonatomic) double segmentFloorHeight; // @synthesize segmentFloorHeight=_segmentFloorHeight;
@property(nonatomic) double constantAreaContentHeight; // @synthesize constantAreaContentHeight=_constantAreaContentHeight;
@property(nonatomic) struct UIEdgeInsets segmentInsets; // @synthesize segmentInsets=_segmentInsets;
@property(nonatomic) double containerHeight; // @synthesize containerHeight=_containerHeight;
@property(nonatomic) long long selectedSegmentIndex; // @synthesize selectedSegmentIndex=_selectedSegmentIndex;
@property(nonatomic) long long position; // @synthesize position=_position;
- (void)resetScrollPositionInScrollView:(id)arg1;	// IMP=0x0000000100a02888
- (void)updateScrollPositionInScrollView:(id)arg1;	// IMP=0x0000000100a026c4
- (id)init;	// IMP=0x0000000100a02668

@end


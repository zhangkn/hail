//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TileLayoutSpec.h"

@class NSArray, NSMutableArray;

@interface StackTileLayoutSpec : TileLayoutSpec
{
    NSArray *_arrangedSpecs;	// 8 = 0x8
    NSArray *_arrangedStackSpecs;	// 16 = 0x10
    NSArray *_arrangedDecorationSpecs;	// 24 = 0x18
    NSMutableArray *_columnHeights;	// 32 = 0x20
    NSMutableArray *_columnWidths;	// 40 = 0x28
    struct CGRect _initialFrame;	// 48 = 0x30
    struct UIEdgeInsets _margin;	// 80 = 0x50
    struct UIEdgeInsets _padding;	// 112 = 0x70
}

@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) struct UIEdgeInsets margin; // @synthesize margin=_margin;
@property(nonatomic) struct CGRect initialFrame; // @synthesize initialFrame=_initialFrame;
@property(retain, nonatomic) NSMutableArray *columnWidths; // @synthesize columnWidths=_columnWidths;
@property(retain, nonatomic) NSMutableArray *columnHeights; // @synthesize columnHeights=_columnHeights;
@property(retain, nonatomic) NSArray *arrangedDecorationSpecs; // @synthesize arrangedDecorationSpecs=_arrangedDecorationSpecs;
@property(retain, nonatomic) NSArray *arrangedStackSpecs; // @synthesize arrangedStackSpecs=_arrangedStackSpecs;
@property(retain, nonatomic) NSArray *arrangedSpecs; // @synthesize arrangedSpecs=_arrangedSpecs;
- (void).cxx_destruct;	// IMP=0x0000000101a417ec
- (void)updateLayoutWithContext:(id)arg1 update:(_Bool)arg2;	// IMP=0x0000000101a411a8
- (void)reOrderZIndexForStacks;	// IMP=0x0000000101a41038
- (void)disposeLayoutForStack:(id)arg1 context:(id)arg2;	// IMP=0x0000000101a40d18
- (id)layoutSpecForOuterStack:(id)arg1 context:(id)arg2;	// IMP=0x0000000101a40bdc
- (id)layoutSpecForInnerTile:(id)arg1 columnIndex:(long long)arg2 rowIndex:(long long)arg3 withReferenceFrame:(struct CGRect)arg4 context:(id)arg5;	// IMP=0x0000000101a40964
- (struct CGPoint)referenceOriginForTile:(id)arg1 withColumnIndex:(long long)arg2 rowIndex:(long long)arg3 previousTileMaxX:(double)arg4 columnWidth:(double)arg5 columnGap:(double)arg6 andContext:(id)arg7;	// IMP=0x0000000101a407c0
- (double)referenceWidthForStack:(id)arg1 withContext:(id)arg2;	// IMP=0x0000000101a404e8
- (struct CGPoint)referenceOriginForStack:(id)arg1 withContext:(id)arg2;	// IMP=0x0000000101a40420
- (void)prepareForLayoutForStack:(id)arg1 context:(id)arg2;	// IMP=0x0000000101a40238
- (void)layoutForTile:(id)arg1 context:(id)arg2;	// IMP=0x0000000101a3f790
- (double)longestColumnHeight;	// IMP=0x0000000101a3f5cc
- (unsigned long long)shortestColumnIndex;	// IMP=0x0000000101a3f404
- (long long)columnCountForStack:(id)arg1 withContext:(id)arg2;	// IMP=0x0000000101a3f260
- (id)columnHeightsForStack:(id)arg1 withContext:(id)arg2;	// IMP=0x0000000101a3f110
- (id)columnWidthsForStack:(id)arg1 withContext:(id)arg2;	// IMP=0x0000000101a3ece4
- (double)columnWidthSummaryToColumnAtIndex:(long long)arg1;	// IMP=0x0000000101a3eba0

@end


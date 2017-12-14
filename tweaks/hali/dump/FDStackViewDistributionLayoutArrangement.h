//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FDStackViewLayoutArrangement.h"

@class NSMapTable;

@interface FDStackViewDistributionLayoutArrangement : FDStackViewLayoutArrangement
{
    double _spacing;	// 8 = 0x8
    long long _distribution;	// 16 = 0x10
    NSMapTable *_spacingOrCenteringGuides;	// 24 = 0x18
    NSMapTable *_edgeToEdgeConstraints;	// 32 = 0x20
    NSMapTable *_relatedDimensionConstraints;	// 40 = 0x28
    NSMapTable *_hiddingDimensionConstraints;	// 48 = 0x30
}

@property(retain, nonatomic) NSMapTable *hiddingDimensionConstraints; // @synthesize hiddingDimensionConstraints=_hiddingDimensionConstraints;
@property(retain, nonatomic) NSMapTable *relatedDimensionConstraints; // @synthesize relatedDimensionConstraints=_relatedDimensionConstraints;
@property(retain, nonatomic) NSMapTable *edgeToEdgeConstraints; // @synthesize edgeToEdgeConstraints=_edgeToEdgeConstraints;
@property(retain, nonatomic) NSMapTable *spacingOrCenteringGuides; // @synthesize spacingOrCenteringGuides=_spacingOrCenteringGuides;
@property(nonatomic) long long distribution; // @synthesize distribution=_distribution;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
- (void).cxx_destruct;	// IMP=0x00000001012b13c0
- (void)updateCanvasConnectionConstraintsIfNecessary;	// IMP=0x00000001012b1254
- (long long)minAttributeForGapConstraint;	// IMP=0x00000001012b1228
- (long long)dimensionAttributeForCurrentAxis;	// IMP=0x00000001012b1208
- (long long)centerAttributeForCanvasConnections;	// IMP=0x00000001012b11e4
- (long long)minAttributeForCanvasConnections;	// IMP=0x00000001012b11b8
- (long long)layoutRelationForCanvasConnectionForAttribute:(long long)arg1;	// IMP=0x00000001012b11b0
- (void)removeDeprecatedConstraints;	// IMP=0x00000001012b0f08
- (void)resetAllConstraints;	// IMP=0x00000001012b0e84
- (void)resetCanvasConnectionsEffect;	// IMP=0x00000001012b0b4c
- (void)resetSpacingOrCenteringGuideRelatedDimensionConstraints;	// IMP=0x00000001012b07b8
- (void)resetSpacingOrCenteringGuides;	// IMP=0x00000001012b0330
- (void)resetGapEffect;	// IMP=0x00000001012b02fc
- (id)visiableItems;	// IMP=0x00000001012b0268
- (void)resetEquallyEffect;	// IMP=0x00000001012afe68
- (void)resetFillEffect;	// IMP=0x00000001012af794
- (long long)edgeToEdgeRelation;	// IMP=0x00000001012af770
- (void)setCanvas:(id)arg1;	// IMP=0x00000001012af73c
- (id)initWithItems:(id)arg1 onAxis:(long long)arg2;	// IMP=0x00000001012af630

@end


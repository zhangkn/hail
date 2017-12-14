//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface UIView (PureLayout)
+ (void)al_applyGlobalStateToConstraint:(id)arg1;	// IMP=0x000000010141d800
+ (void)autoSetIdentifier:(id)arg1 forConstraints:(CDUnknownBlockType)arg2;	// IMP=0x000000010141c028
+ (id)al_currentGlobalConstraintIdentifier;	// IMP=0x000000010141bfb8
+ (id)al_globalConstraintIdentifiers;	// IMP=0x000000010141bf6c
+ (void)autoSetPriority:(float)arg1 forConstraints:(CDUnknownBlockType)arg2;	// IMP=0x000000010141be64
+ (_Bool)al_isExecutingPriorityConstraintsBlock;	// IMP=0x000000010141be14
+ (float)al_currentGlobalConstraintPriority;	// IMP=0x000000010141bd80
+ (id)al_globalConstraintPriorities;	// IMP=0x000000010141bd34
+ (id)autoCreateConstraintsWithoutInstalling:(CDUnknownBlockType)arg1;	// IMP=0x000000010141bc30
+ (_Bool)al_preventAutomaticConstraintInstallation;	// IMP=0x000000010141bbe0
+ (id)al_currentArrayOfCreatedConstraints;	// IMP=0x000000010141bb8c
+ (id)al_arraysOfCreatedConstraints;	// IMP=0x000000010141bb40
+ (id)newAutoLayoutView;	// IMP=0x000000010141bac0
- (id)al_alignAttribute:(long long)arg1 toView:(id)arg2 forAxis:(long long)arg3;	// IMP=0x000000010141da10
- (id)al_commonSuperviewWithView:(id)arg1;	// IMP=0x000000010141d954
- (void)al_addConstraint:(id)arg1;	// IMP=0x000000010141d8a8
- (void)autoRemoveConstraintsAffectingViewAndSubviewsIncludingImplicitConstraints:(_Bool)arg1;	// IMP=0x000000010141d6c8
- (void)autoRemoveConstraintsAffectingViewAndSubviews;	// IMP=0x000000010141d6b8
- (void)autoRemoveConstraintsAffectingViewIncludingImplicitConstraints:(_Bool)arg1;	// IMP=0x000000010141d420
- (void)autoRemoveConstraintsAffectingView;	// IMP=0x000000010141d410
- (id)autoPinToBottomLayoutGuideOfViewController:(id)arg1 withInset:(double)arg2 relation:(long long)arg3;	// IMP=0x000000010141d264
- (id)autoPinToBottomLayoutGuideOfViewController:(id)arg1 withInset:(double)arg2;	// IMP=0x000000010141d254
- (id)autoPinToTopLayoutGuideOfViewController:(id)arg1 withInset:(double)arg2 relation:(long long)arg3;	// IMP=0x000000010141d0b8
- (id)autoPinToTopLayoutGuideOfViewController:(id)arg1 withInset:(double)arg2;	// IMP=0x000000010141d0a8
- (id)autoConstrainAttribute:(long long)arg1 toAttribute:(long long)arg2 ofView:(id)arg3 withMultiplier:(double)arg4 relation:(long long)arg5;	// IMP=0x000000010141cfb0
- (id)autoConstrainAttribute:(long long)arg1 toAttribute:(long long)arg2 ofView:(id)arg3 withMultiplier:(double)arg4;	// IMP=0x000000010141cfa0
- (id)autoConstrainAttribute:(long long)arg1 toAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4 relation:(long long)arg5;	// IMP=0x000000010141cea8
- (id)autoConstrainAttribute:(long long)arg1 toAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4;	// IMP=0x000000010141ce98
- (id)autoConstrainAttribute:(long long)arg1 toAttribute:(long long)arg2 ofView:(id)arg3;	// IMP=0x000000010141ce88
- (void)autoSetContentHuggingPriorityForAxis:(long long)arg1;	// IMP=0x000000010141cde8
- (void)autoSetContentCompressionResistancePriorityForAxis:(long long)arg1;	// IMP=0x000000010141cd48
- (id)autoSetDimension:(long long)arg1 toSize:(double)arg2 relation:(long long)arg3;	// IMP=0x000000010141cca0
- (id)autoSetDimension:(long long)arg1 toSize:(double)arg2;	// IMP=0x000000010141cc90
- (id)autoSetDimensionsToSize:(struct CGSize)arg1;	// IMP=0x000000010141cbb8
- (id)autoMatchDimension:(long long)arg1 toDimension:(long long)arg2 ofView:(id)arg3 withMultiplier:(double)arg4 relation:(long long)arg5;	// IMP=0x000000010141cbac
- (id)autoMatchDimension:(long long)arg1 toDimension:(long long)arg2 ofView:(id)arg3 withMultiplier:(double)arg4;	// IMP=0x000000010141cb9c
- (id)autoMatchDimension:(long long)arg1 toDimension:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4 relation:(long long)arg5;	// IMP=0x000000010141cb90
- (id)autoMatchDimension:(long long)arg1 toDimension:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4;	// IMP=0x000000010141cb80
- (id)autoMatchDimension:(long long)arg1 toDimension:(long long)arg2 ofView:(id)arg3;	// IMP=0x000000010141cb70
- (id)autoAlignAxis:(long long)arg1 toSameAxisOfView:(id)arg2 withOffset:(double)arg3;	// IMP=0x000000010141cb58
- (id)autoAlignAxis:(long long)arg1 toSameAxisOfView:(id)arg2;	// IMP=0x000000010141cb48
- (id)autoPinEdge:(long long)arg1 toEdge:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4 relation:(long long)arg5;	// IMP=0x000000010141cb3c
- (id)autoPinEdge:(long long)arg1 toEdge:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4;	// IMP=0x000000010141cb2c
- (id)autoPinEdge:(long long)arg1 toEdge:(long long)arg2 ofView:(id)arg3;	// IMP=0x000000010141cb1c
- (id)autoPinEdgesToSuperviewMarginsExcludingEdge:(long long)arg1;	// IMP=0x000000010141c9a8
- (id)autoPinEdgesToSuperviewMargins;	// IMP=0x000000010141c880
- (id)autoPinEdgeToSuperviewMargin:(long long)arg1 relation:(long long)arg2;	// IMP=0x000000010141c7a8
- (id)autoPinEdgeToSuperviewMargin:(long long)arg1;	// IMP=0x000000010141c798
- (id)autoPinEdgesToSuperviewEdgesWithInsets:(struct UIEdgeInsets)arg1 excludingEdge:(long long)arg2;	// IMP=0x000000010141c5f4
- (id)autoPinEdgesToSuperviewEdgesWithInsets:(struct UIEdgeInsets)arg1;	// IMP=0x000000010141c49c
- (id)autoPinEdgeToSuperviewEdge:(long long)arg1 withInset:(double)arg2 relation:(long long)arg3;	// IMP=0x000000010141c3cc
- (id)autoPinEdgeToSuperviewEdge:(long long)arg1 withInset:(double)arg2;	// IMP=0x000000010141c3bc
- (id)autoPinEdgeToSuperviewEdge:(long long)arg1;	// IMP=0x000000010141c3ac
- (id)autoAlignAxisToSuperviewMarginAxis:(long long)arg1;	// IMP=0x000000010141c30c
- (id)autoCenterInSuperviewMargins;	// IMP=0x000000010141c24c
- (id)autoAlignAxisToSuperviewAxis:(long long)arg1;	// IMP=0x000000010141c1c4
- (id)autoCenterInSuperview;	// IMP=0x000000010141c104
- (id)initForAutoLayout;	// IMP=0x000000010141bafc
@end

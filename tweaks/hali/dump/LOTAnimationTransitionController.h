//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerAnimatedTransitioning.h"

@class LOTAnimationView, NSBundle, NSString;

@interface LOTAnimationTransitionController : NSObject <UIViewControllerAnimatedTransitioning>
{
    LOTAnimationView *tranistionAnimationView_;	// 8 = 0x8
    NSString *fromLayerName_;	// 16 = 0x10
    NSString *toLayerName_;	// 24 = 0x18
    NSBundle *inBundle_;	// 32 = 0x20
    _Bool _applyTransform;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000101cece80
- (void)animateTransition:(id)arg1;	// IMP=0x0000000101cec81c
- (double)transitionDuration:(id)arg1;	// IMP=0x0000000101cec804
- (id)initWithAnimationNamed:(id)arg1 fromLayerNamed:(id)arg2 toLayerNamed:(id)arg3 applyAnimationTransform:(_Bool)arg4 inBundle:(id)arg5;	// IMP=0x0000000101cec6b4
- (id)initWithAnimationNamed:(id)arg1 fromLayerNamed:(id)arg2 toLayerNamed:(id)arg3 applyAnimationTransform:(_Bool)arg4;	// IMP=0x0000000101cec5dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CAAnimationDelegate.h"
#import "UIViewControllerAnimatedTransitioning.h"

@class NSString, UIImageView, UIView;

@interface AEProductDescriptionPopAnimation : NSObject <CAAnimationDelegate, UIViewControllerAnimatedTransitioning>
{
    UIImageView *_fakeBarView;	// 8 = 0x8
    UIView *_navigationBarView;	// 16 = 0x10
    id <UIViewControllerContextTransitioning> _transitionContext;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001005971b4
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x0000000100597154
- (id)getImageFromView:(id)arg1;	// IMP=0x00000001005970a4
- (double)transitionDuration:(id)arg1;	// IMP=0x0000000100597098
- (void)animateTransition:(id)arg1;	// IMP=0x000000010059690c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


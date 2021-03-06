//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class NSMutableArray, NSObject<OS_dispatch_semaphore>, UIView;

@interface AELikeAnimationView : UIImageView
{
    NSMutableArray *_animationIVs;	// 8 = 0x8
    NSObject<OS_dispatch_semaphore> *semaphore;	// 16 = 0x10
    _Bool _frameHasUpdate;	// 24 = 0x18
    UIView *_aniShowView;	// 32 = 0x20
}

@property(readonly, nonatomic) __weak UIView *aniShowView; // @synthesize aniShowView=_aniShowView;
- (void).cxx_destruct;	// IMP=0x000000010082fafc
- (void)likeAnimation;	// IMP=0x000000010082f034
- (void)stopAnimation;	// IMP=0x000000010082efbc
- (void)startAnimation;	// IMP=0x000000010082ed64
- (void)layoutSubviews;	// IMP=0x000000010082ecd4
- (id)initWithAniShowView:(id)arg1;	// IMP=0x000000010082eba8
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010082eb98
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010082eb88

@end


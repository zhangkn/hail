//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTileCell.h"

#import "CAAnimationDelegate.h"

@class AERussiaMallTitleTile, NSString, UIImageView, UILabel;

@interface AERussiaMallTitleTileCell : AEBaseTileCell <CAAnimationDelegate>
{
    UIImageView *_tmall;	// 8 = 0x8
    UILabel *_benefit;	// 16 = 0x10
    UILabel *_animationLabel;	// 24 = 0x18
    long long _tickTockCount;	// 32 = 0x20
    long long _benefitIndex;	// 40 = 0x28
    AERussiaMallTitleTile *_tile;	// 48 = 0x30
    long long _animationHeight;	// 56 = 0x38
}

@property(nonatomic) long long animationHeight; // @synthesize animationHeight=_animationHeight;
@property(retain, nonatomic) AERussiaMallTitleTile *tile; // @synthesize tile=_tile;
@property(nonatomic) long long benefitIndex; // @synthesize benefitIndex=_benefitIndex;
@property(nonatomic) long long tickTockCount; // @synthesize tickTockCount=_tickTockCount;
@property(retain, nonatomic) UILabel *animationLabel; // @synthesize animationLabel=_animationLabel;
@property(retain, nonatomic) UILabel *benefit; // @synthesize benefit=_benefit;
@property(retain, nonatomic) UIImageView *tmall; // @synthesize tmall=_tmall;
- (void).cxx_destruct;	// IMP=0x0000000100407528
- (void)prepareForReuse;	// IMP=0x0000000100407320
- (void)dealloc;	// IMP=0x00000001004072a4
- (void)resetAnimationState;	// IMP=0x0000000100406f18
- (void)tickTock;	// IMP=0x00000001004061c0
- (void)prepareForAnimation;	// IMP=0x0000000100406114
- (void)renderWithTile:(id)arg1;	// IMP=0x0000000100405884
- (void)setupUI;	// IMP=0x0000000100404abc
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100404a50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


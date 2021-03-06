//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class LOTAnimationView, LOTComposition, NSMutableDictionary;

@interface LOTAnimatedControl : UIControl
{
    unsigned long long _priorState;	// 8 = 0x8
    NSMutableDictionary *_layerMap;	// 16 = 0x10
    LOTAnimationView *_animationView;	// 24 = 0x18
}

@property(readonly, nonatomic) LOTAnimationView *animationView; // @synthesize animationView=_animationView;
- (void).cxx_destruct;	// IMP=0x0000000101ceb3fc
- (void)checkStateChangedAndUpdate:(_Bool)arg1;	// IMP=0x0000000101ceb1cc
- (_Bool)isAccessibilityElement;	// IMP=0x0000000101ceb1c4
- (unsigned long long)accessibilityTraits;	// IMP=0x0000000101ceb1b4
- (void)layoutSubviews;	// IMP=0x0000000101ceb148
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000101ceb130
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000101ceb07c
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000101ceafc8
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000101ceaf14
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000101ceae60
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000101ceade8
- (void)setSelected:(_Bool)arg1;	// IMP=0x0000000101cead70
- (void)setEnabled:(_Bool)arg1;	// IMP=0x0000000101ceacf8
- (void)setLayerName:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000101ceac40
@property(retain, nonatomic) LOTComposition *animationComp;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000101ceaaf4

@end


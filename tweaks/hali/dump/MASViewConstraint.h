//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MASConstraint.h"

#import "NSCopying.h"

@class MASLayoutConstraint, MASViewAttribute, UIView;

@interface MASViewConstraint : MASConstraint <NSCopying>
{
    _Bool _hasLayoutRelation;	// 8 = 0x8
    _Bool _useAnimator;	// 9 = 0x9
    float _layoutPriority;	// 12 = 0xc
    MASViewAttribute *_firstViewAttribute;	// 16 = 0x10
    MASViewAttribute *_secondViewAttribute;	// 24 = 0x18
    UIView *_installedView;	// 32 = 0x20
    MASLayoutConstraint *_layoutConstraint;	// 40 = 0x28
    long long _layoutRelation;	// 48 = 0x30
    double _layoutMultiplier;	// 56 = 0x38
    double _layoutConstant;	// 64 = 0x40
    id _mas_key;	// 72 = 0x48
}

+ (id)installedConstraintsForView:(id)arg1;	// IMP=0x000000010133d5c4
@property(nonatomic) _Bool useAnimator; // @synthesize useAnimator=_useAnimator;
@property(retain, nonatomic) id mas_key; // @synthesize mas_key=_mas_key;
@property(nonatomic) _Bool hasLayoutRelation; // @synthesize hasLayoutRelation=_hasLayoutRelation;
@property(nonatomic) double layoutConstant; // @synthesize layoutConstant=_layoutConstant;
@property(nonatomic) double layoutMultiplier; // @synthesize layoutMultiplier=_layoutMultiplier;
@property(nonatomic) float layoutPriority; // @synthesize layoutPriority=_layoutPriority;
@property(nonatomic) long long layoutRelation; // @synthesize layoutRelation=_layoutRelation;
@property(nonatomic) __weak MASLayoutConstraint *layoutConstraint; // @synthesize layoutConstraint=_layoutConstraint;
@property(nonatomic) __weak UIView *installedView; // @synthesize installedView=_installedView;
@property(retain, nonatomic) MASViewAttribute *secondViewAttribute; // @synthesize secondViewAttribute=_secondViewAttribute;
@property(readonly, nonatomic) MASViewAttribute *firstViewAttribute; // @synthesize firstViewAttribute=_firstViewAttribute;
- (void).cxx_destruct;	// IMP=0x000000010133f150
- (void)uninstall;	// IMP=0x000000010133eecc
- (id)layoutConstraintSimilarTo:(id)arg1;	// IMP=0x000000010133eb20
- (void)install;	// IMP=0x000000010133e51c
- (void)deactivate;	// IMP=0x000000010133e408
- (void)activate;	// IMP=0x000000010133e2a8
- (void)setCenterOffset:(struct CGPoint)arg1;	// IMP=0x000000010133e1ec
- (void)setSizeOffset:(struct CGSize)arg1;	// IMP=0x000000010133e130
- (void)setOffset:(double)arg1;	// IMP=0x000000010133e120
- (void)setInsets:(struct UIEdgeInsets)arg1;	// IMP=0x000000010133e008
- (CDUnknownBlockType)key;	// IMP=0x000000010133df50
- (id)addConstraintWithLayoutAttribute:(long long)arg1;	// IMP=0x000000010133dedc
- (id)and;	// IMP=0x000000010133ded8
- (id)with;	// IMP=0x000000010133ded4
- (CDUnknownBlockType)equalToWithRelation;	// IMP=0x000000010133db78
- (CDUnknownBlockType)priority;	// IMP=0x000000010133dac8
- (CDUnknownBlockType)dividedBy;	// IMP=0x000000010133da10
- (CDUnknownBlockType)multipliedBy;	// IMP=0x000000010133d960
- (_Bool)hasBeenInstalled;	// IMP=0x000000010133d780
- (_Bool)isActive;	// IMP=0x000000010133d708
- (_Bool)supportsActiveProperty;	// IMP=0x000000010133d6a8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010133d458
- (id)initWithFirstViewAttribute:(id)arg1;	// IMP=0x000000010133d378

@end

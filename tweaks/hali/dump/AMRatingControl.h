//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class UIColor, UIImage;

@interface AMRatingControl : UIControl
{
    _Bool _respondsToTranslatesAutoresizingMaskIntoConstraints;	// 8 = 0x8
    UIImage *_emptyImage;	// 16 = 0x10
    UIImage *_solidImage;	// 24 = 0x18
    UIColor *_emptyColor;	// 32 = 0x20
    UIColor *_solidColor;	// 40 = 0x28
    long long _maxRating;	// 48 = 0x30
    long long _rating;	// 56 = 0x38
    unsigned long long _starFontSize;	// 64 = 0x40
    unsigned long long _starWidthAndHeight;	// 72 = 0x48
    unsigned long long _starSpacing;	// 80 = 0x50
    CDUnknownBlockType _editingChangedBlock;	// 88 = 0x58
    CDUnknownBlockType _editingDidEndBlock;	// 96 = 0x60
}

@property(copy, nonatomic) CDUnknownBlockType editingDidEndBlock; // @synthesize editingDidEndBlock=_editingDidEndBlock;
@property(copy, nonatomic) CDUnknownBlockType editingChangedBlock; // @synthesize editingChangedBlock=_editingChangedBlock;
@property(nonatomic) unsigned long long starSpacing; // @synthesize starSpacing=_starSpacing;
@property(nonatomic) unsigned long long starWidthAndHeight; // @synthesize starWidthAndHeight=_starWidthAndHeight;
@property(nonatomic) unsigned long long starFontSize; // @synthesize starFontSize=_starFontSize;
@property(nonatomic) long long rating; // @synthesize rating=_rating;
@property(nonatomic) long long maxRating; // @synthesize maxRating=_maxRating;
- (void).cxx_destruct;	// IMP=0x00000001008c16bc
- (void)handleTouch:(id)arg1;	// IMP=0x00000001008c13d4
- (void)adjustFrame;	// IMP=0x00000001008c1304
- (id)initWithLocation:(struct CGPoint)arg1 emptyImage:(id)arg2 solidImage:(id)arg3 emptyColor:(id)arg4 solidColor:(id)arg5 andMaxRating:(long long)arg6;	// IMP=0x00000001008c1210
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001008c11a4
- (void)initializeWithEmptyImage:(id)arg1 solidImage:(id)arg2 emptyColor:(id)arg3 solidColor:(id)arg4 andMaxRating:(long long)arg5;	// IMP=0x00000001008c0fe4
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000001008c0f5c
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000001008c0f14
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000001008c0ecc
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00000001008c0c68
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000001008c0c2c
- (void)dealloc;	// IMP=0x00000001008c0b98
- (id)initWithLocation:(struct CGPoint)arg1 emptyColor:(id)arg2 solidColor:(id)arg3 andMaxRating:(long long)arg4;	// IMP=0x00000001008c0b14
- (id)initWithLocation:(struct CGPoint)arg1 emptyImage:(id)arg2 solidImage:(id)arg3 andMaxRating:(long long)arg4;	// IMP=0x00000001008c0a90
- (id)initWithLocation:(struct CGPoint)arg1 andMaxRating:(long long)arg2;	// IMP=0x00000001008c0a6c

@end


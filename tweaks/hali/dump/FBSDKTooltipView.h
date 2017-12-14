//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSString, UIColor, UILabel, UITapGestureRecognizer;

@interface FBSDKTooltipView : UIView
{
    struct CGPoint _positionInView;	// 8 = 0x8
    double _displayTime;	// 24 = 0x18
    double _minimumDisplayDuration;	// 32 = 0x20
    UILabel *_textLabel;	// 40 = 0x28
    UITapGestureRecognizer *_insideTapGestureRecognizer;	// 48 = 0x30
    double _leftWidth;	// 56 = 0x38
    double _rightWidth;	// 64 = 0x40
    double _arrowMidpoint;	// 72 = 0x48
    _Bool _pointingUp;	// 80 = 0x50
    _Bool _isFadingOut;	// 81 = 0x51
    UIColor *_innerStrokeColor;	// 88 = 0x58
    double _arrowHeight;	// 96 = 0x60
    double _textPadding;	// 104 = 0x68
    double _maximumTextWidth;	// 112 = 0x70
    double _verticalTextOffset;	// 120 = 0x78
    double _verticalCrossOffset;	// 128 = 0x80
    unsigned long long _colorStyle;	// 136 = 0x88
    NSArray *_gradientColors;	// 144 = 0x90
    UIColor *_crossCloseGlyphColor;	// 152 = 0x98
    double _displayDuration;	// 160 = 0xa0
    NSString *_message;	// 168 = 0xa8
    NSString *_tagline;	// 176 = 0xb0
}

@property(copy, nonatomic) NSString *tagline; // @synthesize tagline=_tagline;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) double displayDuration; // @synthesize displayDuration=_displayDuration;
- (void).cxx_destruct;	// IMP=0x00000001012828e8
- (void)cancelAllScheduledFadeOutMethods;	// IMP=0x0000000101282834
- (void)scheduleFadeoutRespectingMinimumDisplayDuration;	// IMP=0x00000001012827bc
- (void)scheduleAutomaticFadeout;	// IMP=0x00000001012826d4
- (void)setMessage:(id)arg1 tagline:(id)arg2;	// IMP=0x00000001012823d4
- (struct CGRect)layoutSubviewsAndDetermineFrame;	// IMP=0x00000001012820a4
- (void)layoutSubviews;	// IMP=0x0000000101282050
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000101281454
- (void)onTapInTooltip:(id)arg1;	// IMP=0x0000000101281408
- (void)animateFadeOutWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001012812c8
- (void)animateFadeIn;	// IMP=0x0000000101280bec
@property(nonatomic) unsigned long long colorStyle;
- (void)dismiss;	// IMP=0x00000001012807ec
- (void)presentInView:(id)arg1 withArrowPosition:(struct CGPoint)arg2 direction:(unsigned long long)arg3;	// IMP=0x00000001012806b8
- (void)presentFromView:(id)arg1;	// IMP=0x00000001012804e8
- (void)dealloc;	// IMP=0x0000000101280328
- (id)initWithTagline:(id)arg1 message:(id)arg2 colorStyle:(unsigned long long)arg3;	// IMP=0x000000010127fe54

@end


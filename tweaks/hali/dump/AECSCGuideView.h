//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AEPopoverBackgroundView, UIImageView, UILabel;

@interface AECSCGuideView : UIView
{
    UIImageView *_startImageView;	// 8 = 0x8
    UIImageView *_arrowImageView;	// 16 = 0x10
    UIImageView *_endImageView;	// 24 = 0x18
    UIImageView *_fingerImageView;	// 32 = 0x20
    UILabel *_popoverLabel;	// 40 = 0x28
    AEPopoverBackgroundView *_popoverBackgroundView;	// 48 = 0x30
    long long _repeatCount;	// 56 = 0x38
}

@property(nonatomic) long long repeatCount; // @synthesize repeatCount=_repeatCount;
@property(retain, nonatomic) AEPopoverBackgroundView *popoverBackgroundView; // @synthesize popoverBackgroundView=_popoverBackgroundView;
@property(retain, nonatomic) UILabel *popoverLabel; // @synthesize popoverLabel=_popoverLabel;
@property(retain, nonatomic) UIImageView *fingerImageView; // @synthesize fingerImageView=_fingerImageView;
@property(retain, nonatomic) UIImageView *endImageView; // @synthesize endImageView=_endImageView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UIImageView *startImageView; // @synthesize startImageView=_startImageView;
- (void).cxx_destruct;	// IMP=0x0000000100ac3958
- (id)commonInitImageView:(id)arg1;	// IMP=0x0000000100ac3674
- (void)stopAnimation;	// IMP=0x0000000100ac3664
- (void)startAnimation:(long long)arg1;	// IMP=0x0000000100ac2e0c
- (void)startAnimation;	// IMP=0x0000000100ac2dd0
- (void)swipeHandlerRight:(id)arg1;	// IMP=0x0000000100ac2dc4
- (void)layoutSubviews;	// IMP=0x0000000100ac2c84
- (void)willMoveToSuperview:(id)arg1;	// IMP=0x0000000100ac2c2c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100ac1b94

@end


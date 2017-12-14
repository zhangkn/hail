//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor, UIView;

@interface AEPopViewInitConfig : NSObject
{
    _Bool _needForHidden;	// 8 = 0x8
    _Bool _withBackground;	// 9 = 0x9
    _Bool _hideWithNoAnimate;	// 10 = 0xa
    _Bool _needAutoLayoutMainSize;	// 11 = 0xb
    long long _mode;	// 16 = 0x10
    UIView *_customeCloseButton;	// 24 = 0x18
    UIView *_showInView;	// 32 = 0x20
    UIColor *_backgroundColor;	// 40 = 0x28
    long long _closeTimer;	// 48 = 0x30
    struct CGPoint _point;	// 56 = 0x38
}

@property(nonatomic) long long closeTimer; // @synthesize closeTimer=_closeTimer;
@property(nonatomic) _Bool needAutoLayoutMainSize; // @synthesize needAutoLayoutMainSize=_needAutoLayoutMainSize;
@property(nonatomic) _Bool hideWithNoAnimate; // @synthesize hideWithNoAnimate=_hideWithNoAnimate;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIView *showInView; // @synthesize showInView=_showInView;
@property(retain, nonatomic) UIView *customeCloseButton; // @synthesize customeCloseButton=_customeCloseButton;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) struct CGPoint point; // @synthesize point=_point;
@property(nonatomic) _Bool withBackground; // @synthesize withBackground=_withBackground;
@property(nonatomic) _Bool needForHidden; // @synthesize needForHidden=_needForHidden;
- (void).cxx_destruct;	// IMP=0x0000000100841790

@end

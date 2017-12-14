//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, UIView;

@interface AEUGCMaskController : NSObject <UIGestureRecognizerDelegate>
{
    _Bool _useDefatultAnimationIfNeed;	// 8 = 0x8
    _Bool _contentViewCenter;	// 9 = 0x9
    _Bool _isShowAnimated;	// 10 = 0xa
    id <AEUGCMaskControllerDelegate> _delegate;	// 16 = 0x10
    UIView *_maskView;	// 24 = 0x18
    UIView *_contentView;	// 32 = 0x20
    double _animationDuration;	// 40 = 0x28
    double _delayTime;	// 48 = 0x30
    unsigned long long _type;	// 56 = 0x38
    CDUnknownBlockType _showAnimationState;	// 64 = 0x40
    CDUnknownBlockType _closeAnimationState;	// 72 = 0x48
}

@property(copy, nonatomic) CDUnknownBlockType closeAnimationState; // @synthesize closeAnimationState=_closeAnimationState;
@property(copy, nonatomic) CDUnknownBlockType showAnimationState; // @synthesize showAnimationState=_showAnimationState;
@property(nonatomic) _Bool isShowAnimated; // @synthesize isShowAnimated=_isShowAnimated;
@property(nonatomic) _Bool contentViewCenter; // @synthesize contentViewCenter=_contentViewCenter;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) double delayTime; // @synthesize delayTime=_delayTime;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) _Bool useDefatultAnimationIfNeed; // @synthesize useDefatultAnimationIfNeed=_useDefatultAnimationIfNeed;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(nonatomic) __weak id <AEUGCMaskControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100787250
- (void)orientationDidChange:(id)arg1;	// IMP=0x0000000100786f40
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0000000100786eb4
- (void)dismissWithAnimated:(CDUnknownBlockType)arg1;	// IMP=0x0000000100786a94
- (void)showWithAnimated:(CDUnknownBlockType)arg1;	// IMP=0x000000010078656c
- (void)dismissWithAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010078627c
- (void)showWithAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100785f4c
- (void)dismiss;	// IMP=0x0000000100785f30
- (id)initMaskController:(unsigned long long)arg1 withContentView:(id)arg2 contentCenter:(_Bool)arg3 delayTime:(double)arg4;	// IMP=0x0000000100785b48
- (id)initWithType:(unsigned long long)arg1 withContentView:(id)arg2 contentCenter:(_Bool)arg3;	// IMP=0x0000000100785b38
- (void)dealloc;	// IMP=0x0000000100785aac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

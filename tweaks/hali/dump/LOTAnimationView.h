//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CAAnimationDelegate.h"

@class LOTComposition, LOTCompositionContainer, NSBundle, NSNumber, NSString;

@interface LOTAnimationView : UIView <CAAnimationDelegate>
{
    LOTCompositionContainer *_compContainer;	// 8 = 0x8
    NSNumber *_playRangeStartFrame;	// 16 = 0x10
    NSNumber *_playRangeEndFrame;	// 24 = 0x18
    double _playRangeStartProgress;	// 32 = 0x20
    double _playRangeEndProgress;	// 40 = 0x28
    NSBundle *_bundle;	// 48 = 0x30
    double _animationProgress;	// 56 = 0x38
    _Bool _isAnimationPlaying;	// 64 = 0x40
    _Bool _loopAnimation;	// 65 = 0x41
    _Bool _autoReverseAnimation;	// 66 = 0x42
    _Bool _cacheEnable;	// 67 = 0x43
    double _animationSpeed;	// 72 = 0x48
    CDUnknownBlockType _completionBlock;	// 80 = 0x50
    LOTComposition *_sceneModel;	// 88 = 0x58
}

+ (id)animationWithFilePath:(id)arg1;	// IMP=0x0000000101ced180
+ (id)animationFromJSON:(id)arg1 inBundle:(id)arg2;	// IMP=0x0000000101ced0c8
+ (id)animationFromJSON:(id)arg1;	// IMP=0x0000000101ced034
+ (id)animationNamed:(id)arg1 inBundle:(id)arg2;	// IMP=0x0000000101cecf7c
+ (id)animationNamed:(id)arg1;	// IMP=0x0000000101cecee8
@property(retain, nonatomic) LOTComposition *sceneModel; // @synthesize sceneModel=_sceneModel;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) _Bool cacheEnable; // @synthesize cacheEnable=_cacheEnable;
@property(nonatomic) double animationSpeed; // @synthesize animationSpeed=_animationSpeed;
@property(nonatomic) _Bool autoReverseAnimation; // @synthesize autoReverseAnimation=_autoReverseAnimation;
@property(nonatomic) _Bool loopAnimation; // @synthesize loopAnimation=_loopAnimation;
@property(readonly, nonatomic) _Bool isAnimationPlaying; // @synthesize isAnimationPlaying=_isAnimationPlaying;
- (void).cxx_destruct;	// IMP=0x0000000101cefd40
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x0000000101cefad0
- (void)_layout;	// IMP=0x0000000101cef680
- (void)layoutSubviews;	// IMP=0x0000000101cef630
- (void)setContentMode:(long long)arg1;	// IMP=0x0000000101cef5e0
- (void)didMoveToSuperview;	// IMP=0x0000000101cef568
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000101cef520
@property(nonatomic) double animationProgress;
@property(readonly, nonatomic) double animationDuration;
- (id)compositionLayers;	// IMP=0x0000000101cef2e8
- (id)layerForKey:(id)arg1;	// IMP=0x0000000101cef258
- (void)logHierarchyKeypaths;	// IMP=0x0000000101cef23c
- (void)setValue:(id)arg1 forKeypath:(id)arg2 atFrame:(id)arg3;	// IMP=0x0000000101cef11c
- (struct CGRect)convertRect:(struct CGRect)arg1 toLayerNamed:(id)arg2;	// IMP=0x0000000101ceefdc
- (void)addSubview:(id)arg1 toLayerNamed:(id)arg2 applyTransform:(_Bool)arg3;	// IMP=0x0000000101ceee58
- (void)setProgressWithFrame:(id)arg1 callCompletionIfNecessary:(_Bool)arg2;	// IMP=0x0000000101cee978
- (void)setProgressWithFrame:(id)arg1;	// IMP=0x0000000101cee968
- (void)pause;	// IMP=0x0000000101cee81c
- (void)stop;	// IMP=0x0000000101cee7a4
- (void)playFromFrame:(id)arg1 toFrame:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000101cee2dc
- (void)playToFrame:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000101cee238
- (void)playFromProgress:(double)arg1 toProgress:(double)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000101cee110
- (void)playToProgress:(double)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000101cee0fc
- (void)playWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000101cee00c
- (void)play;	// IMP=0x0000000101cedf5c
- (void)_callCompletionIfNecessary:(_Bool)arg1;	// IMP=0x0000000101cedeb4
- (_Bool)_isSpeedNegative;	// IMP=0x0000000101cede9c
- (id)_frameForProgress:(double)arg1;	// IMP=0x0000000101cedd60
- (double)_progressForFrame:(id)arg1;	// IMP=0x0000000101cedc54
- (void)_removeCurrentAnimationIfNecessary;	// IMP=0x0000000101cedc30
- (void)_restoreState;	// IMP=0x0000000101cedaec
- (void)_setupWithSceneModel:(id)arg1;	// IMP=0x0000000101ced930
- (void)_commonInit;	// IMP=0x0000000101ced8a0
- (void)_initializeAnimationContainer;	// IMP=0x0000000101ced890
- (id)init;	// IMP=0x0000000101ced838
- (id)initWithModel:(id)arg1 inBundle:(id)arg2;	// IMP=0x0000000101ced750
- (id)initWithContentsOfURL:(id)arg1;	// IMP=0x0000000101ced228

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


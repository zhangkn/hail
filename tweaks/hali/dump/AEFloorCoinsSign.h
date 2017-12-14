//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETileAdapterFloor.h"

#import "AESessionUserChangeTask.h"
#import "CAAnimationDelegate.h"

@class AEAliexpressStarLayer, AECoinIconView, CAGradientLayer, CAShapeLayer, NSString, UIButton, UILabel;

@interface AEFloorCoinsSign : AETileAdapterFloor <AESessionUserChangeTask, CAAnimationDelegate>
{
    _Bool _canBreath;	// 8 = 0x8
    AECoinIconView *_coinsIcon;	// 16 = 0x10
    UILabel *_coinsCount;	// 24 = 0x18
    UILabel *_coinsPrompt;	// 32 = 0x20
    UILabel *_wonCoinsPrompt;	// 40 = 0x28
    UIButton *_getCoins;	// 48 = 0x30
    NSString *_signedCoinsUrl;	// 56 = 0x38
    NSString *_signAction;	// 64 = 0x40
    NSString *_signedAction;	// 72 = 0x48
    CAGradientLayer *_gradientLayer;	// 80 = 0x50
    AEAliexpressStarLayer *_star1;	// 88 = 0x58
    AEAliexpressStarLayer *_star2;	// 96 = 0x60
    AEAliexpressStarLayer *_animatedComet;	// 104 = 0x68
    CAShapeLayer *_animatedCometTail;	// 112 = 0x70
}

+ (Class)modelClass;	// IMP=0x0000000100324ccc
+ (id)identifier;	// IMP=0x0000000100324ca0
@property(retain, nonatomic) CAShapeLayer *animatedCometTail; // @synthesize animatedCometTail=_animatedCometTail;
@property(retain, nonatomic) AEAliexpressStarLayer *animatedComet; // @synthesize animatedComet=_animatedComet;
@property(retain, nonatomic) AEAliexpressStarLayer *star2; // @synthesize star2=_star2;
@property(retain, nonatomic) AEAliexpressStarLayer *star1; // @synthesize star1=_star1;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(nonatomic) _Bool canBreath; // @synthesize canBreath=_canBreath;
@property(copy, nonatomic) NSString *signedAction; // @synthesize signedAction=_signedAction;
@property(copy, nonatomic) NSString *signAction; // @synthesize signAction=_signAction;
@property(copy, nonatomic) NSString *signedCoinsUrl; // @synthesize signedCoinsUrl=_signedCoinsUrl;
@property(retain, nonatomic) UIButton *getCoins; // @synthesize getCoins=_getCoins;
@property(retain, nonatomic) UILabel *wonCoinsPrompt; // @synthesize wonCoinsPrompt=_wonCoinsPrompt;
@property(retain, nonatomic) UILabel *coinsPrompt; // @synthesize coinsPrompt=_coinsPrompt;
@property(retain, nonatomic) UILabel *coinsCount; // @synthesize coinsCount=_coinsCount;
@property(retain, nonatomic) AECoinIconView *coinsIcon; // @synthesize coinsIcon=_coinsIcon;
- (void).cxx_destruct;	// IMP=0x0000000100329104
- (void)doBreathAnimation;	// IMP=0x0000000100328c38
- (void)removeGetCoinsAnimations;	// IMP=0x0000000100328bec
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x0000000100328980
- (double)yPosWithXPos:(double)arg1 withXOffset:(double)arg2 yOffset:(double)arg3 andA:(double)arg4 c:(double)arg5;	// IMP=0x0000000100328968
- (void)doGetedCoinsAnimation;	// IMP=0x0000000100327a20
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x0000000100327660
- (void)refreshCoins:(id)arg1;	// IMP=0x0000000100327488
- (void)refreshSignedStatus:(id)arg1;	// IMP=0x00000001003273a8
- (void)webviewWillDisapper:(id)arg1;	// IMP=0x0000000100327358
- (void)execute:(unsigned long long)arg1;	// IMP=0x000000010032734c
- (void)applicationStatusChanged:(id)arg1;	// IMP=0x0000000100327270
- (void)refresh;	// IMP=0x0000000100327104
- (void)touchedgetCoinsButton;	// IMP=0x0000000100326eec
- (void)resetGetCoinsButton;	// IMP=0x0000000100326d94
- (void)highlightGetCoinsButton;	// IMP=0x0000000100326c20
- (void)layoutSubviews;	// IMP=0x0000000100326a2c
- (void)configConstraints;	// IMP=0x00000001003258e8
- (void)configComponents;	// IMP=0x0000000100324f40
- (void)dealloc;	// IMP=0x0000000100324ec4
- (id)initFloor;	// IMP=0x0000000100324ce0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


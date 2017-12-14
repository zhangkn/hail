//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBSDKButton.h"

#import "FBSDKButtonImpressionTracking.h"
#import "FBSDKLiking.h"

@class FBSDKLikeActionController, NSString;

@interface FBSDKLikeButton : FBSDKButton <FBSDKButtonImpressionTracking, FBSDKLiking>
{
    _Bool _isExplicitlyDisabled;	// 8 = 0x8
    FBSDKLikeActionController *_likeActionController;	// 16 = 0x10
    NSString *_objectID;	// 24 = 0x18
    unsigned long long _objectType;	// 32 = 0x20
    _Bool _soundEnabled;	// 40 = 0x28
}

+ (void)initialize;	// IMP=0x000000010128f390
@property(nonatomic, getter=isSoundEnabled) _Bool soundEnabled; // @synthesize soundEnabled=_soundEnabled;
- (void).cxx_destruct;	// IMP=0x00000001012905c0
- (void)_setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000001012900b4
- (void)_setLikeActionController:(id)arg1;	// IMP=0x000000010129003c
- (void)_resetLikeActionController;	// IMP=0x0000000101290004
- (void)_likeActionControllerDidUpdateNotification:(id)arg1;	// IMP=0x000000010128fea4
- (void)_likeActionControllerDidResetNotification:(id)arg1;	// IMP=0x000000010128fe6c
- (void)_likeActionControllerDidDisableNotification:(id)arg1;	// IMP=0x000000010128fe60
- (void)_like:(id)arg1;	// IMP=0x000000010128fdc0
- (void)_handleTap:(id)arg1;	// IMP=0x000000010128fcbc
- (void)_ensureLikeActionController:(_Bool)arg1;	// IMP=0x000000010128fbe0
- (_Bool)isImplicitlyDisabled;	// IMP=0x000000010128fb80
- (void)configureButton;	// IMP=0x000000010128f8a8
- (id)impressionTrackingIdentifier;	// IMP=0x000000010128f89c
- (id)impressionTrackingEventName;	// IMP=0x000000010128f88c
- (id)analyticsParameters;	// IMP=0x000000010128f5e4
- (void)layoutSubviews;	// IMP=0x000000010128f590
@property(nonatomic) unsigned long long objectType;
@property(copy, nonatomic) NSString *objectID;
@property(retain, nonatomic) FBSDKLikeActionController *likeActionController;
- (void)dealloc;	// IMP=0x000000010128f3e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


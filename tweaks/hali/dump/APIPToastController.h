//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APIPToastView;

@interface APIPToastController : NSObject
{
    APIPToastView *_toastView;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00000001010c8124
@property(retain) APIPToastView *toastView; // @synthesize toastView=_toastView;
- (void).cxx_destruct;	// IMP=0x00000001010c9188
- (void)cleanCurrentToast;	// IMP=0x00000001010c8fb8
- (void)showToast:(id)arg1 withTimeDuration:(long long)arg2;	// IMP=0x00000001010c8c18
- (void)initNetworkLoading;	// IMP=0x00000001010c8898
- (void)initSplashLoading;	// IMP=0x00000001010c85d8
- (void)buildToast:(id)arg1;	// IMP=0x00000001010c83b4
- (_Bool)updateToast:(id)arg1;	// IMP=0x00000001010c8208
- (id)init;	// IMP=0x00000001010c81a4

@end


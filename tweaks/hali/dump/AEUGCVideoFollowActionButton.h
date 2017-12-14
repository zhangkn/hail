//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIActivityIndicatorView;

@interface AEUGCVideoFollowActionButton : UIButton
{
    long long _followUIType;	// 8 = 0x8
    long long _followStatus;	// 16 = 0x10
    long long _followType;	// 24 = 0x18
    UIActivityIndicatorView *_loadingView;	// 32 = 0x20
}

+ (id)buttonWithFollowUIType:(long long)arg1;	// IMP=0x0000000100fe2724
@property(retain, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) long long followType; // @synthesize followType=_followType;
@property(nonatomic) long long followStatus; // @synthesize followStatus=_followStatus;
@property(nonatomic) long long followUIType; // @synthesize followUIType=_followUIType;
- (void).cxx_destruct;	// IMP=0x0000000100fe3868
- (void)updateUI;	// IMP=0x0000000100fe2f18
- (void)setupBtnUIType:(long long)arg1 followStatus:(long long)arg2 followType:(long long)arg3;	// IMP=0x0000000100fe2ee8

@end


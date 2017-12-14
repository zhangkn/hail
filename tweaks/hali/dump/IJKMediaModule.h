//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IJKMediaModule : NSObject
{
    _Bool _appIdleTimerDisabled;	// 8 = 0x8
    _Bool _mediaModuleIdleTimerDisabled;	// 9 = 0x9
}

+ (id)sharedModule;	// IMP=0x000000010180d754
- (void)updateIdleTimer;	// IMP=0x000000010180d824
@property(getter=isMediaModuleIdleTimerDisabled) _Bool mediaModuleIdleTimerDisabled; // @synthesize mediaModuleIdleTimerDisabled=_mediaModuleIdleTimerDisabled;
@property(getter=isAppIdleTimerDisabled) _Bool appIdleTimerDisabled; // @synthesize appIdleTimerDisabled=_appIdleTimerDisabled;

@end


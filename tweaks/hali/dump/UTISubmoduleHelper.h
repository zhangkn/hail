//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface UTISubmoduleHelper : NSObject
{
    _Bool mSubModuleSwitchOn;	// 8 = 0x8
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000101a867a4
+ (id)getInstance;	// IMP=0x0000000101a866cc
@property _Bool mSubModuleSwitchOn; // @synthesize mSubModuleSwitchOn;
- (id)getAppKey;	// IMP=0x0000000101a8684c
- (void)turnOnSubmodule;	// IMP=0x0000000101a86838
- (void)setSDKVersion:(id)arg1;	// IMP=0x0000000101a86824
- (void)onCrashOccur;	// IMP=0x0000000101a86810
- (id)init;	// IMP=0x0000000101a867c8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000101a867c4

@end

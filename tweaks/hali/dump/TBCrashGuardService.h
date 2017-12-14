//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TBCrashGuardLog, TBZombieGuardService;

@interface TBCrashGuardService : NSObject
{
    TBZombieGuardService *_zombieGuardService;	// 8 = 0x8
    TBCrashGuardLog *_crashGuardLog;	// 16 = 0x10
}

+ (id)shareInstance;	// IMP=0x0000000101636170
@property(retain, nonatomic) TBCrashGuardLog *crashGuardLog; // @synthesize crashGuardLog=_crashGuardLog;
@property(retain, nonatomic) TBZombieGuardService *zombieGuardService; // @synthesize zombieGuardService=_zombieGuardService;
- (void).cxx_destruct;	// IMP=0x000000010163733c
- (void)setupWebViewCrashGurad;	// IMP=0x0000000101637148
- (void)setupNSKeyedUnarchiverGuard;	// IMP=0x0000000101637144
- (void)setupNSTimerGuard;	// IMP=0x00000001016370ec
- (void)setupNSAttributedStringGuard;	// IMP=0x0000000101637030
- (void)setupNSStringGuard;	// IMP=0x0000000101636e5c
- (void)setupNotificationGuard;	// IMP=0x0000000101636db4
- (void)setupContainerGuard;	// IMP=0x00000001016368d4
- (void)setupObjectGuard;	// IMP=0x0000000101636830
- (void)setupNSBundleLoadCrashGuard;	// IMP=0x000000010163675c
- (void)setupKVOCrashGurad;	// IMP=0x0000000101636634
- (_Bool)isReleaseVersion;	// IMP=0x0000000101636544
- (_Bool)isEnableZombieGuard;	// IMP=0x000000010163653c
- (_Bool)isEnableCrashGuard;	// IMP=0x0000000101636534
- (void)setupNanoFreeCrashFix;	// IMP=0x0000000101636520
- (_Bool)isEnableNanoFreeFix;	// IMP=0x0000000101636518
- (void)setGetCallStackBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001016364ac
- (void)setHandleLogBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000101636440
- (void)startCrashGuardService:(unsigned long long)arg1;	// IMP=0x00000001016362bc
- (id)init;	// IMP=0x00000001016361f0

@end

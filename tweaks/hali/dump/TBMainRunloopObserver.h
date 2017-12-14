//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBMainRunloopMonitorProtocol.h"

@class NSObject<OS_dispatch_source>, NSString, NSThread;

@interface TBMainRunloopObserver : NSObject <TBMainRunloopMonitorProtocol>
{
    _Bool _running;	// 8 = 0x8
    _Bool _isStop;	// 9 = 0x9
    _Bool _isBetaVersion;	// 10 = 0xa
    _Bool _isCloseSampling;	// 11 = 0xb
    float _blockInterval;	// 12 = 0xc
    float _baseInterval;	// 16 = 0x10
    CDUnknownBlockType _handlerBlock;	// 24 = 0x18
    CDUnknownBlockType _monitorBlock;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_timerSource;	// 40 = 0x28
    CDUnknownBlockType _runLoopObserverInnerBlock;	// 48 = 0x30
    NSThread *_monitorThread;	// 56 = 0x38
}

@property(nonatomic) _Bool isCloseSampling; // @synthesize isCloseSampling=_isCloseSampling;
@property(nonatomic) _Bool isBetaVersion; // @synthesize isBetaVersion=_isBetaVersion;
@property(nonatomic) _Bool isStop; // @synthesize isStop=_isStop;
@property(nonatomic) _Bool running; // @synthesize running=_running;
@property(retain, nonatomic) NSThread *monitorThread; // @synthesize monitorThread=_monitorThread;
@property(copy, nonatomic) CDUnknownBlockType runLoopObserverInnerBlock; // @synthesize runLoopObserverInnerBlock=_runLoopObserverInnerBlock;
@property(nonatomic) NSObject<OS_dispatch_source> *timerSource; // @synthesize timerSource=_timerSource;
@property(copy, nonatomic) CDUnknownBlockType monitorBlock; // @synthesize monitorBlock=_monitorBlock;
@property(copy, nonatomic) CDUnknownBlockType handlerBlock; // @synthesize handlerBlock=_handlerBlock;
@property(nonatomic) float baseInterval; // @synthesize baseInterval=_baseInterval;
@property(nonatomic) float blockInterval; // @synthesize blockInterval=_blockInterval;
- (void).cxx_destruct;	// IMP=0x000000010163e924
- (int)getRandomNumber:(int)arg1 to:(int)arg2;	// IMP=0x000000010163e76c
- (void)samplingCal;	// IMP=0x000000010163e6d4
- (void)blockTimerFired;	// IMP=0x000000010163e658
- (void)monitorBlockHandler;	// IMP=0x000000010163e5dc
- (long long)calWaitTime:(long long)arg1 BeforeWait:(long long)arg2 AfterWait:(long long)arg3;	// IMP=0x000000010163e56c
- (void)runMonitor;	// IMP=0x000000010163e2c0
- (void)cancelRunLoopMonitor;	// IMP=0x000000010163e220
- (void)resumeRunLoopMonitor;	// IMP=0x000000010163e210
- (void)stopRunLoopMonitor;	// IMP=0x000000010163e200
- (void)startRunLoopMonitor;	// IMP=0x000000010163e0f4
- (void)onAppTerminate;	// IMP=0x000000010163e0e8
- (void)onEnterBackground;	// IMP=0x000000010163e09c
- (void)onEnterForground;	// IMP=0x000000010163e058
- (void)onApplicationBecomeActive;	// IMP=0x000000010163e024
- (void)onApplicationLaunched;	// IMP=0x000000010163df0c
- (void)addActivityObserver;	// IMP=0x000000010163ddf8
- (struct __CFRunLoopObserver *)addRunloopObserver:(unsigned long long)arg1 order:(long long)arg2 mode:(struct __CFString *)arg3 handlerBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000010163dda8
- (_Bool)removeObserver:(struct __CFRunLoopObserver *)arg1 runloopMode:(struct __CFString *)arg2;	// IMP=0x000000010163dd6c
- (struct __CFRunLoopObserver *)addMainThreadRunloopBlockObserver:(CDUnknownBlockType)arg1;	// IMP=0x000000010163dbf4
- (void)addAppMonitorBlockObserver:(CDUnknownBlockType)arg1;	// IMP=0x000000010163dbe0
- (void)setCloseSampling:(_Bool)arg1;	// IMP=0x000000010163dbd4
- (void)setBetaVersionFlag:(_Bool)arg1;	// IMP=0x000000010163dbc8
- (void)setBaseBolckInterval:(float)arg1;	// IMP=0x000000010163db84
- (id)init;	// IMP=0x000000010163dab4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

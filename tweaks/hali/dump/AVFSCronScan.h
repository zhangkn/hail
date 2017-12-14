//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVFSCronTask, NSTimer;

@interface AVFSCronScan : NSObject
{
    AVFSCronTask *_cronTask;	// 8 = 0x8
    NSTimer *_delayTimer;	// 16 = 0x10
}

@property(retain, nonatomic) NSTimer *delayTimer; // @synthesize delayTimer=_delayTimer;
@property(retain, nonatomic) AVFSCronTask *cronTask; // @synthesize cronTask=_cronTask;
- (void).cxx_destruct;	// IMP=0x00000001011c7ea8
- (void)dealloc;	// IMP=0x00000001011c7da0
- (void)delayTimerFunc:(id)arg1;	// IMP=0x00000001011c7c70
- (void)stopCronScan;	// IMP=0x00000001011c7b10
- (void)startCronScan;	// IMP=0x00000001011c78e8
- (void)applicationWillTerminate;	// IMP=0x00000001011c75a0
- (void)applicationDidBackend;	// IMP=0x00000001011c74c4
- (void)applicationDidWakeUp;	// IMP=0x00000001011c73e8
- (id)init;	// IMP=0x00000001011c72ac

@end


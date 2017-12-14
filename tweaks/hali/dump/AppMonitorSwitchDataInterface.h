//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock;

@interface AppMonitorSwitchDataInterface : NSObject
{
    _Bool _sample;	// 8 = 0x8
    NSLock *_lock;	// 16 = 0x10
}

+ (void)disableSample;	// IMP=0x00000001012189d0
+ (id)sharedInstance;	// IMP=0x0000000101218900
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property _Bool sample; // @synthesize sample=_sample;
- (void).cxx_destruct;	// IMP=0x0000000101219140
- (void)setLocalConfig;	// IMP=0x0000000101218fc4
- (_Bool)GetResult:(id)arg1 MonitorPoint:(id)arg2 Type:(id)arg3 Dimension:(id)arg4 Arg:(id)arg5;	// IMP=0x0000000101218c1c
- (id)GetDetailPoint:(id)arg1 MonitorPoint:(id)arg2;	// IMP=0x0000000101218b78
- (int)GetValidPoint:(id)arg1 MonitorPoint:(id)arg2 Measure:(id)arg3 measureValue:(id)arg4;	// IMP=0x0000000101218aa0
- (id)init;	// IMP=0x0000000101218a1c

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSTimer;

@interface TBCrashGuardWeakTimerTarget : NSObject
{
    id _weakTarget;	// 8 = 0x8
    SEL _selector;	// 16 = 0x10
    NSString *_targetClass;	// 24 = 0x18
    NSTimer *_timer;	// 32 = 0x20
}

@property(nonatomic) __weak NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSString *targetClass; // @synthesize targetClass=_targetClass;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) __weak id weakTarget; // @synthesize weakTarget=_weakTarget;
- (void).cxx_destruct;	// IMP=0x00000001016346e4
- (void)timerFiredStub:(id)arg1;	// IMP=0x0000000101634468

@end


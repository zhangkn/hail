//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSThread;

@interface AVFSMonitorObserver : NSObject
{
    _Bool _stopRunning;	// 8 = 0x8
    NSThread *_backendThread;	// 16 = 0x10
    CDUnknownBlockType _fileLogBlock;	// 24 = 0x18
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001011f37bc
+ (id)sharedObserver;	// IMP=0x00000001011f36ec
@property(copy, nonatomic) CDUnknownBlockType fileLogBlock; // @synthesize fileLogBlock=_fileLogBlock;
@property(retain, nonatomic) NSThread *backendThread; // @synthesize backendThread=_backendThread;
- (void).cxx_destruct;	// IMP=0x00000001011f457c
- (void)removeItem:(id)arg1 cache:(id)arg2;	// IMP=0x00000001011f439c
- (void)syncPrivate:(id)arg1 operate:(unsigned long long)arg2 attrs:(id)arg3;	// IMP=0x00000001011f4154
- (void)calculateModule:(id)arg1 operate:(unsigned long long)arg2 attrs:(id)arg3;	// IMP=0x00000001011f3eec
- (void)exchangeThread:(CDUnknownBlockType)arg1;	// IMP=0x00000001011f3e1c
- (void)threadRunLoop;	// IMP=0x00000001011f3ce8
- (id)init;	// IMP=0x00000001011f3c1c
- (void)notifyModule:(id)arg1 operate:(unsigned long long)arg2 attrs:(id)arg3;	// IMP=0x00000001011f39e4
- (void)registerFileLogBlock;	// IMP=0x00000001011f385c

@end

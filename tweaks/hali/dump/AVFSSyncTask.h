//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVFSThreadTask.h"

@class NSString, NSTimer;

@interface AVFSSyncTask : NSObject <AVFSThreadTask>
{
    id userInfo;	// 8 = 0x8
    CDUnknownBlockType _execBlock;	// 16 = 0x10
    NSTimer *_eventTimer;	// 24 = 0x18
}

@property(retain, nonatomic) NSTimer *eventTimer; // @synthesize eventTimer=_eventTimer;
@property(copy, nonatomic) CDUnknownBlockType execBlock; // @synthesize execBlock=_execBlock;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo;
- (void).cxx_destruct;	// IMP=0x00000001011c9d90
- (void)stop;	// IMP=0x00000001011c9cb8
- (void)start;	// IMP=0x00000001011c9aa0
- (id)initWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001011c9a34
- (id)init;	// IMP=0x00000001011c99fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


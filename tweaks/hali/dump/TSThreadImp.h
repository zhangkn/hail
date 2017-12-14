//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSThread;

@interface TSThreadImp : NSObject
{
    _Bool _stopRunning;	// 8 = 0x8
    NSThread *_workThread;	// 16 = 0x10
}

@property(retain, nonatomic) NSThread *workThread; // @synthesize workThread=_workThread;
@property(nonatomic) _Bool stopRunning; // @synthesize stopRunning=_stopRunning;
- (void).cxx_destruct;	// IMP=0x0000000101a0206c
- (void)stop;	// IMP=0x0000000101a01fa8
- (void)executeBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000101a01e8c
- (void)runLoopThread;	// IMP=0x0000000101a01d18
- (id)initWith:(id)arg1 andPriority:(double)arg2 andName:(id)arg3;	// IMP=0x0000000101a01b98
- (id)init;	// IMP=0x0000000101a01988
- (void)dealloc;	// IMP=0x0000000101a01904

@end

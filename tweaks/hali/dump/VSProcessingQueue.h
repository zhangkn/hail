//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_semaphore>, NSString;

@interface VSProcessingQueue : NSObject
{
    NSMutableArray *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_semaphore> *_availableItemsToDequeue;	// 16 = 0x10
    NSObject<OS_dispatch_semaphore> *_availableItemsToEnqueue;	// 24 = 0x18
    NSObject<OS_dispatch_semaphore> *_accessQueue;	// 32 = 0x20
    _Bool _completed;	// 40 = 0x28
    unsigned long long _maxQueueSize;	// 48 = 0x30
    NSString *_nilObj;	// 56 = 0x38
}

@property(retain, nonatomic) NSString *nilObj; // @synthesize nilObj=_nilObj;
@property(nonatomic) unsigned long long maxQueueSize; // @synthesize maxQueueSize=_maxQueueSize;
- (void).cxx_destruct;	// IMP=0x0000000101ad7f40
- (id)dequeue;	// IMP=0x0000000101ad7db8
- (void)stopProcessing;	// IMP=0x0000000101ad7d2c
- (void)startProcessingWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000101ad7ccc
- (void)_process:(CDUnknownBlockType)arg1;	// IMP=0x0000000101ad7b40
- (void)dealloc;	// IMP=0x0000000101ad7a84
- (id)init;	// IMP=0x0000000101ad7974

@end


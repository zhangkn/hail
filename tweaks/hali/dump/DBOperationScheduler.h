//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DBConnectionPool, DBMutex, DBOpertaionQueue, NSObject<OS_dispatch_queue>, ThreadPoolManager;

@interface DBOperationScheduler : NSObject
{
    DBOpertaionQueue *_pendingQueue;	// 8 = 0x8
    DBOpertaionQueue *_workingQueue;	// 16 = 0x10
    int _status;	// 24 = 0x18
    ThreadPoolManager *_threadPoolManager;	// 32 = 0x20
    DBConnectionPool *_connectionPool;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_execCallbackQueue;	// 48 = 0x30
    DBMutex *_mutex;	// 56 = 0x38
    unsigned long long _noAvailConnectionCount;	// 64 = 0x40
}

@property(nonatomic) __weak DBConnectionPool *connectionPool; // @synthesize connectionPool=_connectionPool;
@property(nonatomic) int status; // @synthesize status=_status;
- (void).cxx_destruct;	// IMP=0x00000001011b1884
- (void)merge:(id)arg1 withOperation:(id)arg2;	// IMP=0x00000001011b1188
- (id)findMergeOperation:(id)arg1;	// IMP=0x00000001011b10d8
- (_Bool)canMergeOperation:(id)arg1;	// IMP=0x00000001011b1040
- (void)operationCallback:(id)arg1;	// IMP=0x00000001011b0934
- (void)submitOperation:(id)arg1 inConnection:(id)arg2;	// IMP=0x00000001011b03e4
- (void)scheduleOperation;	// IMP=0x00000001011b0084
- (void)execOperationWithoutCallback:(id)arg1;	// IMP=0x00000001011afe84
- (void)addOperation:(id)arg1;	// IMP=0x00000001011afcac
- (id)initWithConnectionPool:(id)arg1;	// IMP=0x00000001011afb20

@end


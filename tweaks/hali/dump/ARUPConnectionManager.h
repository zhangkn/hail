//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ARUPConnectionDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface ARUPConnectionManager : NSObject <ARUPConnectionDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_connectionsDict;	// 16 = 0x10
    NSMutableArray *_wastArray;	// 24 = 0x18
}

+ (void)setTnetIPv6status;	// IMP=0x000000010119477c
+ (id)shareInstance;	// IMP=0x000000010119452c
@property(retain, nonatomic) NSMutableArray *wastArray; // @synthesize wastArray=_wastArray;
@property(retain, nonatomic) NSMutableDictionary *connectionsDict; // @synthesize connectionsDict=_connectionsDict;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;	// IMP=0x00000001011967d4
- (void)connection:(id)arg1 onWritable:(int)arg2;	// IMP=0x00000001011964c0
- (void)connection:(id)arg1 sendDataError:(id)arg2;	// IMP=0x00000001011961bc
- (void)connection:(id)arg1 receiveData:(id)arg2;	// IMP=0x0000000101195f4c
- (void)connection:(id)arg1 close:(id)arg2;	// IMP=0x0000000101195c28
- (void)connection:(id)arg1 connectFail:(id)arg2;	// IMP=0x0000000101195908
- (void)connection:(id)arg1 didConnect:(id)arg2;	// IMP=0x000000010119562c
- (void)startConnect:(id)arg1;	// IMP=0x0000000101195390
- (void)removeConnectionWithOrigin:(id)arg1;	// IMP=0x0000000101194fa4
- (void)reset;	// IMP=0x0000000101194e04
- (void)disconnection:(id)arg1;	// IMP=0x0000000101194ce4
- (id)getConnectionKey:(id)arg1;	// IMP=0x0000000101194cd4
- (void)sendRequestWithData:(id)arg1 delegate:(id)arg2 origin:(id)arg3;	// IMP=0x00000001011947dc
- (void)dealloc;	// IMP=0x00000001011946f4
- (id)init;	// IMP=0x00000001011945ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


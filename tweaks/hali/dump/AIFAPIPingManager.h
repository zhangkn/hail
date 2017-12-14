//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AIFServerOPConsumer.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString;

@interface AIFAPIPingManager : NSObject <AIFServerOPConsumer>
{
    NSOperationQueue *_exeQ;	// 8 = 0x8
    NSMutableDictionary *_pingServices;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_pingServicesQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_tracerouteQueue;	// 32 = 0x20
}

+ (id)sharedManager;	// IMP=0x0000000101010c54
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *tracerouteQueue; // @synthesize tracerouteQueue=_tracerouteQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *pingServicesQueue; // @synthesize pingServicesQueue=_pingServicesQueue;
@property(retain, nonatomic) NSMutableDictionary *pingServices; // @synthesize pingServices=_pingServices;
@property(retain, nonatomic) NSOperationQueue *exeQ; // @synthesize exeQ=_exeQ;
- (void).cxx_destruct;	// IMP=0x0000000101013608
- (void)dealloc;	// IMP=0x000000010101346c
- (void)unregitsterPingService:(id)arg1;	// IMP=0x0000000101013338
- (void)regitsterPingService:(id)arg1 host:(id)arg2;	// IMP=0x00000001010131b8
- (id)format4RealtimeTrack:(id)arg1 host:(id)arg2 ipAddr:(id)arg3;	// IMP=0x0000000101012bdc
- (id)format4trReport:(id)arg1 host:(id)arg2;	// IMP=0x000000010101290c
- (void)uploadPingResult:(id)arg1 host:(id)arg2 ipAddr:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001010124fc
- (void)doTraceroute:(id)arg1 count:(long long)arg2 ttl:(long long)arg3 timeout:(double)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000010101209c
- (void)doPing:(id)arg1 count:(long long)arg2 ttl:(long long)arg3 timeout:(double)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000101011cd4
- (id)generateStaticNetworkData:(id)arg1;	// IMP=0x00000001010118a8
- (void)doNetworkDiagnosis:(id)arg1 count:(long long)arg2 ttl:(long long)arg3 timeout:(double)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000101010f94
- (void)consume:(id)arg1;	// IMP=0x0000000101010ec4
- (void)startObservePingCommand:(id)arg1;	// IMP=0x0000000101010e38
- (id)init;	// IMP=0x0000000101010d08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


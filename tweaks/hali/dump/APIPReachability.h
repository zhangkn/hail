//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface APIPReachability : NSObject
{
    _Bool reachableOnWWAN;	// 8 = 0x8
    struct __SCNetworkReachability *reachabilityRef;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *reachabilitySerialQueue;	// 24 = 0x18
    CDUnknownBlockType reachableBlock;	// 32 = 0x20
    CDUnknownBlockType unreachableBlock;	// 40 = 0x28
    id reachabilityObject;	// 48 = 0x30
}

+ (id)reachabilityForLocalWiFi;	// IMP=0x000000010110a148
+ (id)reachabilityForInternetConnection;	// IMP=0x000000010110a0ec
+ (id)reachabilityWithAddress:(const struct sockaddr_in *)arg1;	// IMP=0x000000010110a08c
+ (id)reachabilityWithHostname:(id)arg1;	// IMP=0x000000010110a000
+ (id)reachabilityWithHostName:(id)arg1;	// IMP=0x0000000101109fec
@property(retain, nonatomic) id reachabilityObject; // @synthesize reachabilityObject;
@property(copy, nonatomic) CDUnknownBlockType unreachableBlock; // @synthesize unreachableBlock;
@property(copy, nonatomic) CDUnknownBlockType reachableBlock; // @synthesize reachableBlock;
@property(nonatomic) _Bool reachableOnWWAN; // @synthesize reachableOnWWAN;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *reachabilitySerialQueue; // @synthesize reachabilitySerialQueue;
@property(nonatomic) struct __SCNetworkReachability *reachabilityRef; // @synthesize reachabilityRef;
- (void).cxx_destruct;	// IMP=0x000000010110acec
- (id)description;	// IMP=0x000000010110ab84
- (void)reachabilityChanged:(unsigned int)arg1;	// IMP=0x000000010110aa00
- (id)currentReachabilityFlags;	// IMP=0x000000010110a938
- (id)currentReachabilityString;	// IMP=0x000000010110a828
- (unsigned int)reachabilityFlags;	// IMP=0x000000010110a7ec
- (long long)currentReachabilityStatus;	// IMP=0x000000010110a79c
- (_Bool)isInterventionRequired;	// IMP=0x000000010110a750
- (_Bool)isConnectionOnDemand;	// IMP=0x000000010110a700
- (_Bool)connectionRequired;	// IMP=0x000000010110a6c0
- (_Bool)isConnectionRequired;	// IMP=0x000000010110a6b4
- (_Bool)isReachableViaWiFi;	// IMP=0x000000010110a660
- (_Bool)isReachableViaWWAN;	// IMP=0x000000010110a608
- (_Bool)isReachable;	// IMP=0x000000010110a5b0
- (_Bool)isReachableWithFlags:(unsigned int)arg1;	// IMP=0x000000010110a568
- (void)stopNotifier;	// IMP=0x000000010110a4d4
- (_Bool)startNotifier;	// IMP=0x000000010110a2dc
- (void)dealloc;	// IMP=0x000000010110a228
- (id)initWithReachabilityRef:(struct __SCNetworkReachability *)arg1;	// IMP=0x000000010110a1b4

@end


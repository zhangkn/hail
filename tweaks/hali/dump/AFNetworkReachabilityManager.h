//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AFNetworkReachabilityManager : NSObject
{
    long long _networkReachabilityStatus;	// 8 = 0x8
    struct __SCNetworkReachability *_networkReachability;	// 16 = 0x10
    CDUnknownBlockType _networkReachabilityStatusBlock;	// 24 = 0x18
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;	// IMP=0x00000001008a4f74
+ (id)manager;	// IMP=0x00000001008a490c
+ (id)managerForAddress:(const void *)arg1;	// IMP=0x00000001008a48a8
+ (id)managerForDomain:(id)arg1;	// IMP=0x00000001008a4808
+ (id)sharedManager;	// IMP=0x00000001008a4758
@property(copy, nonatomic) CDUnknownBlockType networkReachabilityStatusBlock; // @synthesize networkReachabilityStatusBlock=_networkReachabilityStatusBlock;
@property(readonly, nonatomic) struct __SCNetworkReachability *networkReachability; // @synthesize networkReachability=_networkReachability;
@property(nonatomic) long long networkReachabilityStatus; // @synthesize networkReachabilityStatus=_networkReachabilityStatus;
- (void).cxx_destruct;	// IMP=0x00000001008a50a4
- (void)setReachabilityStatusChangeBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001008a4f68
- (id)localizedNetworkReachabilityStatusString;	// IMP=0x00000001008a4f4c
- (void)stopMonitoring;	// IMP=0x00000001008a4ee8
- (void)startMonitoring;	// IMP=0x00000001008a4b00
@property(readonly, nonatomic, getter=isReachableViaWiFi) _Bool reachableViaWiFi;
@property(readonly, nonatomic, getter=isReachableViaWWAN) _Bool reachableViaWWAN;
@property(readonly, nonatomic, getter=isReachable) _Bool reachable;
- (void)dealloc;	// IMP=0x00000001008a4a10
- (id)init;	// IMP=0x00000001008a49f8
- (id)initWithReachability:(struct __SCNetworkReachability *)arg1;	// IMP=0x00000001008a4968

@end

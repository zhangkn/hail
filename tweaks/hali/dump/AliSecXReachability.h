//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AliSecXReachability : NSObject
{
    _Bool localWiFiRef;	// 8 = 0x8
    struct __SCNetworkReachability *reachabilityRef;	// 16 = 0x10
}

+ (id)reachabilityForLocalWiFi;	// IMP=0x000000010114efc0
+ (id)reachabilityForInternetConnection;	// IMP=0x000000010114ef5c
+ (id)reachabilityWithAddress:(const struct sockaddr_in *)arg1;	// IMP=0x000000010114eee4
+ (id)reachabilityWithHostName:(id)arg1;	// IMP=0x000000010114ee40
- (long long)currentReachabilityStatus;	// IMP=0x000000010114f39c
- (_Bool)connectionRequired;	// IMP=0x000000010114f35c
- (long long)networkStatusForFlags:(unsigned int)arg1;	// IMP=0x000000010114f188
- (long long)localWiFiStatusForFlags:(unsigned int)arg1;	// IMP=0x000000010114f174
- (void)dealloc;	// IMP=0x000000010114f110
- (void)stopNotifier;	// IMP=0x000000010114f0c4
- (_Bool)startNotifier;	// IMP=0x000000010114f040

@end


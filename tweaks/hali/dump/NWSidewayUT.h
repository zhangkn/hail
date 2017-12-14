//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSRecursiveLock, NSString;

@interface NWSidewayUT : NSObject
{
    NSString *_baidu_ips;	// 8 = 0x8
    NSString *_acs_ips;	// 16 = 0x10
    NSString *_net_type;	// 24 = 0x18
    _Bool _is_enabled;	// 32 = 0x20
    _Bool _is_ipv6only;	// 33 = 0x21
    NSMutableDictionary *_commDict;	// 40 = 0x28
    NSMutableDictionary *_vipDict;	// 48 = 0x30
    NSRecursiveLock *_lock;	// 56 = 0x38
}

+ (id)getHostbyname:(id)arg1;	// IMP=0x00000001011a2574
+ (id)sharedInstance;	// IMP=0x00000001011a118c
- (void).cxx_destruct;	// IMP=0x00000001011a27a4
- (void)detectHostbyname;	// IMP=0x00000001011a20d8
- (void)report2testapi:(id)arg1;	// IMP=0x00000001011a1c5c
- (id)dict2string:(id)arg1;	// IMP=0x00000001011a1a9c
- (_Bool)isCacheEventFull:(id)arg1;	// IMP=0x00000001011a1954
- (void)commitEvent:(id)arg1 withContent:(id)arg2 withMaxCache:(unsigned long long)arg3 isVip:(_Bool)arg4;	// IMP=0x00000001011a16d4
- (void)setNetType:(int)arg1;	// IMP=0x00000001011a1628
- (void)setEnable:(_Bool)arg1;	// IMP=0x00000001011a13f4
- (void)reset;	// IMP=0x00000001011a1310
- (id)init;	// IMP=0x00000001011a120c

@end

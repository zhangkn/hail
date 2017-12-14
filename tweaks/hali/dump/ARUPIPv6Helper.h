//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSRecursiveLock;

@interface ARUPIPv6Helper : NSObject
{
    int _v6_prefix_resolve_status;	// 8 = 0x8
    int _ip_type;	// 12 = 0xc
    NSRecursiveLock *_v6_prefix_lock;	// 16 = 0x10
    unsigned char _v6_prefix_length;	// 24 = 0x18
    const char *_v6_prefix;	// 32 = 0x20
}

+ (_Bool)isPrefix:(const char *)arg1 withPrefixLength:(int)arg2 IP:(const char *)arg3 withIPLength:(int)arg4;	// IMP=0x00000001011978f0
+ (_Bool)isIPv4address:(id)arg1;	// IMP=0x0000000101196d24
+ (id)sharedInstance;	// IMP=0x0000000101196a48
- (void).cxx_destruct;	// IMP=0x0000000101197950
- (unsigned char)resolveV6Prefix:(char *)arg1;	// IMP=0x0000000101197438
- (void)resetTnetIpMode;	// IMP=0x0000000101197408
- (void)reset;	// IMP=0x0000000101197340
- (id)convertIPv4toIPv6:(id)arg1;	// IMP=0x0000000101196f3c
- (_Bool)isIPv6only;	// IMP=0x0000000101196b98
- (id)init;	// IMP=0x0000000101196ac8

@end

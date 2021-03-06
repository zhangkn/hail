//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSString;

@interface TFEHttpDNSOrigin : NSObject
{
    NSString *_wifiSSID;	// 8 = 0x8
    NSArray *_ips;	// 16 = 0x10
    NSString *_host;	// 24 = 0x18
    NSDate *_queryTime;	// 32 = 0x20
    long long _ttl;	// 40 = 0x28
}

@property(nonatomic) long long ttl; // @synthesize ttl=_ttl;
@property(retain) NSDate *queryTime; // @synthesize queryTime=_queryTime;
@property(retain) NSString *host; // @synthesize host=_host;
@property(retain, nonatomic) NSArray *ips; // @synthesize ips=_ips;
@property(retain) NSString *wifiSSID; // @synthesize wifiSSID=_wifiSSID;
- (void).cxx_destruct;	// IMP=0x0000000101069180
- (id)description;	// IMP=0x0000000101068f08
- (id)defaultIp;	// IMP=0x0000000101068ec8
- (_Bool)isExpired;	// IMP=0x0000000101068e6c
- (id)initWithHost:(id)arg1;	// IMP=0x0000000101068de0

@end


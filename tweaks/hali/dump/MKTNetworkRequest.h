//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface MKTNetworkRequest : NSObject
{
    int _retryCount;	// 8 = 0x8
    NSString *_userId;	// 16 = 0x10
    long long _sysCode;	// 24 = 0x18
    NSString *_routeId;	// 32 = 0x20
    NSData *_data;	// 40 = 0x28
    CDUnknownBlockType _callback;	// 48 = 0x30
}

@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) int retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *routeId; // @synthesize routeId=_routeId;
@property(nonatomic) long long sysCode; // @synthesize sysCode=_sysCode;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;	// IMP=0x000000010134b1cc

@end

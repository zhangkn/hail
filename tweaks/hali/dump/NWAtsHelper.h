//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL, NWUTAts;

@interface NWAtsHelper : NSObject
{
    NWUTAts *_ut;	// 8 = 0x8
    NSURL *_proxyResponseURL;	// 16 = 0x10
    int _processType;	// 24 = 0x18
    int _proxyReturnType;	// 28 = 0x1c
}

+ (void)disableCfNetwork;	// IMP=0x000000010139d0b8
+ (_Bool)isCfNetworkDisabled;	// IMP=0x000000010139d0ac
+ (_Bool)isAtsProxyHost:(id)arg1;	// IMP=0x000000010139d090
+ (void)addAtsProxyHeadForRequest:(id)arg1;	// IMP=0x000000010139cf88
+ (_Bool)isExceptionDomain:(id)arg1;	// IMP=0x000000010139ce78
+ (_Bool)isInfoPlistAllowedHttp:(id)arg1;	// IMP=0x000000010139ca14
+ (_Bool)isWebviewRequest:(id)arg1;	// IMP=0x000000010139c938
+ (int)valueForKey:(id)arg1 withDictionary:(id)arg2;	// IMP=0x000000010139c8a4
+ (_Bool)isIngoreRequest:(id)arg1;	// IMP=0x000000010139c6b8
+ (void)commitUTHttpsProxyRequest:(id)arg1 withReturnType:(int)arg2;	// IMP=0x000000010139c580
+ (void)commitUTHttpRequest:(id)arg1;	// IMP=0x000000010139c4a8
+ (void)setIgnoreHosts:(id)arg1;	// IMP=0x000000010139c434
+ (void)initialize;	// IMP=0x000000010139c388
@property(nonatomic) int proxyReturnType; // @synthesize proxyReturnType=_proxyReturnType;
@property(nonatomic) int processType; // @synthesize processType=_processType;
- (void).cxx_destruct;	// IMP=0x000000010139da7c
- (void)setProxyResponseURL:(id)arg1 isForce:(_Bool)arg2;	// IMP=0x000000010139d9bc
- (id)convertProxyResponseURL:(id)arg1;	// IMP=0x000000010139d8dc
- (void)onReceiveProxyResponse:(id)arg1;	// IMP=0x000000010139d7a0
- (void)detectProcessType:(id)arg1;	// IMP=0x000000010139d4f8
- (void)commitUT:(id)arg1;	// IMP=0x000000010139d448
- (void)initUtArgs:(id)arg1;	// IMP=0x000000010139d318
- (id)init;	// IMP=0x000000010139d264
- (_Bool)isHttpsWhitelistHost:(id)arg1;	// IMP=0x000000010139d1d4
- (void)updateHttpsWhitelist:(id)arg1;	// IMP=0x000000010139d0e0
- (_Bool)isAtsProxyBlocked;	// IMP=0x000000010139d0c8

@end


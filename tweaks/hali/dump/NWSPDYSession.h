//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ConnectionDataCollection, NSString, NWPolicyResult, NWSPDYDataChannelAuthRequest, NWSPDYOrigin, NWSPDYProxy, NWUTSession, SPDYTraceString;

@interface NWSPDYSession : NSObject
{
    struct NAL_session_t {
        struct NAL_addr_t;
        int;
        unsigned short;
        unsigned short;
        struct NAL_session_meta {
            void *;
            struct NAL_session_handler;
            unsigned int :1;
        };
    } *_socket;	// 8 = 0x8
    NWSPDYProxy *_proxy;	// 16 = 0x10
    _Bool _pingNoReply;	// 24 = 0x18
    _Bool _longChain;	// 25 = 0x19
    _Bool _varProxy;	// 26 = 0x1a
    int _status;	// 28 = 0x1c
    unsigned int _retry_times;	// 32 = 0x20
    unsigned int _retry;	// 36 = 0x24
    unsigned int _timeout;	// 40 = 0x28
    unsigned int _idle;	// 44 = 0x2c
    _Bool _authentication;	// 48 = 0x30
    NWSPDYDataChannelAuthRequest *_authRequest;	// 56 = 0x38
    ConnectionDataCollection *_collection;	// 64 = 0x40
    NWUTSession *_uts;	// 72 = 0x48
    double _sessionBeginTime;	// 80 = 0x50
    int _innerStatusForLog;	// 88 = 0x58
    NWSPDYOrigin *_origin;	// 96 = 0x60
    id <SPDYSessionDelegate> _sessionDelegate;	// 104 = 0x68
    NSString *_domain;	// 112 = 0x70
    SPDYTraceString *_trace;	// 120 = 0x78
    NWPolicyResult *_policyResult;	// 128 = 0x80
}

+ (id)descState:(int)arg1;	// IMP=0x00000001013b5c6c
+ (void)initialize;	// IMP=0x00000001013b4b10
@property(nonatomic) int innerStatusForLog; // @synthesize innerStatusForLog=_innerStatusForLog;
@property(retain, nonatomic) NWPolicyResult *policyResult; // @synthesize policyResult=_policyResult;
@property(readonly, nonatomic) SPDYTraceString *trace; // @synthesize trace=_trace;
@property(readonly, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(nonatomic) __weak id <SPDYSessionDelegate> sessionDelegate; // @synthesize sessionDelegate=_sessionDelegate;
@property(readonly, nonatomic) NWSPDYOrigin *origin; // @synthesize origin=_origin;
- (void).cxx_destruct;	// IMP=0x00000001013b8834
- (void)dealloc;	// IMP=0x00000001013b8734
- (void)reportCreateSessionCostTime:(double)arg1;	// IMP=0x00000001013b8724
- (void)reportCreateSessionScenes:(id)arg1;	// IMP=0x00000001013b86cc
- (id)currentIP;	// IMP=0x00000001013b86b4
- (id)getProtocol;	// IMP=0x00000001013b8680
- (int)getSessionStatus;	// IMP=0x00000001013b8670
- (id)getConnData;	// IMP=0x00000001013b8594
- (void)dataCollection:(struct NAL_connection_count_t *)arg1;	// IMP=0x00000001013b8408
- (void)recvCustomFrameType:(unsigned short)arg1 withFlags:(unsigned char)arg2 withData:(id)arg3;	// IMP=0x00000001013b8258
- (void)sendCustomFrameType:(unsigned short)arg1 withFlags:(unsigned char)arg2 withData:(id)arg3 sslIndex:(unsigned int)arg4;	// IMP=0x00000001013b8058
- (void)willSendHttpBody:(struct NAL_request_t *)arg1;	// IMP=0x00000001013b8038
- (void)sendRequest:(id)arg1;	// IMP=0x00000001013b7e9c
- (void)sendPingRequest;	// IMP=0x00000001013b7e3c
- (void)sendAuthRequest:(id)arg1;	// IMP=0x00000001013b7d10
- (int)idleValue;	// IMP=0x00000001013b7d00
- (_Bool)idle;	// IMP=0x00000001013b7ca4
- (void)clientPingTimeout;	// IMP=0x00000001013b7ab8
- (void)recvPingRequest:(_Bool)arg1;	// IMP=0x00000001013b77a8
- (void)recvPingReply:(_Bool)arg1;	// IMP=0x00000001013b76d0
- (void)sendPing;	// IMP=0x00000001013b7564
- (void)onAuthentication:(_Bool)arg1 withStatus:(id)arg2;	// IMP=0x00000001013b7270
- (void)close:(id)arg1;	// IMP=0x00000001013b6f28
- (_Bool)connFail:(int)arg1 error:(id)arg2;	// IMP=0x00000001013b6774
- (void)disConnect:(id)arg1;	// IMP=0x00000001013b66dc
- (id)getUTProtocolType;	// IMP=0x00000001013b64b0
- (void)onConnect;	// IMP=0x00000001013b611c
- (_Bool)asynConnect;	// IMP=0x00000001013b5f28
- (_Bool)valid;	// IMP=0x00000001013b5ef4
- (void)keeplived:(int)arg1 longChain:(_Bool)arg2;	// IMP=0x00000001013b5ed0
- (void)setRetrytimes:(int)arg1;	// IMP=0x00000001013b5ec0
- (void)setConntimes:(int)arg1;	// IMP=0x00000001013b5eb0
- (_Bool)is0RTT;	// IMP=0x00000001013b5bbc
- (_Bool)isAuth;	// IMP=0x00000001013b5b88
- (id)initWithOrigin:(id)arg1 host:(id)arg2 delegate:(id)arg3 policy:(id)arg4 ignLoc:(_Bool)arg5;	// IMP=0x00000001013b55bc
- (NAL_session_t_e4d01b93 *)nalSocketCreate:(id)arg1;	// IMP=0x00000001013b4de4
- (id)configProxiesFromURL:(id)arg1;	// IMP=0x00000001013b4b98

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DataChannel, NSMutableArray, NSRecursiveLock, NSString, NWHostUrl, NWSPDYSession, NWTimer, NWUTChannel;

@interface NWTnetSession : NSObject
{
    int _sessionRunType;	// 8 = 0x8
    DataChannel *_channel;	// 16 = 0x10
    NWSPDYSession *_sucSession;	// 24 = 0x18
    NSMutableArray *_sessions;	// 32 = 0x20
    NSMutableArray *_wastes;	// 40 = 0x28
    NSMutableArray *_watings;	// 48 = 0x30
    NSMutableArray *_sendings;	// 56 = 0x38
    int _policyIndx;	// 64 = 0x40
    unsigned long long _netStatus;	// 72 = 0x48
    int _lazyTag;	// 80 = 0x50
    _Bool _isAuth;	// 84 = 0x54
    _Bool _stop;	// 85 = 0x55
    _Bool _isSuspend;	// 86 = 0x56
    _Bool _isLocalDNS;	// 87 = 0x57
    NSRecursiveLock *_lock;	// 88 = 0x58
    NWUTChannel *_uts;	// 96 = 0x60
    id <NWPolicyGroupProtocol> _policyResultList;	// 104 = 0x68
    double _sessionBeginTime;	// 112 = 0x70
    NSString *_netChangedStr;	// 120 = 0x78
    NWTimer *_timer;	// 128 = 0x80
    NWHostUrl *_hostUrl;	// 136 = 0x88
}

+ (id)netTypeDesc:(unsigned long long)arg1;	// IMP=0x00000001013c59b4
+ (id)descState:(int)arg1;	// IMP=0x00000001013c1228
+ (void)initialize;	// IMP=0x00000001013c11cc
@property(retain, nonatomic) NWHostUrl *hostUrl; // @synthesize hostUrl=_hostUrl;
- (void).cxx_destruct;	// IMP=0x00000001013c6224
- (void)postACCSChannelFail;	// IMP=0x00000001013c61e0
- (void)postACCSChannelSuccess;	// IMP=0x00000001013c61c0
- (void)reportOpenSessionStatus:(id)arg1 error:(id)arg2;	// IMP=0x00000001013c5ed8
- (void)lazyStart;	// IMP=0x00000001013c5d60
- (void)reachabilityChanged;	// IMP=0x00000001013c5a40
- (_Bool)sendCustomFrameType:(unsigned short)arg1 withFlags:(unsigned char)arg2 withData:(id)arg3 sslIndex:(unsigned int)arg4;	// IMP=0x00000001013c58e0
- (void)waitingHandleFail:(id)arg1;	// IMP=0x00000001013c5700
- (void)waitingHandleSuccess;	// IMP=0x00000001013c53d4
- (void)removeURLConnection:(id)arg1;	// IMP=0x00000001013c5330
- (void)connectWithLocalDNS:(id)arg1;	// IMP=0x00000001013c4e48
- (void)issueURLConnection:(id)arg1;	// IMP=0x00000001013c4910
- (void)recvCustomFrameType:(unsigned short)arg1 withFlags:(unsigned char)arg2 withData:(id)arg3;	// IMP=0x00000001013c47a8
- (_Bool)shouldRunNextSession:(id)arg1;	// IMP=0x00000001013c46cc
- (void)onAuthentication:(id)arg1 flags:(_Bool)arg2 sessionError:(id)arg3;	// IMP=0x00000001013c4238
- (void)close:(id)arg1 error:(id)arg2;	// IMP=0x00000001013c3f6c
- (void)onConnFail:(id)arg1 error:(id)arg2;	// IMP=0x00000001013c3c04
- (void)onConnect:(id)arg1;	// IMP=0x00000001013c3a5c
- (void)cancelOtherSession;	// IMP=0x00000001013c3888
- (void)processSessionSuccessEvent:(id)arg1 refreshPolicy:(_Bool *)arg2;	// IMP=0x00000001013c3780
- (id)getValidSession;	// IMP=0x00000001013c3738
- (_Bool)vaildSessionWithPolicys:(id)arg1;	// IMP=0x00000001013c357c
- (_Bool)vaildSession;	// IMP=0x00000001013c3510
- (_Bool)findAcsConnection:(id)arg1;	// IMP=0x00000001013c33c4
- (void)resumeWhenSuspend:(id)arg1 unit:(id)arg2;	// IMP=0x00000001013c320c
- (void)suspend;	// IMP=0x00000001013c3038
- (void)stop:(id)arg1;	// IMP=0x00000001013c2e44
- (void)stopWithScenes:(id)arg1;	// IMP=0x00000001013c2e38
- (void)start:(int)arg1;	// IMP=0x00000001013c2da8
- (void)start;	// IMP=0x00000001013c2d6c
- (id)currentIP;	// IMP=0x00000001013c2d38
- (id)getSessionPolicy;	// IMP=0x00000001013c2c1c
- (void)runIpPolicyss:(id)arg1;	// IMP=0x00000001013c2684
- (void)runNextSession:(id)arg1;	// IMP=0x00000001013c2604
- (void)runSession;	// IMP=0x00000001013c2454
- (_Bool)whetherLazy;	// IMP=0x00000001013c22e0
- (void)resetUTData;	// IMP=0x00000001013c2284
- (void)resetPolicy;	// IMP=0x00000001013c2214
- (void)reset;	// IMP=0x00000001013c2084
- (id)getPolicyResult;	// IMP=0x00000001013c1c30
- (void)stopTimer;	// IMP=0x00000001013c1b68
- (void)onConnectTimeout;	// IMP=0x00000001013c181c
- (void)startTimer;	// IMP=0x00000001013c1728
- (void)dealloc;	// IMP=0x00000001013c1650
- (id)initWithHostUrl:(id)arg1;	// IMP=0x00000001013c1340
- (void)setSessionRunType:(int)arg1;	// IMP=0x00000001013c1308

@end


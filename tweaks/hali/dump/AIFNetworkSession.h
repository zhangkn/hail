//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFHTTPSessionManager, AIFNetworkStatisticsItem, NSError, NSHTTPURLResponse, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSTimer, NSURLSessionDataTask;

@interface AIFNetworkSession : NSObject
{
    double _beginTime;	// 8 = 0x8
    double _endTime;	// 16 = 0x10
    struct __CFRunLoopSource *_runLoopSource;	// 24 = 0x18
    NSString *_method;	// 32 = 0x20
    _Bool _isSynRequest;	// 40 = 0x28
    _Bool _isUseHttpDNS;	// 41 = 0x29
    _Bool _isEnableCache;	// 42 = 0x2a
    _Bool _isCheckAEHttpBodyCode;	// 43 = 0x2b
    _Bool _bFirstRequest;	// 44 = 0x2c
    int _currentRetryIndex;	// 48 = 0x30
    double _timeoutInterval;	// 56 = 0x38
    unsigned long long _cachePolicy;	// 64 = 0x40
    NSString *_requestID;	// 72 = 0x48
    unsigned long long _retryCount;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_completionQueue;	// 88 = 0x58
    id _responseObject;	// 96 = 0x60
    NSHTTPURLResponse *_response;	// 104 = 0x68
    NSError *_error;	// 112 = 0x70
    unsigned long long _attemptCount;	// 120 = 0x78
    CDUnknownBlockType _succBlock;	// 128 = 0x80
    CDUnknownBlockType _failBlock;	// 136 = 0x88
    NSTimer *_synTimer;	// 144 = 0x90
    NSMutableDictionary *_bodyParam;	// 152 = 0x98
    NSString *_runLoopMode;	// 160 = 0xa0
    AIFNetworkStatisticsItem *_statisticsItem;	// 168 = 0xa8
    NSMutableDictionary *_httpHeaderFields;	// 176 = 0xb0
    NSString *_urlString;	// 184 = 0xb8
    AFHTTPSessionManager *_sessionManager;	// 192 = 0xc0
    NSURLSessionDataTask *_dataTask;	// 200 = 0xc8
    NSError *_responseError;	// 208 = 0xd0
}

+ (id)currentURLSessionConfiguration;	// IMP=0x00000001010513d8
+ (id)session;	// IMP=0x0000000101050f50
@property(retain, nonatomic) NSError *responseError; // @synthesize responseError=_responseError;
@property(retain, nonatomic) NSURLSessionDataTask *dataTask; // @synthesize dataTask=_dataTask;
@property(readonly, nonatomic) AFHTTPSessionManager *sessionManager; // @synthesize sessionManager=_sessionManager;
@property(retain, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(retain, nonatomic) NSMutableDictionary *httpHeaderFields; // @synthesize httpHeaderFields=_httpHeaderFields;
@property(nonatomic) int currentRetryIndex; // @synthesize currentRetryIndex=_currentRetryIndex;
@property(nonatomic) _Bool bFirstRequest; // @synthesize bFirstRequest=_bFirstRequest;
@property(retain, nonatomic) AIFNetworkStatisticsItem *statisticsItem; // @synthesize statisticsItem=_statisticsItem;
@property(nonatomic) NSString *runLoopMode; // @synthesize runLoopMode=_runLoopMode;
@property(retain, nonatomic) NSMutableDictionary *bodyParam; // @synthesize bodyParam=_bodyParam;
@property(retain, nonatomic) NSTimer *synTimer; // @synthesize synTimer=_synTimer;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType succBlock; // @synthesize succBlock=_succBlock;
@property(nonatomic) unsigned long long attemptCount; // @synthesize attemptCount=_attemptCount;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property _Bool isCheckAEHttpBodyCode; // @synthesize isCheckAEHttpBodyCode=_isCheckAEHttpBodyCode;
@property(readonly, nonatomic) NSHTTPURLResponse *response; // @synthesize response=_response;
@property(readonly, nonatomic) id responseObject; // @synthesize responseObject=_responseObject;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(readonly, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(nonatomic) unsigned long long cachePolicy; // @synthesize cachePolicy=_cachePolicy;
@property(nonatomic) _Bool isEnableCache; // @synthesize isEnableCache=_isEnableCache;
@property(nonatomic) _Bool isUseHttpDNS; // @synthesize isUseHttpDNS=_isUseHttpDNS;
@property(nonatomic) _Bool isSynRequest; // @synthesize isSynRequest=_isSynRequest;
@property double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
- (void).cxx_destruct;	// IMP=0x00000001010539e0
- (void)cancel;	// IMP=0x0000000101053594
- (id)dataTaskWithHTTPMethod:(id)arg1 URLString:(id)arg2 parameters:(id)arg3 uploadProgress:(CDUnknownBlockType)arg4 downloadProgress:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000101052f1c
- (void)monitorOutput:(id)arg1;	// IMP=0x0000000101052ce4
- (id)description;	// IMP=0x0000000101052cb8
- (void)markTimeEnd;	// IMP=0x0000000101052c5c
- (void)markTimeBegin;	// IMP=0x0000000101052c30
- (void)notifyFail:(id)arg1;	// IMP=0x0000000101052b2c
- (void)addRequestHeader:(id)arg1 value:(id)arg2;	// IMP=0x0000000101052acc
- (void)recordStatistics:(id)arg1;	// IMP=0x000000010105284c
- (_Bool)checkError:(id)arg1 orginError:(id)arg2 readyOnlyBodyResponseObject:(id)arg3 aifNetorkError:(id *)arg4;	// IMP=0x0000000101052224
- (_Bool)createDataTask:(id)arg1 URLString:(id)arg2 bodyParam:(id)arg3 success:(CDUnknownBlockType)arg4 fail:(CDUnknownBlockType)arg5;	// IMP=0x0000000101051560
- (_Bool)startPOSTRequest:(id)arg1 bodyParam:(id)arg2 success:(CDUnknownBlockType)arg3 fail:(CDUnknownBlockType)arg4;	// IMP=0x0000000101051334
- (_Bool)startGETRequest:(id)arg1 bodyParam:(id)arg2 success:(CDUnknownBlockType)arg3 fail:(CDUnknownBlockType)arg4;	// IMP=0x0000000101051290
- (_Bool)startURLRequest:(id)arg1 URLString:(id)arg2 bodyParam:(id)arg3 success:(CDUnknownBlockType)arg4 fail:(CDUnknownBlockType)arg5;	// IMP=0x00000001010511d8
- (void)initIvars;	// IMP=0x0000000101051074
- (id)initWithRequestId:(id)arg1;	// IMP=0x0000000101050fd8
- (id)init;	// IMP=0x0000000101050f80

@end

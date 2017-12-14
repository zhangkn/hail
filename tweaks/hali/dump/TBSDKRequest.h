//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBSDKConnectionDelegate.h"
#import "TBSDKProgressDelegate.h"

@class NSArray, NSData, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSString, NSURL, TBSDKConnection;

@interface TBSDKRequest : NSObject <TBSDKConnectionDelegate, TBSDKProgressDelegate>
{
    _Bool _useHTTPCache;	// 8 = 0x8
    _Bool _forceRefresh;	// 9 = 0x9
    _Bool _isAvalancheCache;	// 10 = 0xa
    _Bool _isUseHttps;	// 11 = 0xb
    _Bool _isUseHttpPost;	// 12 = 0xc
    _Bool _isEnableWua;	// 13 = 0xd
    _Bool _priorityFlag;	// 14 = 0xe
    int _responseStatusCode;	// 16 = 0x10
    int _gzipLimitedSize;	// 20 = 0x14
    int _wuaFlag;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
    id <TBSDKRequestDelegate> _delegate;	// 40 = 0x28
    id <TBSDKRequestDataSource> _dataSource;	// 48 = 0x30
    id <TBSDKRequestProgressProtocol> _requestProgressDelegate;	// 56 = 0x38
    TBSDKConnection *_request;	// 64 = 0x40
    NSURL *_url;	// 72 = 0x48
    NSString *_customHost;	// 80 = 0x50
    NSArray *_customHostList;	// 88 = 0x58
    double _timeOutSeconds;	// 96 = 0x60
    NSData *_responseData;	// 104 = 0x68
    NSString *_responseString;	// 112 = 0x70
    NSDictionary *_responseHeaders;	// 120 = 0x78
    NSDictionary *_requestHeaders;	// 128 = 0x80
    NSString *_apiMethod;	// 136 = 0x88
    NSArray *_blackCacheKeyParam;	// 144 = 0x90
    NSMutableDictionary *_networkDataSet;	// 152 = 0x98
    double _operationQueueTime;	// 160 = 0xa0
    double _networkFinishedTime;	// 168 = 0xa8
    NSString *_userId;	// 176 = 0xb0
    NSString *_apiName;	// 184 = 0xb8
    NSString *_apiVersion;	// 192 = 0xc0
    NSMutableDictionary *_protocolParameters;	// 200 = 0xc8
    NSMutableDictionary *_httpHeaders;	// 208 = 0xd0
    NSMutableDictionary *_extParameters;	// 216 = 0xd8
    NSMutableDictionary *_bizParameters;	// 224 = 0xe0
    NSMutableDictionary *_priorityData;	// 232 = 0xe8
    NSMutableArray *_uploadFiles;	// 240 = 0xf0
    NSString *_unitPrefix;	// 248 = 0xf8
    id _context;	// 256 = 0x100
}

+ (id)urlEncode:(id)arg1;	// IMP=0x0000000101386000
+ (id)dict2QueryString:(id)arg1;	// IMP=0x0000000101385c18
+ (void)cancelTBSDKAllRequest;	// IMP=0x0000000101383dcc
+ (void)initialize;	// IMP=0x0000000101381c58
@property(nonatomic) _Bool priorityFlag; // @synthesize priorityFlag=_priorityFlag;
@property(nonatomic) int wuaFlag; // @synthesize wuaFlag=_wuaFlag;
@property(nonatomic) _Bool isEnableWua; // @synthesize isEnableWua=_isEnableWua;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(retain, nonatomic) NSString *unitPrefix; // @synthesize unitPrefix=_unitPrefix;
@property(nonatomic) _Bool isUseHttpPost; // @synthesize isUseHttpPost=_isUseHttpPost;
@property(nonatomic) _Bool isUseHttps; // @synthesize isUseHttps=_isUseHttps;
@property(retain, nonatomic) NSMutableArray *uploadFiles; // @synthesize uploadFiles=_uploadFiles;
@property(retain, nonatomic) NSMutableDictionary *priorityData; // @synthesize priorityData=_priorityData;
@property(retain, nonatomic) NSMutableDictionary *bizParameters; // @synthesize bizParameters=_bizParameters;
@property(retain, nonatomic) NSMutableDictionary *extParameters; // @synthesize extParameters=_extParameters;
@property(retain, nonatomic) NSMutableDictionary *httpHeaders; // @synthesize httpHeaders=_httpHeaders;
@property(retain, nonatomic) NSMutableDictionary *protocolParameters; // @synthesize protocolParameters=_protocolParameters;
@property(retain, nonatomic) NSString *apiVersion; // @synthesize apiVersion=_apiVersion;
@property(retain, nonatomic) NSString *apiName; // @synthesize apiName=_apiName;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(nonatomic) double networkFinishedTime; // @synthesize networkFinishedTime=_networkFinishedTime;
@property(nonatomic) double operationQueueTime; // @synthesize operationQueueTime=_operationQueueTime;
@property(retain, nonatomic) NSMutableDictionary *networkDataSet; // @synthesize networkDataSet=_networkDataSet;
@property(retain, nonatomic) NSArray *blackCacheKeyParam; // @synthesize blackCacheKeyParam=_blackCacheKeyParam;
@property(nonatomic) int gzipLimitedSize; // @synthesize gzipLimitedSize=_gzipLimitedSize;
@property(nonatomic) _Bool isAvalancheCache; // @synthesize isAvalancheCache=_isAvalancheCache;
@property(retain, nonatomic) NSString *apiMethod; // @synthesize apiMethod=_apiMethod;
@property(nonatomic) _Bool forceRefresh; // @synthesize forceRefresh=_forceRefresh;
@property(nonatomic) _Bool useHTTPCache; // @synthesize useHTTPCache=_useHTTPCache;
@property(retain, nonatomic) NSDictionary *requestHeaders; // @synthesize requestHeaders=_requestHeaders;
@property(readonly, nonatomic) NSDictionary *responseHeaders; // @synthesize responseHeaders=_responseHeaders;
@property(nonatomic) int responseStatusCode; // @synthesize responseStatusCode=_responseStatusCode;
@property(retain, nonatomic) NSString *responseString; // @synthesize responseString=_responseString;
@property(retain, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
@property(nonatomic) double timeOutSeconds; // @synthesize timeOutSeconds=_timeOutSeconds;
@property(retain, nonatomic) NSArray *customHostList; // @synthesize customHostList=_customHostList;
@property(retain, nonatomic) NSString *customHost; // @synthesize customHost=_customHost;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) TBSDKConnection *request; // @synthesize request=_request;
@property(nonatomic) __weak id <TBSDKRequestProgressProtocol> requestProgressDelegate; // @synthesize requestProgressDelegate=_requestProgressDelegate;
@property(nonatomic) __weak id <TBSDKRequestDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <TBSDKRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;	// IMP=0x00000001013867c4
- (int)wuaTypeMapRealFlag:(int)arg1;	// IMP=0x00000001013861f8
- (id)generateWUAWithRequest:(int)arg1 appkey:(id)arg2 timestamp:(id)arg3;	// IMP=0x0000000101386118
- (id)getMwua:(id)arg1;	// IMP=0x0000000101386090
- (id)getApiURL4Env;	// IMP=0x0000000101385870
- (id)getRequestURL;	// IMP=0x0000000101385570
- (void)reset;	// IMP=0x0000000101385510
- (void)addUploadFileWithData:(id)arg1 fileName:(id)arg2 forKey:(id)arg3;	// IMP=0x00000001013853bc
- (void)removeBizParameter:(id)arg1;	// IMP=0x0000000101385330
- (void)addPriorityData:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000101385238
- (void)addBizParameter:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000101385140
- (void)removeExtParameter:(id)arg1;	// IMP=0x00000001013850b4
- (void)addExtParameter:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000101384fc4
- (void)addHttpHeader:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000101384ec8
- (void)addProtocolParameter:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000101384da4
- (id)initWithApiName:(id)arg1 apiVersion:(id)arg2;	// IMP=0x0000000101384cb8
- (id)init;	// IMP=0x0000000101384c2c
- (void)clearResponseForCache;	// IMP=0x0000000101384bb4
- (void)request:(id)arg1 didSendBytes:(long long)arg2;	// IMP=0x0000000101384ad0
- (void)setProgress:(float)arg1;	// IMP=0x0000000101384988
- (void)request:(id)arg1 didReceiveData:(id)arg2;	// IMP=0x00000001013848a8
- (void)requestFailed:(id)arg1;	// IMP=0x000000010138479c
- (void)requestFinished:(id)arg1;	// IMP=0x00000001013845c0
- (void)requestNetworkDataSet:(id)arg1 withFinishedTime:(double)arg2;	// IMP=0x0000000101384514
- (void)request:(id)arg1 didReceiveResponseHeaders:(id)arg2;	// IMP=0x00000001013843dc
- (void)requestStarted:(id)arg1;	// IMP=0x000000010138430c
- (void)installCookies:(id)arg1;	// IMP=0x0000000101384180
- (void)setResponse;	// IMP=0x0000000101383e74
- (_Bool)isResponseCompressed;	// IMP=0x0000000101383de0
- (void)cancelTBSDKAllRequest;	// IMP=0x0000000101383db8
- (void)cancelRequest;	// IMP=0x0000000101383da0
- (void)startAsynchronous;	// IMP=0x0000000101383c34
- (_Bool)startSynchronous;	// IMP=0x000000010138383c
- (id)getMTOPCookies;	// IMP=0x0000000101383618
- (void)setCookies;	// IMP=0x00000001013834b4
- (void)setRequestPostData;	// IMP=0x00000001013832a4
- (void)setRequestPostValue;	// IMP=0x00000001013830c8
- (id)getMtopSign;	// IMP=0x0000000101382b8c
- (void)setHTTPRequestHeader;	// IMP=0x0000000101382284
- (void)installRequest;	// IMP=0x0000000101381dd4
- (void)dealloc;	// IMP=0x0000000101381d04

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

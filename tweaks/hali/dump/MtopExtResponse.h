//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class Error, MtopExtRequest, NSData, NSDictionary, NSMutableDictionary, NSString, NSURL;

@interface MtopExtResponse : NSObject
{
    _Bool _isFromCache;	// 8 = 0x8
    _Bool _isCacheExpired;	// 9 = 0x9
    _Bool _isLoginCancel;	// 10 = 0xa
    int _httpResponseCode;	// 12 = 0xc
    Error *_error;	// 16 = 0x10
    NSMutableDictionary *_headers;	// 24 = 0x18
    NSData *_rawbody;	// 32 = 0x20
    NSString *_body;	// 40 = 0x28
    NSDictionary *_json;	// 48 = 0x30
    MtopExtRequest *_request;	// 56 = 0x38
    NSURL *_requestURL;	// 64 = 0x40
    NSString *_requestMethod;	// 72 = 0x48
    NSDictionary *_requestHeaders;	// 80 = 0x50
    NSData *_requestBody;	// 88 = 0x58
}

@property(nonatomic) _Bool isLoginCancel; // @synthesize isLoginCancel=_isLoginCancel;
@property(retain, nonatomic) NSData *requestBody; // @synthesize requestBody=_requestBody;
@property(retain, nonatomic) NSDictionary *requestHeaders; // @synthesize requestHeaders=_requestHeaders;
@property(retain, nonatomic) NSString *requestMethod; // @synthesize requestMethod=_requestMethod;
@property(retain, nonatomic) NSURL *requestURL; // @synthesize requestURL=_requestURL;
@property(retain, nonatomic) MtopExtRequest *request; // @synthesize request=_request;
@property(nonatomic) _Bool isCacheExpired; // @synthesize isCacheExpired=_isCacheExpired;
@property(nonatomic) _Bool isFromCache; // @synthesize isFromCache=_isFromCache;
@property(retain, nonatomic) NSDictionary *json; // @synthesize json=_json;
@property(retain, nonatomic) NSString *body; // @synthesize body=_body;
@property(retain, nonatomic) NSData *rawbody; // @synthesize rawbody=_rawbody;
@property(retain, nonatomic) NSMutableDictionary *headers; // @synthesize headers=_headers;
@property(retain, nonatomic) Error *error; // @synthesize error=_error;
@property(nonatomic) int httpResponseCode; // @synthesize httpResponseCode=_httpResponseCode;
- (void).cxx_destruct;	// IMP=0x0000000101d41c24
- (id)resolveError:(id)arg1;	// IMP=0x0000000101d40b60
- (id)description;	// IMP=0x0000000101d40750
- (void)removeHeader:(id)arg1;	// IMP=0x0000000101d40730
- (_Bool)validateResponse;	// IMP=0x0000000101d405e8
- (_Bool)isSucceed;	// IMP=0x0000000101d4058c
- (void)fillWithOther:(id)arg1;	// IMP=0x0000000101d40404
- (id)initWithCacheObject:(id)arg1 request:(id)arg2;	// IMP=0x0000000101d40140
- (id)initWithError:(id)arg1 request:(id)arg2;	// IMP=0x0000000101d40070
- (id)initWithRequest:(id)arg1 erequest:(id)arg2;	// IMP=0x0000000101d3faa8
- (id)initWithHttp:(int)arg1 headers:(id)arg2 rawbody:(id)arg3 isFromCache:(_Bool)arg4 request:(id)arg5;	// IMP=0x0000000101d3f7fc

@end


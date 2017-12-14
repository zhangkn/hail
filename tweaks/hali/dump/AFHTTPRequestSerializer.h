//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AFURLRequestSerialization.h"

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface AFHTTPRequestSerializer : NSObject <AFURLRequestSerialization>
{
    _Bool _allowsCellularAccess;	// 8 = 0x8
    _Bool _HTTPShouldHandleCookies;	// 9 = 0x9
    _Bool _HTTPShouldUsePipelining;	// 10 = 0xa
    unsigned long long _stringEncoding;	// 16 = 0x10
    unsigned long long _cachePolicy;	// 24 = 0x18
    unsigned long long _networkServiceType;	// 32 = 0x20
    double _timeoutInterval;	// 40 = 0x28
    NSSet *_HTTPMethodsEncodingParametersInURI;	// 48 = 0x30
    NSMutableSet *_mutableObservedChangedKeyPaths;	// 56 = 0x38
    NSMutableDictionary *_mutableHTTPRequestHeaders;	// 64 = 0x40
    unsigned long long _queryStringSerializationStyle;	// 72 = 0x48
    CDUnknownBlockType _queryStringSerialization;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001008a9970
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x00000001008a97c0
+ (id)serializer;	// IMP=0x00000001008a7500
@property(copy, nonatomic) CDUnknownBlockType queryStringSerialization; // @synthesize queryStringSerialization=_queryStringSerialization;
@property(nonatomic) unsigned long long queryStringSerializationStyle; // @synthesize queryStringSerializationStyle=_queryStringSerializationStyle;
@property(retain, nonatomic) NSMutableDictionary *mutableHTTPRequestHeaders; // @synthesize mutableHTTPRequestHeaders=_mutableHTTPRequestHeaders;
@property(retain, nonatomic) NSMutableSet *mutableObservedChangedKeyPaths; // @synthesize mutableObservedChangedKeyPaths=_mutableObservedChangedKeyPaths;
@property(retain, nonatomic) NSSet *HTTPMethodsEncodingParametersInURI; // @synthesize HTTPMethodsEncodingParametersInURI=_HTTPMethodsEncodingParametersInURI;
@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(nonatomic) unsigned long long networkServiceType; // @synthesize networkServiceType=_networkServiceType;
@property(nonatomic) _Bool HTTPShouldUsePipelining; // @synthesize HTTPShouldUsePipelining=_HTTPShouldUsePipelining;
@property(nonatomic) _Bool HTTPShouldHandleCookies; // @synthesize HTTPShouldHandleCookies=_HTTPShouldHandleCookies;
@property(nonatomic) unsigned long long cachePolicy; // @synthesize cachePolicy=_cachePolicy;
@property(nonatomic) _Bool allowsCellularAccess; // @synthesize allowsCellularAccess=_allowsCellularAccess;
@property(nonatomic) unsigned long long stringEncoding; // @synthesize stringEncoding=_stringEncoding;
- (void).cxx_destruct;	// IMP=0x00000001008a9e90
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001008a9bf4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001008a9b0c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001008a9978
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001008a9864
- (id)requestBySerializingRequest:(id)arg1 withParameters:(id)arg2 error:(id *)arg3;	// IMP=0x00000001008a9270
- (id)requestWithMultipartFormRequest:(id)arg1 writingStreamContentsToFile:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001008a8cb4
- (id)multipartFormRequestWithMethod:(id)arg1 URLString:(id)arg2 parameters:(id)arg3 constructingBodyWithBlock:(CDUnknownBlockType)arg4 error:(id *)arg5;	// IMP=0x00000001008a87dc
- (id)requestWithMethod:(id)arg1 URLString:(id)arg2 parameters:(id)arg3 error:(id *)arg4;	// IMP=0x00000001008a8520
- (void)setQueryStringSerializationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001008a8514
- (void)setQueryStringSerializationWithStyle:(unsigned long long)arg1;	// IMP=0x00000001008a84dc
- (void)clearAuthorizationHeader;	// IMP=0x00000001008a8494
- (void)setAuthorizationHeaderFieldWithUsername:(id)arg1 password:(id)arg2;	// IMP=0x00000001008a837c
- (id)valueForHTTPHeaderField:(id)arg1;	// IMP=0x00000001008a82f8
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;	// IMP=0x00000001008a8264
@property(readonly, nonatomic) NSDictionary *HTTPRequestHeaders;
- (void)dealloc;	// IMP=0x00000001008a7cec
- (id)init;	// IMP=0x00000001008a7528

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


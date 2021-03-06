//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDataDelegate.h"
#import "NSURLSessionTaskDelegate.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSOperation, NSOperationQueue, NSString, NSURLCredential, NSURLSession;

@interface SDWebImageDownloader : NSObject <NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
{
    _Bool _shouldDecompressImages;	// 8 = 0x8
    double _downloadTimeout;	// 16 = 0x10
    long long _executionOrder;	// 24 = 0x18
    NSURLCredential *_urlCredential;	// 32 = 0x20
    NSString *_username;	// 40 = 0x28
    NSString *_password;	// 48 = 0x30
    CDUnknownBlockType _headersFilter;	// 56 = 0x38
    NSOperationQueue *_downloadQueue;	// 64 = 0x40
    NSOperation *_lastAddedOperation;	// 72 = 0x48
    Class _operationClass;	// 80 = 0x50
    NSMutableDictionary *_URLCallbacks;	// 88 = 0x58
    NSMutableDictionary *_HTTPHeaders;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_barrierQueue;	// 104 = 0x68
    NSURLSession *_session;	// 112 = 0x70
}

+ (id)sharedDownloader;	// IMP=0x000000010146ee64
+ (void)initialize;	// IMP=0x000000010146eca0
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *barrierQueue; // @synthesize barrierQueue=_barrierQueue;
@property(retain, nonatomic) NSMutableDictionary *HTTPHeaders; // @synthesize HTTPHeaders=_HTTPHeaders;
@property(retain, nonatomic) NSMutableDictionary *URLCallbacks; // @synthesize URLCallbacks=_URLCallbacks;
@property(nonatomic) Class operationClass; // @synthesize operationClass=_operationClass;
@property(nonatomic) __weak NSOperation *lastAddedOperation; // @synthesize lastAddedOperation=_lastAddedOperation;
@property(retain, nonatomic) NSOperationQueue *downloadQueue; // @synthesize downloadQueue=_downloadQueue;
@property(copy, nonatomic) CDUnknownBlockType headersFilter; // @synthesize headersFilter=_headersFilter;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSURLCredential *urlCredential; // @synthesize urlCredential=_urlCredential;
@property(nonatomic) long long executionOrder; // @synthesize executionOrder=_executionOrder;
@property(nonatomic) double downloadTimeout; // @synthesize downloadTimeout=_downloadTimeout;
@property(nonatomic) _Bool shouldDecompressImages; // @synthesize shouldDecompressImages=_shouldDecompressImages;
- (void).cxx_destruct;	// IMP=0x00000001014713e4
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000101471138
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x0000000101471088
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000101470fbc
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x0000000101470f0c
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000101470e40
- (id)operationWithTask:(id)arg1;	// IMP=0x0000000101470c74
- (void)cancelAllDownloads;	// IMP=0x0000000101470c34
- (void)setSuspended:(_Bool)arg1;	// IMP=0x0000000101470bec
- (void)addProgressCallback:(CDUnknownBlockType)arg1 completedBlock:(CDUnknownBlockType)arg2 forURL:(id)arg3 createCallback:(CDUnknownBlockType)arg4;	// IMP=0x00000001014707ac
- (id)downloadImageWithURL:(id)arg1 options:(unsigned long long)arg2 progress:(CDUnknownBlockType)arg3 completed:(CDUnknownBlockType)arg4;	// IMP=0x000000010146f3ec
@property(nonatomic) long long maxConcurrentDownloads;
@property(readonly, nonatomic) unsigned long long currentDownloadCount;
- (id)valueForHTTPHeaderField:(id)arg1;	// IMP=0x000000010146f2d8
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;	// IMP=0x000000010146f228
- (void)dealloc;	// IMP=0x000000010146f174
- (id)init;	// IMP=0x000000010146ef0c
- (id)localResourceImageWithAliexpressURL:(id)arg1;	// IMP=0x000000010000c34c
- (id)ae_downloadImageWithURL:(id)arg1 options:(unsigned long long)arg2 progress:(CDUnknownBlockType)arg3 completed:(CDUnknownBlockType)arg4;	// IMP=0x000000010000ba3c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


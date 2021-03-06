//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GSDK_GTMSessionFetcher.h"

@class NSData, NSDictionary, NSFileHandle, NSObject<OS_dispatch_queue>, NSString, NSURL, NSURLRequest;

@interface GSDK_GTMSessionUploadFetcher : GSDK_GTMSessionFetcher
{
    GSDK_GTMSessionFetcher *_chunkFetcher;	// 8 = 0x8
    CDUnknownBlockType _delegateCompletionHandler;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_delegateCallbackQueue;	// 24 = 0x18
    long long _initialBodyLength;	// 32 = 0x20
    long long _initialBodySent;	// 40 = 0x28
    NSURL *_uploadLocationURL;	// 48 = 0x30
    NSData *_uploadData;	// 56 = 0x38
    NSFileHandle *_uploadFileHandle;	// 64 = 0x40
    CDUnknownBlockType _uploadDataProvider;	// 72 = 0x48
    long long _uploadFileLength;	// 80 = 0x50
    NSString *_uploadMIMEType;	// 88 = 0x58
    long long _chunkSize;	// 96 = 0x60
    long long _uploadGranularity;	// 104 = 0x68
    _Bool _isPaused;	// 112 = 0x70
    _Bool _isRestartedUpload;	// 113 = 0x71
    _Bool _shouldInitiateOffsetQuery;	// 114 = 0x72
    _Bool _useBackgroundSessionOnChunkFetchers;	// 115 = 0x73
    long long _currentOffset;	// 120 = 0x78
    NSDictionary *_recentChunkReponseHeaders;	// 128 = 0x80
    long long _recentChunkStatusCode;	// 136 = 0x88
    GSDK_GTMSessionFetcher *_fetcherInFlight;	// 144 = 0x90
    _Bool _isSubdataGenerating;	// 152 = 0x98
    _Bool _subdataGenerating;	// 153 = 0x99
    NSURL *_uploadFileURL;	// 160 = 0xa0
    NSURLRequest *_lastChunkRequest;	// 168 = 0xa8
}

+ (void)removePointer:(void *)arg1 fromPointerArray:(id)arg2;	// IMP=0x00000001013069b0
+ (unsigned long long)uploadStatusFromResponseHeaders:(id)arg1;	// IMP=0x0000000101303858
+ (id)uploadFetchersForBackgroundSessions;	// IMP=0x00000001013021a0
+ (id)uploadFetcherForSessionIdentifier:(id)arg1;	// IMP=0x0000000101301fdc
+ (id)uploadFetcherPointerArrayForBackgroundSessions;	// IMP=0x0000000101301f60
+ (id)uploadFetcherWithRequest:(id)arg1 fetcherService:(id)arg2;	// IMP=0x0000000101301e90
+ (id)uploadFetcherForSessionIdentifierMetadata:(id)arg1;	// IMP=0x0000000101301b68
+ (id)uploadFetcherWithLocation:(id)arg1 uploadMIMEType:(id)arg2 chunkSize:(long long)arg3 fetcherService:(id)arg4;	// IMP=0x0000000101301ac8
+ (id)uploadFetcherWithRequest:(id)arg1 uploadMIMEType:(id)arg2 chunkSize:(long long)arg3 fetcherService:(id)arg4;	// IMP=0x0000000101301a24
+ (void)load;	// IMP=0x0000000101301a00
@property long long uploadGranularity; // @synthesize uploadGranularity=_uploadGranularity;
@property _Bool shouldInitiateOffsetQuery; // @synthesize shouldInitiateOffsetQuery=_shouldInitiateOffsetQuery;
@property(getter=isSubdataGenerating) _Bool subdataGenerating; // @synthesize subdataGenerating=_subdataGenerating;
@property(retain) NSURLRequest *lastChunkRequest; // @synthesize lastChunkRequest=_lastChunkRequest;
@property(readonly) CDUnknownBlockType delegateCompletionHandler; // @synthesize delegateCompletionHandler=_delegateCompletionHandler;
@property(readonly) NSObject<OS_dispatch_queue> *delegateCallbackQueue; // @synthesize delegateCallbackQueue=_delegateCallbackQueue;
@property long long currentOffset; // @synthesize currentOffset=_currentOffset;
@property long long chunkSize; // @synthesize chunkSize=_chunkSize;
- (void).cxx_destruct;	// IMP=0x00000001013071cc
- (_Bool)waitForCompletionWithTimeout:(double)arg1;	// IMP=0x0000000101306ee0
@property(readonly) GSDK_GTMSessionFetcher *activeFetcher; // @dynamic activeFetcher;
@property(retain) NSURL *uploadLocationURL; // @synthesize uploadLocationURL=_uploadLocationURL;
- (void)setInitialBodySent:(long long)arg1;	// IMP=0x0000000101306d90
- (long long)initialBodySent;	// IMP=0x0000000101306d58
- (void)setInitialBodyLength:(long long)arg1;	// IMP=0x0000000101306d24
- (long long)initialBodyLength;	// IMP=0x0000000101306cec
@property long long statusCode; // @dynamic statusCode;
- (long long)statusCodeUnsynchronized;	// IMP=0x0000000101306c68
@property(retain) NSDictionary *responseHeaders; // @dynamic responseHeaders;
- (_Bool)canFetchWithBackgroundSession;	// IMP=0x0000000101306b68
- (void)setUseBackgroundSession:(_Bool)arg1;	// IMP=0x0000000101306a8c
- (_Bool)useBackgroundSession;	// IMP=0x0000000101306a54
- (void)stopFetching;	// IMP=0x00000001013068f0
- (void)resumeFetching;	// IMP=0x0000000101306874
- (void)pauseFetching;	// IMP=0x0000000101306830
- (_Bool)isPaused;	// IMP=0x00000001013067f8
- (void)retrieveUploadChunkGranularityFromResponseHeaders:(id)arg1;	// IMP=0x0000000101306790
- (void)invokeDelegateWithDidSendBytes:(long long)arg1 totalBytesSent:(long long)arg2 totalBytesExpectedToSend:(long long)arg3;	// IMP=0x0000000101306574
- (void)destroyChunkFetcher;	// IMP=0x0000000101306344
- (void)chunkFetcher:(id)arg1 finishedWithData:(id)arg2 error:(id)arg3;	// IMP=0x0000000101305ef0
- (id)uploadFetcherWithProperties:(id)arg1 isQueryFetch:(_Bool)arg2;	// IMP=0x0000000101305870
- (id)uploadSessionIdentifierMetadata;	// IMP=0x0000000101305598
- (void)attachSendProgressBlockToChunkFetcher:(id)arg1;	// IMP=0x0000000101305470
- (void)beginChunkFetcher:(id)arg1 offset:(long long)arg2;	// IMP=0x00000001013053d0
- (void)uploadNextChunkWithOffset:(long long)arg1 fetcherProperties:(id)arg2;	// IMP=0x0000000101304b6c
- (void)sendCancelUploadWithFetcherProperties:(id)arg1;	// IMP=0x00000001013049c4
- (void)queryFetcher:(id)arg1 finishedWithData:(id)arg2 error:(id)arg3;	// IMP=0x000000010130474c
- (void)sendQueryForUploadOffsetWithFetcherProperties:(id)arg1;	// IMP=0x0000000101304604
- (void)uploadNextChunkWithOffset:(long long)arg1;	// IMP=0x00000001013045a8
- (void)stopFetchReleasingCallbacks:(_Bool)arg1;	// IMP=0x0000000101304504
- (void)releaseUploadAndBaseCallbacks;	// IMP=0x0000000101304474
- (void)invokeFinalCallbackWithData:(id)arg1 error:(id)arg2 shouldInvalidateLocation:(_Bool)arg3;	// IMP=0x0000000101304270
- (_Bool)shouldReleaseCallbacksUponCompletion;	// IMP=0x0000000101304268
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;	// IMP=0x0000000101304214
- (void)beginChunkFetches;	// IMP=0x0000000101303f8c
- (void)beginFetchWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000101303ba8
@property(retain) GSDK_GTMSessionFetcher *fetcherInFlight; // @dynamic fetcherInFlight;
@property(retain) GSDK_GTMSessionFetcher *chunkFetcher; // @synthesize chunkFetcher=_chunkFetcher;
- (_Bool)isRestartedUpload;	// IMP=0x00000001013039e8
- (void)setDelegateCallbackQueue:(id)arg1;	// IMP=0x0000000101303984
- (void)setCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000101303908
- (id)prematureFailureErrorWithUserInfo:(id)arg1;	// IMP=0x000000010130382c
- (id)uploadChunkUnavailableErrorWithDescription:(id)arg1;	// IMP=0x000000010130374c
- (void)generateChunkSubdataFromFileURL:(id)arg1 offset:(long long)arg2 length:(long long)arg3 response:(CDUnknownBlockType)arg4;	// IMP=0x0000000101303590
- (void)generateChunkSubdataFromFileHandle:(id)arg1 offset:(long long)arg2 length:(long long)arg3 response:(CDUnknownBlockType)arg4;	// IMP=0x0000000101303454
- (void)generateChunkSubdataWithOffset:(long long)arg1 length:(long long)arg2 response:(CDUnknownBlockType)arg3;	// IMP=0x0000000101303008
- (long long)fullUploadLength;	// IMP=0x0000000101302ea4
- (void)setLocationURL:(id)arg1 uploadMIMEType:(id)arg2 chunkSize:(long long)arg3;	// IMP=0x0000000101302db4
- (void)setupRequestHeaders;	// IMP=0x0000000101302b4c
@property(copy) NSString *uploadMIMEType; // @synthesize uploadMIMEType=_uploadMIMEType;
@property(readonly, copy) CDUnknownBlockType uploadDataProvider;
- (void)setUploadDataLength:(long long)arg1 provider:(CDUnknownBlockType)arg2;	// IMP=0x0000000101302978
- (void)setUploadFileLength:(long long)arg1;	// IMP=0x0000000101302944
@property(retain) NSURL *uploadFileURL; // @synthesize uploadFileURL=_uploadFileURL;
@property(retain) NSFileHandle *uploadFileHandle; // @synthesize uploadFileHandle=_uploadFileHandle;
@property(retain) NSData *uploadData; // @synthesize uploadData=_uploadData;

@end


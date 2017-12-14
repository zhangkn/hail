//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMutableArray, NSMutableDictionary, TBCloudService, TBSDKUploadService;

@interface TRDUploadService : NSObject
{
    id <TRDUploadServiceProtocol> _delegate;	// 8 = 0x8
    TBCloudService *_cloudService;	// 16 = 0x10
    TBSDKUploadService *_uploadService;	// 24 = 0x18
    NSMutableDictionary *_uploadQueueForData;	// 32 = 0x20
    NSLock *_uploadQueueLock;	// 40 = 0x28
    NSLock *_uploadFileLock;	// 48 = 0x30
    NSMutableArray *_uploadFileTaskArray;	// 56 = 0x38
    long long _uniqueValueIndex;	// 64 = 0x40
}

@property(nonatomic) long long uniqueValueIndex; // @synthesize uniqueValueIndex=_uniqueValueIndex;
@property(retain, nonatomic) NSMutableArray *uploadFileTaskArray; // @synthesize uploadFileTaskArray=_uploadFileTaskArray;
@property(retain, nonatomic) NSLock *uploadFileLock; // @synthesize uploadFileLock=_uploadFileLock;
@property(retain, nonatomic) NSLock *uploadQueueLock; // @synthesize uploadQueueLock=_uploadQueueLock;
@property(retain, nonatomic) NSMutableDictionary *uploadQueueForData; // @synthesize uploadQueueForData=_uploadQueueForData;
@property(retain, nonatomic) TBSDKUploadService *uploadService; // @synthesize uploadService=_uploadService;
@property(nonatomic) __weak TBCloudService *cloudService; // @synthesize cloudService=_cloudService;
@property(nonatomic) __weak id <TRDUploadServiceProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000101a09d40
- (void)startUploadFile;	// IMP=0x0000000101a08910
- (void)updateFiles:(id)arg1 andUserInfo:(id)arg2 andResponseData:(id)arg3;	// IMP=0x0000000101a08164
- (_Bool)sendRequest:(id)arg1 andRequestItem:(id)arg2;	// IMP=0x0000000101a07458
- (void)sysncUpload:(id)arg1 andRetryTime:(long long)arg2 andUserInfo:(id)arg3;	// IMP=0x0000000101a070f0
- (id)buildRomdonString;	// IMP=0x0000000101a07058
- (id)init;	// IMP=0x0000000101a06fb4

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSMutableArray, NSMutableDictionary, NSString, TFEUploadOptions, TFEUploadParameters, TFEUploadResponse;

@interface TFEUploadSession : NSObject
{
    _Bool _resumable;	// 8 = 0x8
    _Bool _firstPacketGot;	// 9 = 0x9
    _Bool _multipartCancelling;	// 10 = 0xa
    int _retryTimes;	// 12 = 0xc
    int _multipartCancelCount;	// 16 = 0x10
    int _partNumber;	// 20 = 0x14
    NSString *_uniqueIdentifier;	// 24 = 0x18
    TFEUploadParameters *_parameters;	// 32 = 0x20
    TFEUploadResponse *_response;	// 40 = 0x28
    NSString *_md5;	// 48 = 0x30
    unsigned long long _size;	// 56 = 0x38
    unsigned long long _sizeUploaded;	// 64 = 0x40
    unsigned long long _byteSent;	// 72 = 0x48
    long long _status;	// 80 = 0x50
    double _startTime;	// 88 = 0x58
    double _endTime;	// 96 = 0x60
    id _userInfo;	// 104 = 0x68
    NSString *_suffix;	// 112 = 0x70
    double _operationStartTime;	// 120 = 0x78
    NSString *_token;	// 128 = 0x80
    NSMutableArray *_notifications;	// 136 = 0x88
    TFEUploadOptions *_options;	// 144 = 0x90
    NSMutableDictionary *_timeProfilerMap;	// 152 = 0x98
    NSError *_error;	// 160 = 0xa0
    NSString *_uploadId;	// 168 = 0xa8
    NSString *_uploadOssId;	// 176 = 0xb0
    NSMutableDictionary *_partRetryTimeDic;	// 184 = 0xb8
    long long _cancelStatus;	// 192 = 0xc0
    unsigned long long _offset;	// 200 = 0xc8
    NSMutableArray *_segments;	// 208 = 0xd0
    NSMutableArray *_operations;	// 216 = 0xd8
}

+ (id)sessionWithNotification:(id)arg1;	// IMP=0x0000000101076904
+ (id)sessionWithParams:(id)arg1;	// IMP=0x00000001010768a0
@property(retain, nonatomic) NSMutableArray *operations; // @synthesize operations=_operations;
@property(retain, nonatomic) NSMutableArray *segments; // @synthesize segments=_segments;
@property(nonatomic) int partNumber; // @synthesize partNumber=_partNumber;
@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(nonatomic) int multipartCancelCount; // @synthesize multipartCancelCount=_multipartCancelCount;
@property(nonatomic) _Bool multipartCancelling; // @synthesize multipartCancelling=_multipartCancelling;
@property(nonatomic) long long cancelStatus; // @synthesize cancelStatus=_cancelStatus;
@property(retain, nonatomic) NSMutableDictionary *partRetryTimeDic; // @synthesize partRetryTimeDic=_partRetryTimeDic;
@property(nonatomic) int retryTimes; // @synthesize retryTimes=_retryTimes;
@property(retain, nonatomic) NSString *uploadOssId; // @synthesize uploadOssId=_uploadOssId;
@property(retain, nonatomic) NSString *uploadId; // @synthesize uploadId=_uploadId;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSMutableDictionary *timeProfilerMap; // @synthesize timeProfilerMap=_timeProfilerMap;
@property(retain, nonatomic) TFEUploadOptions *options; // @synthesize options=_options;
@property(retain, nonatomic) NSMutableArray *notifications; // @synthesize notifications=_notifications;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(nonatomic) double operationStartTime; // @synthesize operationStartTime=_operationStartTime;
@property(nonatomic) _Bool firstPacketGot; // @synthesize firstPacketGot=_firstPacketGot;
@property(retain, nonatomic) NSString *suffix; // @synthesize suffix=_suffix;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool resumable; // @synthesize resumable=_resumable;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) unsigned long long byteSent; // @synthesize byteSent=_byteSent;
@property(nonatomic) unsigned long long sizeUploaded; // @synthesize sizeUploaded=_sizeUploaded;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) TFEUploadResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) TFEUploadParameters *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (void).cxx_destruct;	// IMP=0x00000001010781b4
@property(readonly, nonatomic) NSString *responseUrl;
- (void)release:(id)arg1;	// IMP=0x0000000101077b5c
- (void)enter:(id)arg1;	// IMP=0x0000000101077b58
- (id)shallowCopy;	// IMP=0x00000001010778cc
- (id)description;	// IMP=0x00000001010775e4
- (void)addNotification:(id)arg1;	// IMP=0x0000000101077560
@property(readonly, nonatomic) _Bool blockUploadCompleted;
- (void)callProgress:(int)arg1;	// IMP=0x00000001010772dc
- (void)callStart;	// IMP=0x0000000101077230
- (void)callCompleteBySuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x0000000101076d8c
- (void)callCanceled;	// IMP=0x0000000101076cfc
- (void)callFailedByError:(id)arg1;	// IMP=0x0000000101076c90
- (void)callSuccess;	// IMP=0x0000000101076c30
- (void)removeOperation:(id)arg1;	// IMP=0x0000000101076bac
- (_Bool)isFinished;	// IMP=0x0000000101076b78
- (_Bool)isCanceled;	// IMP=0x0000000101076b60
- (id)init;	// IMP=0x00000001010769a0
- (id)initWithNothing;	// IMP=0x0000000101076968

@end


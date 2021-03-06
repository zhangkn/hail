//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UTMCDeviceInfo, UTMCEventStreamStrategy;

@interface UTMCGlobalVariables : NSObject
{
    struct dispatch_queue_s *mUploadQueue;	// 8 = 0x8
    struct dispatch_queue_s *mAddLogQueue;	// 16 = 0x10
    _Bool mIsSecuritySDKSupport;	// 24 = 0x18
    _Bool mCanForceUpload;	// 25 = 0x19
    _Bool mIsRealTimeDebug;	// 26 = 0x1a
    _Bool mSyncOnlineConfStatus;	// 27 = 0x1b
    _Bool mIsOldDevice;	// 28 = 0x1c
    _Bool mIsRealTimeDebugNoSample;	// 29 = 0x1d
    int mUploadLag;	// 32 = 0x20
    NSString *mAppKey;	// 40 = 0x28
    NSString *mSDKVersion;	// 48 = 0x30
    NSString *mAppSecret;	// 56 = 0x38
    NSString *mChannel;	// 64 = 0x40
    NSString *mLongNick;	// 72 = 0x48
    NSString *mNick;	// 80 = 0x50
    NSString *mUserId;	// 88 = 0x58
    NSString *mLongUserId;	// 96 = 0x60
    UTMCDeviceInfo *mDeviceInfo;	// 104 = 0x68
    NSString *mDebugId;	// 112 = 0x70
    NSString *mUploadUrl;	// 120 = 0x78
    NSString *mConfUrl;	// 128 = 0x80
    NSString *mAbtestUrl;	// 136 = 0x88
    id <UTIRequestAuthentication> mRequestAuth;	// 144 = 0x90
    NSString *mAssistDebugId;	// 152 = 0x98
    NSString *mTPKttid;	// 160 = 0xa0
    UTMCEventStreamStrategy *_mEventStreamStrategy;	// 168 = 0xa8
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000101a92f1c
+ (id)getInstance;	// IMP=0x0000000101a92e44
@property(retain) UTMCEventStreamStrategy *mEventStreamStrategy; // @synthesize mEventStreamStrategy=_mEventStreamStrategy;
@property(retain) NSString *mTPKttid; // @synthesize mTPKttid;
@property _Bool mIsRealTimeDebugNoSample; // @synthesize mIsRealTimeDebugNoSample;
@property _Bool mIsOldDevice; // @synthesize mIsOldDevice;
@property(retain) NSString *mAssistDebugId; // @synthesize mAssistDebugId;
@property _Bool mSyncOnlineConfStatus; // @synthesize mSyncOnlineConfStatus;
@property(retain) id <UTIRequestAuthentication> mRequestAuth; // @synthesize mRequestAuth;
@property(retain) NSString *mAbtestUrl; // @synthesize mAbtestUrl;
@property(retain) NSString *mConfUrl; // @synthesize mConfUrl;
@property _Bool mIsRealTimeDebug; // @synthesize mIsRealTimeDebug;
@property _Bool mCanForceUpload; // @synthesize mCanForceUpload;
@property(retain) NSString *mUploadUrl; // @synthesize mUploadUrl;
@property _Bool mIsSecuritySDKSupport; // @synthesize mIsSecuritySDKSupport;
@property int mUploadLag; // @synthesize mUploadLag;
@property(retain) NSString *mDebugId; // @synthesize mDebugId;
@property(retain) UTMCDeviceInfo *mDeviceInfo; // @synthesize mDeviceInfo;
@property(retain) NSString *mLongUserId; // @synthesize mLongUserId;
@property(retain) NSString *mUserId; // @synthesize mUserId;
@property(retain) NSString *mNick; // @synthesize mNick;
@property(retain) NSString *mLongNick; // @synthesize mLongNick;
@property(retain) NSString *mChannel; // @synthesize mChannel;
@property(retain) NSString *mAppSecret; // @synthesize mAppSecret;
@property(retain) NSString *mSDKVersion; // @synthesize mSDKVersion;
@property(retain) NSString *mAppKey; // @synthesize mAppKey;
- (void).cxx_destruct;	// IMP=0x0000000101a936f0
- (struct dispatch_queue_s *)addLogDispatchSerialQueue;	// IMP=0x0000000101a932fc
- (struct dispatch_queue_s *)upLoadDispatchSerialQueue;	// IMP=0x0000000101a932ec
- (id)initAfterinit;	// IMP=0x0000000101a93298
- (id)init;	// IMP=0x0000000101a92f40
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000101a92f3c

@end


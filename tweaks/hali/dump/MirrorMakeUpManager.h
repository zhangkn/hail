//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MirrorDownloaderDelegate.h"
#import "MirrorGetMaterialDelegate.h"

@class MirrorDownload, MirrorMaterialManager, MirrorMulticastDelegate<MirrorMakeUpManagerDelegate>, MirrorNetworkAdapter, NSString, TBBizDownloadTask;

@interface MirrorMakeUpManager : NSObject <MirrorDownloaderDelegate, MirrorGetMaterialDelegate>
{
    int _materialType;	// 8 = 0x8
    MirrorMulticastDelegate<MirrorMakeUpManagerDelegate> *_multicastDelegate;	// 16 = 0x10
    NSString *_deviceSupportMakeUp;	// 24 = 0x18
    NSString *_cacheKeyFaceModel;	// 32 = 0x20
    MirrorNetworkAdapter *_getDownLadUrlNetWorkManager;	// 40 = 0x28
    MirrorDownload *_downloadManager;	// 48 = 0x30
    CDUnknownBlockType _makeUpCallBack;	// 56 = 0x38
    MirrorMaterialManager *_materialManager;	// 64 = 0x40
    TBBizDownloadTask *_tbDownload;	// 72 = 0x48
    MirrorNetworkAdapter *_isSupportNetWork;	// 80 = 0x50
}

+ (void)updateIsSupportFormServerWithBizType:(long long)arg1 hasCache:(_Bool)arg2 successCallBack:(CDUnknownBlockType)arg3 failCallBack:(CDUnknownBlockType)arg4;	// IMP=0x000000010135e2b4
+ (void)isSupportMakeUpWithBizType:(long long)arg1 successCallBack:(CDUnknownBlockType)arg2 failCallBack:(CDUnknownBlockType)arg3;	// IMP=0x000000010135e01c
+ (id)getOSVersion;	// IMP=0x000000010135dff0
+ (id)sharedInstance;	// IMP=0x000000010135c89c
@property(retain, nonatomic) MirrorNetworkAdapter *isSupportNetWork; // @synthesize isSupportNetWork=_isSupportNetWork;
@property(retain, nonatomic) TBBizDownloadTask *tbDownload; // @synthesize tbDownload=_tbDownload;
@property(retain, nonatomic) MirrorMaterialManager *materialManager; // @synthesize materialManager=_materialManager;
@property(copy, nonatomic) CDUnknownBlockType makeUpCallBack; // @synthesize makeUpCallBack=_makeUpCallBack;
@property(retain, nonatomic) MirrorDownload *downloadManager; // @synthesize downloadManager=_downloadManager;
@property(retain, nonatomic) MirrorNetworkAdapter *getDownLadUrlNetWorkManager; // @synthesize getDownLadUrlNetWorkManager=_getDownLadUrlNetWorkManager;
@property(retain, nonatomic) NSString *cacheKeyFaceModel; // @synthesize cacheKeyFaceModel=_cacheKeyFaceModel;
@property(retain, nonatomic) NSString *deviceSupportMakeUp; // @synthesize deviceSupportMakeUp=_deviceSupportMakeUp;
@property(nonatomic) int materialType; // @synthesize materialType=_materialType;
@property(retain, nonatomic) MirrorMulticastDelegate<MirrorMakeUpManagerDelegate> *multicastDelegate; // @synthesize multicastDelegate=_multicastDelegate;
- (void).cxx_destruct;	// IMP=0x000000010135f470
- (void)dealloc;	// IMP=0x000000010135f1c4
- (void)getMaterialFailWithMsg:(id)arg1;	// IMP=0x000000010135ef0c
- (void)getMaterialSuccess:(id)arg1;	// IMP=0x000000010135ee08
- (void)startGetMaterialFromServer;	// IMP=0x000000010135ee04
- (void)MirrorDownloadFail:(id)arg1 MirrorDownload:(id)arg2;	// IMP=0x000000010135edb8
- (void)MirrorDownloadFinished:(id)arg1 MirrorDownload:(id)arg2;	// IMP=0x000000010135ea34
- (void)MirrorDownloadProgress:(float)arg1 Percentage:(long long)arg2 MirrorDownload:(id)arg3;	// IMP=0x000000010135e9dc
- (void)removeAllDelegate;	// IMP=0x000000010135e9c4
- (void)removeDelegate:(id)arg1;	// IMP=0x000000010135e9ac
- (void)addDelegate:(id)arg1;	// IMP=0x000000010135e994
- (id)takePhotoWithImg:(id)arg1;	// IMP=0x000000010135df68
- (_Bool)beautyWithArrayData:(id)arg1;	// IMP=0x000000010135deec
- (void)makeUpWithArrayData:(id)arg1 materialType:(int)arg2 resultCallBack:(CDUnknownBlockType)arg3;	// IMP=0x000000010135dde8
- (void)resumeDownload;	// IMP=0x000000010135dd14
- (void)pauseDownload;	// IMP=0x000000010135dc40
- (void)cancelDownload;	// IMP=0x000000010135db44
- (id)getFaceModelPath;	// IMP=0x000000010135dab0
- (_Bool)isFaceModelDownLoad;	// IMP=0x000000010135da24
- (void)preDownloadFaceModelWithUrl:(id)arg1 md5:(id)arg2;	// IMP=0x000000010135cf88
- (void)downLoadFaceModel;	// IMP=0x000000010135cba0
- (void)initFaceModel;	// IMP=0x000000010135c928
- (void)initMakeUpModule;	// IMP=0x000000010135c91c
- (id)init;	// IMP=0x000000010135c818
- (void)clear;	// IMP=0x000000010135c778

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


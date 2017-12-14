//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSDKSharing.h"
#import "FBSDKVideoUploaderDelegate.h"

@class ALAssetRepresentation, FBSDKAccessToken, NSFileHandle, NSString;

@interface FBSDKShareAPI : NSObject <FBSDKVideoUploaderDelegate, FBSDKSharing>
{
    NSFileHandle *_fileHandle;	// 8 = 0x8
    ALAssetRepresentation *_assetRepresentation;	// 16 = 0x10
    _Bool _shouldFailOnDataError;	// 24 = 0x18
    id <FBSDKSharingDelegate> _delegate;	// 32 = 0x20
    id <FBSDKSharingContent> _shareContent;	// 40 = 0x28
    FBSDKAccessToken *_accessToken;	// 48 = 0x30
    NSString *_message;	// 56 = 0x38
    NSString *_graphNode;	// 64 = 0x40
}

+ (void)initialize;	// IMP=0x0000000101294df4
+ (id)defaultAssetsLibrary;	// IMP=0x0000000101294d78
+ (id)shareWithContent:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000101294ccc
@property(copy, nonatomic) NSString *graphNode; // @synthesize graphNode=_graphNode;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) FBSDKAccessToken *accessToken; // @synthesize accessToken=_accessToken;
@property(nonatomic) _Bool shouldFailOnDataError; // @synthesize shouldFailOnDataError=_shouldFailOnDataError;
@property(copy, nonatomic) id <FBSDKSharingContent> shareContent; // @synthesize shareContent=_shareContent;
@property(nonatomic) __weak id <FBSDKSharingDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010129a588
- (void)videoUploader:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x000000010129a454
- (void)videoUploader:(id)arg1 didCompleteWithResults:(id)arg2;	// IMP=0x000000010129a2e8
- (id)videoChunkDataForVideoUploader:(id)arg1 startOffset:(unsigned long long)arg2 endOffset:(unsigned long long)arg3;	// IMP=0x000000010129a18c
- (void)_removeFromPendingShareAPI;	// IMP=0x000000010129a0f8
- (_Bool)_addToPendingShareAPI;	// IMP=0x000000010129a038
- (id)_connection:(id)arg1 addRequest:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000101299f38
- (_Bool)_stageValue:(id)arg1 connection:(id)arg2 stagingHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000101299cbc
- (_Bool)_stagePhoto:(id)arg1 connection:(id)arg2 stagingHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010129955c
- (_Bool)_stageOpenGraphValueContainer:(id)arg1 connection:(id)arg2 stagingHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000101298c84
- (_Bool)_stageOpenGraphObject:(id)arg1 connection:(id)arg2 stagingHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001012984fc
- (_Bool)_stageArray:(id)arg1 connection:(id)arg2 stagingHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000101297d7c
- (_Bool)_addEncodedParametersToDictionary:(id)arg1 key:(id)arg2 value:(id)arg3 error:(id *)arg4;	// IMP=0x0000000101297798
- (_Bool)_shareVideoContent:(id)arg1;	// IMP=0x000000010129705c
- (_Bool)_sharePhotoContent:(id)arg1;	// IMP=0x0000000101296638
- (_Bool)_shareOpenGraphContent:(id)arg1;	// IMP=0x0000000101296018
- (_Bool)_shareLinkContent:(id)arg1;	// IMP=0x0000000101295ae8
- (_Bool)_hasPublishActions;	// IMP=0x0000000101295a6c
- (void)_addCommonParameters:(id)arg1 content:(id)arg2;	// IMP=0x00000001012956c4
- (id)_graphPathWithSuffix:(id)arg1;	// IMP=0x00000001012955bc
- (_Bool)validateWithError:(id *)arg1;	// IMP=0x0000000101295360
- (_Bool)share;	// IMP=0x000000010129513c
- (_Bool)createOpenGraphObject:(id)arg1;	// IMP=0x0000000101294ed4
- (_Bool)canShare;	// IMP=0x0000000101294ecc
- (id)init;	// IMP=0x0000000101294e68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

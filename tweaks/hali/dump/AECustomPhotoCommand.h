//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFCommandService.h"

#import "AEPhotoPickerDelegate.h"
#import "AEVideoRecoderVCDelegate.h"
#import "OverlayViewControllerDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class AEMediaUploader, AEOverlayView, AEPhotoPickerVC, NSDictionary, NSMutableArray, NSString, OverlayViewController;

@interface AECustomPhotoCommand : AFCommandService <AEPhotoPickerDelegate, OverlayViewControllerDelegate, AEVideoRecoderVCDelegate, UIImagePickerControllerDelegate, UIActionSheetDelegate, UIAlertViewDelegate, UINavigationControllerDelegate>
{
    AEOverlayView *_pickerOverlayView;	// 8 = 0x8
    AEPhotoPickerVC *_aeImagePicker;	// 16 = 0x10
    OverlayViewController *_overlayViewController;	// 24 = 0x18
    _Bool _canVideoRecord;	// 32 = 0x20
    NSString *_notificationName;	// 40 = 0x28
    NSDictionary *_param;	// 48 = 0x30
    NSMutableArray *_imageInfos;	// 56 = 0x38
    AEMediaUploader *_mediaUpload;	// 64 = 0x40
}

+ (id)paramsDescription;	// IMP=0x00000001000479dc
@property(retain, nonatomic) AEMediaUploader *mediaUpload; // @synthesize mediaUpload=_mediaUpload;
@property(nonatomic) _Bool canVideoRecord; // @synthesize canVideoRecord=_canVideoRecord;
@property(readonly, nonatomic) NSMutableArray *imageInfos; // @synthesize imageInfos=_imageInfos;
@property(readonly, nonatomic) NSDictionary *param; // @synthesize param=_param;
@property(readonly, nonatomic) NSString *notificationName; // @synthesize notificationName=_notificationName;
- (void).cxx_destruct;	// IMP=0x000000010004a7f8
- (void)dealloc;	// IMP=0x000000010004a72c
- (void)imagePickerControllerDidCancel:(id)arg1;	// IMP=0x000000010004a698
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;	// IMP=0x0000000100049e94
- (void)uploadServiceWithData:(id)arg1 fileName:(id)arg2 videoDic:(id)arg3 filePath:(id)arg4;	// IMP=0x00000001000497f4
- (void)didUploadVideoWithAsset:(id)arg1 defaultImage:(id)arg2 fileData:(id)arg3 filePath:(id)arg4 fileName:(id)arg5;	// IMP=0x0000000100049538
- (void)didFinishWithCamera:(id)arg1 target:(long long)arg2;	// IMP=0x00000001000492a0
- (void)gotoAlbumFromCamera:(id)arg1 target:(long long)arg2;	// IMP=0x000000010004913c
- (void)didTakePicture:(id)arg1;	// IMP=0x0000000100049138
- (void)aeImagePickerDidCancel:(id)arg1;	// IMP=0x0000000100048c88
- (void)aeImagePickerController:(id)arg1 enterCameraWithPickedMedia:(id)arg2;	// IMP=0x0000000100048b24
- (void)aeImagePickerController:(id)arg1 didFinishPickingMedia:(id)arg2;	// IMP=0x0000000100048914
- (void)chooseFromLibrary;	// IMP=0x0000000100048614
- (void)takePhoto;	// IMP=0x000000010004819c
- (void)takeVideo;	// IMP=0x0000000100047f50
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;	// IMP=0x0000000100047ecc
- (void)runWithParams:(id)arg1;	// IMP=0x00000001000479e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUIViewController.h"

#import "AFCommandTest.h"
#import "SvCameraDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class AENewScanBottomActionView, AENewScanTopActionView, AEPhotoSearchUploadImageView, AEQRScanVC, NSString, SvCameraViewController, UIView;

@interface AENewScanVC : AEUIViewController <AFCommandTest, UIGestureRecognizerDelegate, SvCameraDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate>
{
    AENewScanTopActionView *_topActionBar;	// 8 = 0x8
    UIView *_contentView;	// 16 = 0x10
    AENewScanBottomActionView *_botttomActionBar;	// 24 = 0x18
    _Bool _hasInit;	// 32 = 0x20
    AEPhotoSearchUploadImageView *_uploadingView;	// 40 = 0x28
    unsigned long long _currentType;	// 48 = 0x30
    AEQRScanVC *_scanVC;	// 56 = 0x38
    SvCameraViewController *_photoSearchVC;	// 64 = 0x40
}

+ (id)paramsToTest;	// IMP=0x0000000100ad5a98
@property(nonatomic) __weak SvCameraViewController *photoSearchVC; // @synthesize photoSearchVC=_photoSearchVC;
@property(nonatomic) __weak AEQRScanVC *scanVC; // @synthesize scanVC=_scanVC;
@property(nonatomic) unsigned long long currentType; // @synthesize currentType=_currentType;
- (void).cxx_destruct;	// IMP=0x0000000100ad5a10
- (_Bool)needTrackPage;	// IMP=0x0000000100ad5980
- (void)showUploadingView:(id)arg1 sourceType:(long long)arg2;	// IMP=0x0000000100ad553c
- (void)imagePickerController:(id)arg1 didFinishPickingImage:(id)arg2 metaData:(id)arg3;	// IMP=0x0000000100ad52dc
- (void)imagePickerControllerDidCancel:(id)arg1;	// IMP=0x0000000100ad51c0
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;	// IMP=0x0000000100ad4d00
- (void)showPhotoSearchTitle;	// IMP=0x0000000100ad4a1c
- (void)showFirstTipView;	// IMP=0x0000000100ad4944
- (void)presentImagePicker:(id)arg1;	// IMP=0x0000000100ad4660
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000100ad4658
- (void)changeScanTypeTo:(unsigned long long)arg1;	// IMP=0x0000000100ad3dc8
- (void)updateUI:(_Bool)arg1;	// IMP=0x0000000100ad3d34
- (void)swipeRight:(id)arg1;	// IMP=0x0000000100ad3d24
- (void)swipeLeft:(id)arg1;	// IMP=0x0000000100ad3d14
- (void)didReceiveMemoryWarning;	// IMP=0x0000000100ad3ce0
- (long long)preferredStatusBarStyle;	// IMP=0x0000000100ad3cd8
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100ad3c80
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100ad3c04
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100ad3b88
- (void)viewDidLoad;	// IMP=0x0000000100ad2ca8
- (id)bottomActionBar;	// IMP=0x0000000100ad2844
- (id)topActionBar;	// IMP=0x0000000100ad233c
- (id)initWithParam:(id)arg1;	// IMP=0x0000000100ad2274

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


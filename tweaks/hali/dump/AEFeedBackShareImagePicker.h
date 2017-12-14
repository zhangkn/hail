//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUIViewController.h"

#import "AEFeedBackSharedInstagramDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class AEFeedbackShareInstagram, NSString, UIImage, UIImagePickerController, UIImageView, UIView;

@interface AEFeedBackShareImagePicker : AEUIViewController <AEFeedBackSharedInstagramDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    _Bool _isDirect;	// 8 = 0x8
    UIView *_maskView;	// 16 = 0x10
    UIView *optionAreaTop;	// 24 = 0x18
    UIView *optionAreaBottom;	// 32 = 0x20
    UIImage *_maskImage;	// 40 = 0x28
    UIImageView *_maskImageView;	// 48 = 0x30
    struct CGRect bounds;	// 56 = 0x38
    id _father;	// 88 = 0x58
    AEFeedbackShareInstagram *_sharer;	// 96 = 0x60
    UIView *caremaView;	// 104 = 0x68
    UIImagePickerController *_imagePicker;	// 112 = 0x70
    NSString *_shareText;	// 120 = 0x78
}

@property(retain, nonatomic) NSString *shareText; // @synthesize shareText=_shareText;
@property(retain, nonatomic) UIImagePickerController *imagePicker; // @synthesize imagePicker=_imagePicker;
- (void).cxx_destruct;	// IMP=0x00000001000ef95c
- (void)imagePickerControllerDidCancel:(id)arg1;	// IMP=0x00000001000ef8c8
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;	// IMP=0x00000001000ef834
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;	// IMP=0x00000001000ef7d8
- (void)doCancelPost:(id)arg1;	// IMP=0x00000001000ef610
- (void)afterShare;	// IMP=0x00000001000ef530
- (void)done;	// IMP=0x00000001000ef3d8
- (void)retake;	// IMP=0x00000001000ef3c0
- (void)takePhoto;	// IMP=0x00000001000ef380
- (void)combine;	// IMP=0x00000001000ef190
- (void)initMaskView;	// IMP=0x00000001000ee9c8
- (void)initBottomBar;	// IMP=0x00000001000ee688
- (void)initHeadBar;	// IMP=0x00000001000ee198
- (id)pageTrackName;	// IMP=0x00000001000ee16c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000ee0f8
- (void)viewDidLoad;	// IMP=0x00000001000ee058
- (void)dealloc;	// IMP=0x00000001000edff8
- (id)initFromBottom:(_Bool)arg1 andFather:(id)arg2;	// IMP=0x00000001000ede18

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

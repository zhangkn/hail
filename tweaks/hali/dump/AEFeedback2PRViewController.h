//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUIViewController.h"

#import "AEImagePreviewControllerDelegate.h"
#import "AEPhotoPickerDelegate.h"
#import "AFCommandTest.h"
#import "Feedback2PhotoReviewDelegate.h"
#import "OverlayViewControllerDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class AEFeedback2PRTableViewHead, AEFeedback4PhotoReviewDTO, AEFeedback4PhotoReviewService, AEImageUploadManager, AEOverlayView, AEPhotoPickerVC, AESelectedImageInfo, NSArray, NSString, OverlayViewController, UIButton, UITableView, UIView;

@interface AEFeedback2PRViewController : AEUIViewController <AFCommandTest, AEImagePreviewControllerDelegate, UIImagePickerControllerDelegate, OverlayViewControllerDelegate, UITableViewDelegate, UITableViewDataSource, UIActionSheetDelegate, AEPhotoPickerDelegate, UINavigationControllerDelegate, Feedback2PhotoReviewDelegate>
{
    long long _currentTag;	// 8 = 0x8
    AEImageUploadManager *_uploadManageer;	// 16 = 0x10
    AEPhotoPickerVC *_aeImagePicker;	// 24 = 0x18
    AEOverlayView *_pickerOverlayView;	// 32 = 0x20
    struct CGRect bounds;	// 40 = 0x28
    UITableView *tableView;	// 72 = 0x48
    long long photoNums;	// 80 = 0x50
    AESelectedImageInfo *tempImgInfo;	// 88 = 0x58
    NSString *trackOrderId;	// 96 = 0x60
    NSString *errType;	// 104 = 0x68
    NSString *trackProductId;	// 112 = 0x70
    NSArray *tempSaveImages;	// 120 = 0x78
    UIView *btArea;	// 128 = 0x80
    UIButton *closeBt;	// 136 = 0x88
    UIButton *feedbackBt;	// 144 = 0x90
    AEFeedback4PhotoReviewService *requestService;	// 152 = 0x98
    AEFeedback4PhotoReviewDTO *feedbackDto;	// 160 = 0xa0
    AEFeedback2PRTableViewHead *headerView;	// 168 = 0xa8
    NSString *titleTxt;	// 176 = 0xb0
    NSString *topicId;	// 184 = 0xb8
    _Bool once;	// 192 = 0xc0
    _Bool _hiddenBanner;	// 193 = 0xc1
    _Bool _isAfertGuideFeedback;	// 194 = 0xc2
    NSString *_orderIds;	// 200 = 0xc8
    id <feedback2PRPostSuccessDelegate> _delegate;	// 208 = 0xd0
    NSString *_publishSource;	// 216 = 0xd8
    OverlayViewController *_overlayViewController;	// 224 = 0xe0
    double _enterTime;	// 232 = 0xe8
    long long _photoReviewCount;	// 240 = 0xf0
}

+ (id)paramsToTest;	// IMP=0x00000001000d76cc
@property(nonatomic) long long photoReviewCount; // @synthesize photoReviewCount=_photoReviewCount;
@property(nonatomic) double enterTime; // @synthesize enterTime=_enterTime;
@property(nonatomic) _Bool isAfertGuideFeedback; // @synthesize isAfertGuideFeedback=_isAfertGuideFeedback;
@property(retain, nonatomic) OverlayViewController *overlayViewController; // @synthesize overlayViewController=_overlayViewController;
@property(retain, nonatomic) NSString *publishSource; // @synthesize publishSource=_publishSource;
@property(nonatomic) _Bool hiddenBanner; // @synthesize hiddenBanner=_hiddenBanner;
@property(nonatomic) __weak id <feedback2PRPostSuccessDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *orderIds; // @synthesize orderIds=_orderIds;
- (void).cxx_destruct;	// IMP=0x00000001000d7514
- (void)didTakePicture:(id)arg1;	// IMP=0x00000001000d7384
- (void)aeImagePreviewController:(id)arg1 didDeletePhotoAtIndex:(long long)arg2;	// IMP=0x00000001000d7254
- (void)aeImagePickerDidCancel:(id)arg1;	// IMP=0x00000001000d6d3c
- (void)aeImagePickerController:(id)arg1 enterCameraWithPickedMedia:(id)arg2;	// IMP=0x00000001000d6b6c
- (void)aeImagePickerController:(id)arg1 didFinishPickingMedia:(id)arg2;	// IMP=0x00000001000d6a14
- (void)checkAndPreUploadImages:(id)arg1;	// IMP=0x00000001000d6758
- (void)dealloc;	// IMP=0x00000001000d66dc
- (void)didReceiveMemoryWarning;	// IMP=0x00000001000d66a8
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000001000d65b0
- (id)optionBt;	// IMP=0x00000001000d57d4
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000001000d57d0
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x00000001000d566c
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000d55f0
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000d5354
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000001000d534c
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x00000001000d5344
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x00000001000d523c
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000001000d5190
- (void)textViewDidBeginEdit:(id)arg1 withSection:(long long)arg2;	// IMP=0x00000001000d510c
- (void)reloadCell:(long long)arg1;	// IMP=0x00000001000d5078
- (void)aeRemovePhoto:(id)arg1;	// IMP=0x00000001000d4eb8
- (void)feedbackGotoPreview:(id)arg1;	// IMP=0x00000001000d4a70
- (void)saveComment:(id)arg1 tag:(long long)arg2;	// IMP=0x00000001000d49d0
- (void)saveSelect:(_Bool)arg1 tag:(long long)arg2;	// IMP=0x00000001000d4948
- (id)configSimpleFeedbackCell:(id)arg1 section:(long long)arg2;	// IMP=0x00000001000d4540
- (id)pageTrackParams;	// IMP=0x00000001000d4470
- (id)pageTrackName;	// IMP=0x00000001000d4428
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001000d429c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000d4228
- (void)gotoAlbumFromCamera:(id)arg1 target:(long long)arg2;	// IMP=0x00000001000d3e18
- (void)didFinishWithCamera:(id)arg1 target:(long long)arg2;	// IMP=0x00000001000d3c30
- (void)cameraAction:(long long)arg1;	// IMP=0x00000001000d3c18
- (void)photoLibraryAction:(long long)arg1;	// IMP=0x00000001000d3c00
- (void)showImagePicker:(long long)arg1 target:(long long)arg2;	// IMP=0x00000001000d3a00
- (void)actionSheetPhotoAction:(long long)arg1;	// IMP=0x00000001000d3824
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;	// IMP=0x00000001000d3234
- (void)feedbackAddNewPhoto:(id)arg1;	// IMP=0x00000001000d2e70
- (void)photoLibraryCellAction:(long long)arg1;	// IMP=0x00000001000d2b2c
- (void)photoCellAction:(long long)arg1;	// IMP=0x00000001000d2868
- (_Bool)checkContent;	// IMP=0x00000001000d2504
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;	// IMP=0x00000001000d236c
- (void)doCancelPost;	// IMP=0x00000001000d20d8
- (void)doPost:(id)arg1;	// IMP=0x00000001000d16e8
- (void)postToPhotoReview:(id)arg1 imgList:(id)arg2;	// IMP=0x00000001000d0dcc
- (void)dofeedback:(id)arg1;	// IMP=0x00000001000d07fc
- (void)requestFeedback;	// IMP=0x00000001000cfe4c
- (void)viewDidLoad;	// IMP=0x00000001000cf870
- (id)initWithParam:(id)arg1;	// IMP=0x00000001000cf594
- (id)init;	// IMP=0x00000001000cf490

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUGCAdapterViewController.h"

#import "AEUGCHDMultiImageScrollViewDelegate.h"
#import "UIActionSheetDelegate.h"

@class AEUGCHDMultiImageScrollView, NSString, UIImage, UIImageView, UIViewController;

@interface AEUGCHDFullScreenMultiImageScrollView : AEUGCAdapterViewController <AEUGCHDMultiImageScrollViewDelegate, UIActionSheetDelegate>
{
    AEUGCHDMultiImageScrollView *_multiImageScrollView;	// 8 = 0x8
    UIImageView *_puppetImageView;	// 16 = 0x10
    struct CGRect _imageAppearsFromRect;	// 24 = 0x18
    unsigned long long _imageInitialIndex;	// 56 = 0x38
    UIViewController *_currentContext;	// 64 = 0x40
    _Bool _imageSavingEabled;	// 72 = 0x48
    UIImage *_currentImage;	// 80 = 0x50
}

+ (id)sharedInstance;	// IMP=0x0000000100776594
@property(nonatomic) _Bool imageSavingEabled; // @synthesize imageSavingEabled=_imageSavingEabled;
@property(retain, nonatomic) UIImage *currentImage; // @synthesize currentImage=_currentImage;
- (void).cxx_destruct;	// IMP=0x0000000100777d58
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;	// IMP=0x0000000100777c1c
- (void)multiImageScrollView:(id)arg1 longPressInsideImageView:(id)arg2 index:(unsigned long long)arg3;	// IMP=0x0000000100777af8
- (void)multiImageScrollView:(id)arg1 touchUpInsideImageView:(id)arg2 index:(unsigned long long)arg3;	// IMP=0x0000000100777adc
- (_Bool)isModalNow;	// IMP=0x000000010077790c
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;	// IMP=0x0000000100777764
- (void)dismissInContext:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000001007772b0
- (void)presentImages:(id)arg1 startingIndex:(unsigned long long)arg2 imageFromRect:(struct CGRect)arg3 inContext:(id)arg4 saveEnabled:(_Bool)arg5;	// IMP=0x0000000100776b88
- (void)presentImages:(id)arg1 startingIndex:(unsigned long long)arg2 imageFromRect:(struct CGRect)arg3 inContext:(id)arg4;	// IMP=0x0000000100776afc
- (_Bool)prefersStatusBarHidden;	// IMP=0x0000000100776af4
- (id)pageTrackName;	// IMP=0x0000000100776ac8
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100776a54
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001007769e0
- (void)dealloc;	// IMP=0x0000000100776980
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100776648

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


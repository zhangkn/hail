//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIActivity.h"

#import "UIDocumentInteractionControllerDelegate.h"

@class NSString, NSURL, UIDocumentInteractionController, UIImage;

@interface InstagramActivity : UIActivity <UIDocumentInteractionControllerDelegate>
{
    NSString *_content;	// 8 = 0x8
    UIImage *_image;	// 16 = 0x10
    NSString *_videoURL;	// 24 = 0x18
    NSURL *_videoAssetURL;	// 32 = 0x20
    UIDocumentInteractionController *_documentController;	// 40 = 0x28
}

+ (long long)activityCategory;	// IMP=0x0000000100b60918
@property(retain, nonatomic) UIDocumentInteractionController *documentController; // @synthesize documentController=_documentController;
@property(retain, nonatomic) NSURL *videoAssetURL; // @synthesize videoAssetURL=_videoAssetURL;
@property(retain, nonatomic) NSString *videoURL; // @synthesize videoURL=_videoURL;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;	// IMP=0x0000000100b62e40
- (void)activityDidFinish:(_Bool)arg1;	// IMP=0x0000000100b62c60
- (id)topViewControllerWithRootViewController:(id)arg1;	// IMP=0x0000000100b62ae8
- (id)topViewController;	// IMP=0x0000000100b62a38
- (void)delDefaultAssetURL:(id)arg1;	// IMP=0x0000000100b629c8
- (void)setDefaultAssetURL:(id)arg1;	// IMP=0x0000000100b6290c
- (id)checkAssetURL;	// IMP=0x0000000100b62868
- (void)removeTempVideo:(id)arg1;	// IMP=0x0000000100b62674
- (void)loadCameraRollAssetToInstagram:(id)arg1 andMessage:(id)arg2;	// IMP=0x0000000100b624ec
- (void)setAssurl:(id)arg1;	// IMP=0x0000000100b62488
- (void)save2Album:(id)arg1;	// IMP=0x0000000100b62298
- (void)getAssurl:(id)arg1;	// IMP=0x0000000100b61ff0
- (_Bool)preparePath:(id)arg1;	// IMP=0x0000000100b61ea0
- (void)ddo:(id)arg1;	// IMP=0x0000000100b61b74
- (void)checkddo:(id)arg1;	// IMP=0x0000000100b61828
- (void)performActivity;	// IMP=0x0000000100b61320
- (void)prepareWithActivityItems:(id)arg1;	// IMP=0x0000000100b60e5c
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x0000000100b60a08
- (id)_activityImage;	// IMP=0x0000000100b60978
- (id)activityTitle;	// IMP=0x0000000100b6094c
- (id)activityType;	// IMP=0x0000000100b60920

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


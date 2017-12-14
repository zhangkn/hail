//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIActivity.h"

#import "FBSDKSharingDelegate.h"

@class AEImageUploadManager, NSString, NSURL, UIImage;

@interface FBActivity : UIActivity <FBSDKSharingDelegate>
{
    AEImageUploadManager *imageUploadManager;	// 8 = 0x8
    _Bool _hasapp;	// 16 = 0x10
    NSString *_content;	// 24 = 0x18
    UIImage *_image;	// 32 = 0x20
    NSString *_videoURL;	// 40 = 0x28
    NSURL *_videoAssetURL;	// 48 = 0x30
    NSURL *_url;	// 56 = 0x38
}

+ (long long)activityCategory;	// IMP=0x0000000100b5d6ac
@property(nonatomic) _Bool hasapp; // @synthesize hasapp=_hasapp;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSURL *videoAssetURL; // @synthesize videoAssetURL=_videoAssetURL;
@property(retain, nonatomic) NSString *videoURL; // @synthesize videoURL=_videoURL;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;	// IMP=0x0000000100b5fc90
- (void)activityDidFinish:(_Bool)arg1;	// IMP=0x0000000100b5fa98
- (void)sharer:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000100b5fa28
- (void)sharerDidCancel:(id)arg1;	// IMP=0x0000000100b5f9c8
- (void)sharer:(id)arg1 didCompleteWithResults:(id)arg2;	// IMP=0x0000000100b5f968
- (void)delDefaultAssetURL:(id)arg1;	// IMP=0x0000000100b5f8f8
- (void)setDefaultAssetURL:(id)arg1;	// IMP=0x0000000100b5f83c
- (id)checkAssetURL;	// IMP=0x0000000100b5f798
- (id)topViewControllerWithRootViewController:(id)arg1;	// IMP=0x0000000100b5f620
- (id)topViewController;	// IMP=0x0000000100b5f570
- (void)removeTempVideo:(id)arg1;	// IMP=0x0000000100b5f37c
- (void)setAssurl:(id)arg1;	// IMP=0x0000000100b5ef48
- (void)save2Album:(id)arg1;	// IMP=0x0000000100b5ed58
- (void)getAssurl:(id)arg1;	// IMP=0x0000000100b5eab0
- (_Bool)preparePath:(id)arg1;	// IMP=0x0000000100b5e960
- (void)ddo:(id)arg1;	// IMP=0x0000000100b5e634
- (void)checkddo:(id)arg1;	// IMP=0x0000000100b5e2e8
- (id)getVideoPreViewImage:(id)arg1;	// IMP=0x0000000100b5e1a0
- (void)performActivity;	// IMP=0x0000000100b5dcd4
- (void)prepareWithActivityItems:(id)arg1;	// IMP=0x0000000100b5d7a4
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x0000000100b5d79c
- (id)_activityImage;	// IMP=0x0000000100b5d70c
- (id)activityTitle;	// IMP=0x0000000100b5d6e0
- (id)activityType;	// IMP=0x0000000100b5d6b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

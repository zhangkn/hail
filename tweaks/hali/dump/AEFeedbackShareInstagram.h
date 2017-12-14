//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIDocumentInteractionControllerDelegate.h"

@class NSString, UIDocumentInteractionController, UIImage, UIView;

@interface AEFeedbackShareInstagram : NSObject <UIDocumentInteractionControllerDelegate>
{
    UIImage *_shareImage;	// 8 = 0x8
    NSString *_shareText;	// 16 = 0x10
    UIView *_targetView;	// 24 = 0x18
    id _delegate;	// 32 = 0x20
    UIDocumentInteractionController *_dic;	// 40 = 0x28
}

+ (_Bool)canShare;	// IMP=0x00000001000efa5c
@property(retain, nonatomic) UIDocumentInteractionController *dic; // @synthesize dic=_dic;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *targetView; // @synthesize targetView=_targetView;
@property(retain, nonatomic) NSString *shareText; // @synthesize shareText=_shareText;
@property(retain, nonatomic) UIImage *shareImage; // @synthesize shareImage=_shareImage;
- (void).cxx_destruct;	// IMP=0x00000001000f0468
- (void)documentInteractionController:(id)arg1 didEndSendingToApplication:(id)arg2;	// IMP=0x00000001000f025c
- (double)maxPhotoSize;	// IMP=0x00000001000f01f8
- (id)generateImageData:(id)arg1;	// IMP=0x00000001000f01ec
- (id)imageByScalingImage:(id)arg1 proportionallyToSize:(struct CGSize)arg2;	// IMP=0x00000001000f0034
- (_Bool)share;	// IMP=0x00000001000efaec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

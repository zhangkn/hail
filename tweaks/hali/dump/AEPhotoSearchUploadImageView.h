//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AEImageUploadManager, AESelectedImageInfo, UIButton, UIImage, UIImageView, UILabel;

@interface AEPhotoSearchUploadImageView : UIView
{
    CDUnknownBlockType _completeBlock;	// 8 = 0x8
    AESelectedImageInfo *_imageInfo;	// 16 = 0x10
    long long _sourceType;	// 24 = 0x18
    UIView *_shotImageArea;	// 32 = 0x20
    UIView *_shotOptionArea;	// 40 = 0x28
    UIImageView *_imageView;	// 48 = 0x30
    UIButton *_cancelButton;	// 56 = 0x38
    UIView *_maskView;	// 64 = 0x40
    UILabel *_uploadTxt;	// 72 = 0x48
    UIView *_imageBox;	// 80 = 0x50
    UIImage *_aniImage;	// 88 = 0x58
    AEImageUploadManager *_uploadManager;	// 96 = 0x60
}

@property(retain, nonatomic) AEImageUploadManager *uploadManager; // @synthesize uploadManager=_uploadManager;
@property(retain, nonatomic) UIImage *aniImage; // @synthesize aniImage=_aniImage;
@property(retain, nonatomic) UIView *imageBox; // @synthesize imageBox=_imageBox;
@property(retain, nonatomic) UILabel *uploadTxt; // @synthesize uploadTxt=_uploadTxt;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *shotOptionArea; // @synthesize shotOptionArea=_shotOptionArea;
@property(retain, nonatomic) UIView *shotImageArea; // @synthesize shotImageArea=_shotImageArea;
@property(nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) AESelectedImageInfo *imageInfo; // @synthesize imageInfo=_imageInfo;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
- (void).cxx_destruct;	// IMP=0x0000000100aebf10
- (void)cancelUpload;	// IMP=0x0000000100aebb1c
- (void)uploadImage;	// IMP=0x0000000100aeb69c
- (void)configComponents;	// IMP=0x0000000100ae9840
- (id)initWithImageInfo:(id)arg1 sourceType:(long long)arg2;	// IMP=0x0000000100ae9724
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100ae9710
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100ae96fc
- (id)init;	// IMP=0x0000000100ae96e8

@end


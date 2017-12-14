//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUIViewController.h"

#import "UIGestureRecognizerDelegate.h"

@class AEMyOwnService, AEMyOwnTemplatesConvertorDTO, AESelectedImageInfo, NSMutableArray, NSString, UIActivityIndicatorView, UIImage, UIImageView, UILabel, UIScrollView, UIView;

@interface AEMyOwnPhotoMaskVC : AEUIViewController <UIGestureRecognizerDelegate>
{
    UIView *topNav;	// 8 = 0x8
    UIView *imageBox;	// 16 = 0x10
    UIImageView *imageView;	// 24 = 0x18
    UIImageView *imageMaskView;	// 32 = 0x20
    UILabel *selectTempLb;	// 40 = 0x28
    UILabel *maskTxt;	// 48 = 0x30
    UIScrollView *selectTempView;	// 56 = 0x38
    NSMutableArray *_arrayWithImageView;	// 64 = 0x40
    NSMutableArray *simpImgBigArray;	// 72 = 0x48
    NSMutableArray *simpImgArray;	// 80 = 0x50
    NSMutableArray *simpTxtArray;	// 88 = 0x58
    NSMutableArray *simpTxtPointArray;	// 96 = 0x60
    NSMutableArray *simpTxtOrignPointArray;	// 104 = 0x68
    double pcBannerW;	// 112 = 0x70
    double pcBannerH;	// 120 = 0x78
    double pcBannerTempW;	// 128 = 0x80
    double pcBannerTempH;	// 136 = 0x88
    struct CGSize pcSize;	// 144 = 0x90
    NSMutableArray *simpTxtFontStyleArray;	// 160 = 0xa0
    NSMutableArray *simpTxtOrignFontStyleArray;	// 168 = 0xa8
    NSMutableArray *simpTxtColorStyleArray;	// 176 = 0xb0
    NSMutableArray *simpTxtAlignmentArray;	// 184 = 0xb8
    UIImage *txtImage;	// 192 = 0xc0
    NSMutableArray *postURLArray;	// 200 = 0xc8
    NSString *pcImgURL;	// 208 = 0xd0
    NSString *mobiImgURL;	// 216 = 0xd8
    UIActivityIndicatorView *indicatorView;	// 224 = 0xe0
    int _selectIndex;	// 232 = 0xe8
    AESelectedImageInfo *_imageInfo;	// 240 = 0xf0
    AEMyOwnService *_myOwnService;	// 248 = 0xf8
    AEMyOwnTemplatesConvertorDTO *_templateDto;	// 256 = 0x100
    NSString *_activityId;	// 264 = 0x108
}

@property(retain, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(nonatomic) int selectIndex; // @synthesize selectIndex=_selectIndex;
@property(retain, nonatomic) AEMyOwnTemplatesConvertorDTO *templateDto; // @synthesize templateDto=_templateDto;
@property(retain, nonatomic) AEMyOwnService *myOwnService; // @synthesize myOwnService=_myOwnService;
@property(retain, nonatomic) AESelectedImageInfo *imageInfo; // @synthesize imageInfo=_imageInfo;
- (void).cxx_destruct;	// IMP=0x00000001003ee2e0
- (id)pageTrackName;	// IMP=0x00000001003ee174
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001003ee140
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001003edd8c
- (void)viewDidLoad;	// IMP=0x00000001003edcd0
- (void)requestTemplateDate;	// IMP=0x00000001003ed938
- (_Bool)prefersStatusBarHidden;	// IMP=0x00000001003ed930
- (_Bool)isNeedDisplayGoTop;	// IMP=0x00000001003ed928
- (void)showWaiting;	// IMP=0x00000001003ed7a0
- (void)postURL;	// IMP=0x00000001003ed210
- (void)successUpload:(id)arg1;	// IMP=0x00000001003ed0cc
- (void)getURL;	// IMP=0x00000001003ed048
- (id)addImage:(id)arg1 secondImage:(id)arg2 withText:(id)arg3 andSize:(struct CGSize)arg4;	// IMP=0x00000001003ececc
- (void)nextAction;	// IMP=0x00000001003ec770
- (void)backAction;	// IMP=0x00000001003ec720
- (id)imageFromLayer:(id)arg1;	// IMP=0x00000001003ec608
- (void)setTemplateIndex:(int)arg1;	// IMP=0x00000001003ebcc4
- (void)handleTap:(id)arg1;	// IMP=0x00000001003ebc58
- (void)setupUI;	// IMP=0x00000001003e9500
- (void)setTotalValue;	// IMP=0x00000001003e86a8
- (id)initWithParam:(id)arg1;	// IMP=0x00000001003e85c0
- (id)init;	// IMP=0x00000001003e8530

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AEModuleTreeRecommendListDTO, UIButton, UIImageView, UILabel;

@interface AEModuleTreeFollowView : UIView
{
    AEModuleTreeRecommendListDTO *_model;	// 8 = 0x8
    UIImageView *_imageViewTitle;	// 16 = 0x10
    UIImageView *_imageMask;	// 24 = 0x18
    UILabel *_labelName;	// 32 = 0x20
    UIButton *_buttonFollow;	// 40 = 0x28
}

@property(retain, nonatomic) UIButton *buttonFollow; // @synthesize buttonFollow=_buttonFollow;
@property(retain, nonatomic) UILabel *labelName; // @synthesize labelName=_labelName;
@property(retain, nonatomic) UIImageView *imageMask; // @synthesize imageMask=_imageMask;
@property(retain, nonatomic) UIImageView *imageViewTitle; // @synthesize imageViewTitle=_imageViewTitle;
@property(retain, nonatomic) AEModuleTreeRecommendListDTO *model; // @synthesize model=_model;
- (void).cxx_destruct;	// IMP=0x0000000100b31db0
- (void)onBtnPlantTouched:(id)arg1;	// IMP=0x0000000100b312a4
- (void)tapTitleAction:(id)arg1;	// IMP=0x0000000100b31140
- (void)initView;	// IMP=0x0000000100b304d0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100b302bc

@end


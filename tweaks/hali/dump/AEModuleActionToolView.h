//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AEModuleTreeActionButton, AEModuleTreeDTO, UIImageView;

@interface AEModuleActionToolView : UIView
{
    _Bool _bOtherToolView;	// 8 = 0x8
    long long _type;	// 16 = 0x10
    AEModuleTreeDTO *_model;	// 24 = 0x18
    UIImageView *_imageViewBg;	// 32 = 0x20
    CDUnknownBlockType _block;	// 40 = 0x28
    AEModuleTreeActionButton *_bugButton;	// 48 = 0x30
    AEModuleTreeActionButton *_waterButton;	// 56 = 0x38
    AEModuleTreeActionButton *_potionButton;	// 64 = 0x40
}

@property(retain, nonatomic) AEModuleTreeActionButton *potionButton; // @synthesize potionButton=_potionButton;
@property(retain, nonatomic) AEModuleTreeActionButton *waterButton; // @synthesize waterButton=_waterButton;
@property(retain, nonatomic) AEModuleTreeActionButton *bugButton; // @synthesize bugButton=_bugButton;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) UIImageView *imageViewBg; // @synthesize imageViewBg=_imageViewBg;
@property(nonatomic) _Bool bOtherToolView; // @synthesize bOtherToolView=_bOtherToolView;
@property(retain, nonatomic) AEModuleTreeDTO *model; // @synthesize model=_model;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;	// IMP=0x0000000100b26380
- (void)click:(CDUnknownBlockType)arg1;	// IMP=0x0000000100b26088
- (id)getButtonWithIndex:(long long)arg1;	// IMP=0x0000000100b26014
- (id)createActionButtonWithImage:(id)arg1 coinText:(id)arg2 buttonType:(long long)arg3 waterText:(id)arg4;	// IMP=0x0000000100b25ebc
- (void)removeAllConstraints;	// IMP=0x0000000100b25748
- (void)initViewAllView;	// IMP=0x0000000100b24bc4
- (void)initViewBugAndWater;	// IMP=0x0000000100b24300
- (void)initView;	// IMP=0x0000000100b23f78
- (void)action;	// IMP=0x0000000100b23c2c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100b231a8

@end


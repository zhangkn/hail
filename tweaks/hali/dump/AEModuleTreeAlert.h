//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AEModuleTreeAlertModel, AEModuleTreeCheckBoxView, UIImageView, UILabel;

@interface AEModuleTreeAlert : UIView
{
    UIImageView *_upArrowView;	// 8 = 0x8
    UIImageView *_downArrowView;	// 16 = 0x10
    UIView *_alertViewBg;	// 24 = 0x18
    UILabel *_contentLabel;	// 32 = 0x20
    UIImageView *_imageContent;	// 40 = 0x28
    AEModuleTreeAlertModel *_model;	// 48 = 0x30
    AEModuleTreeCheckBoxView *_checkBoxView;	// 56 = 0x38
    CDUnknownBlockType _block;	// 64 = 0x40
    CDUnknownBlockType _blcokCheck;	// 72 = 0x48
}

@property(copy, nonatomic) CDUnknownBlockType blcokCheck; // @synthesize blcokCheck=_blcokCheck;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) AEModuleTreeCheckBoxView *checkBoxView; // @synthesize checkBoxView=_checkBoxView;
@property(retain, nonatomic) AEModuleTreeAlertModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIImageView *imageContent; // @synthesize imageContent=_imageContent;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIView *alertViewBg; // @synthesize alertViewBg=_alertViewBg;
@property(retain, nonatomic) UIImageView *downArrowView; // @synthesize downArrowView=_downArrowView;
@property(retain, nonatomic) UIImageView *upArrowView; // @synthesize upArrowView=_upArrowView;
- (void).cxx_destruct;	// IMP=0x0000000100b4daa0
- (void)btnPressed:(id)arg1;	// IMP=0x0000000100b4d09c
- (void)checkBoxButtonClick:(CDUnknownBlockType)arg1;	// IMP=0x0000000100b4d090
- (void)butotnClick:(CDUnknownBlockType)arg1;	// IMP=0x0000000100b4d084
- (id)createButtonWithText:(id)arg1;	// IMP=0x0000000100b4cf20
- (void)initView;	// IMP=0x0000000100b4877c
- (id)initWithModel:(id)arg1;	// IMP=0x0000000100b486e4

@end


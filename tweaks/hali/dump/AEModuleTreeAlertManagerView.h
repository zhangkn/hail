//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AEModuleTreeAlertModel;

@interface AEModuleTreeAlertManagerView : UIView
{
    AEModuleTreeAlertModel *_model;	// 8 = 0x8
    UIView *_viewBg;	// 16 = 0x10
    CDUnknownBlockType _block;	// 24 = 0x18
    CDUnknownBlockType _blockTouch;	// 32 = 0x20
    CDUnknownBlockType _blockCheckBox;	// 40 = 0x28
}

@property(copy, nonatomic) CDUnknownBlockType blockCheckBox; // @synthesize blockCheckBox=_blockCheckBox;
@property(copy, nonatomic) CDUnknownBlockType blockTouch; // @synthesize blockTouch=_blockTouch;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) UIView *viewBg; // @synthesize viewBg=_viewBg;
@property(retain, nonatomic) AEModuleTreeAlertModel *model; // @synthesize model=_model;
- (void).cxx_destruct;	// IMP=0x0000000100b545e0
- (void)checkBoxButtonClick:(CDUnknownBlockType)arg1;	// IMP=0x0000000100b54448
- (void)butotnClick:(CDUnknownBlockType)arg1;	// IMP=0x0000000100b5443c
- (void)actionTouch:(CDUnknownBlockType)arg1;	// IMP=0x0000000100b543a0
- (void)tapTouch:(id)arg1;	// IMP=0x0000000100b54320
- (void)showAlert;	// IMP=0x0000000100b5364c
- (void)setColorBg:(id)arg1 alpha:(double)arg2;	// IMP=0x0000000100b535fc
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100b534b0

@end


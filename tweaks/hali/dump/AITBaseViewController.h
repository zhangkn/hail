//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUGCAdapterViewController.h"

@class UILabel;

@interface AITBaseViewController : AEUGCAdapterViewController
{
    UILabel *_labelTitle;	// 8 = 0x8
    CDUnknownBlockType _blockRight;	// 16 = 0x10
    CDUnknownBlockType _blockLeft;	// 24 = 0x18
}

@property(copy, nonatomic) CDUnknownBlockType blockLeft; // @synthesize blockLeft=_blockLeft;
@property(copy, nonatomic) CDUnknownBlockType blockRight; // @synthesize blockRight=_blockRight;
@property(retain, nonatomic) UILabel *labelTitle; // @synthesize labelTitle=_labelTitle;
- (void).cxx_destruct;	// IMP=0x0000000100e0bcc4
- (void)onLeftBarButtonTouched:(id)arg1;	// IMP=0x0000000100e0bbf4
- (void)rightButtonDidClick:(id)arg1;	// IMP=0x0000000100e0bb04
- (id)createItemWithImgName:(id)arg1 title:(id)arg2 titleColor:(id)arg3 tag:(long long)arg4 isRight:(_Bool)arg5;	// IMP=0x0000000100e0b860
- (void)showMessage:(id)arg1 withView:(id)arg2;	// IMP=0x0000000100e0b7a0
- (void)hiddenLoading;	// IMP=0x0000000100e0b758
- (void)showLoadingWithView:(id)arg1;	// IMP=0x0000000100e0b6e8
- (double)getScale;	// IMP=0x0000000100e0b684
- (void)setLeftItemWithImgName:(id)arg1 title:(id)arg2 titleColor:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0000000100e0b56c
- (void)setRightItemWithImgName:(id)arg1 title:(id)arg2 titleColor:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0000000100e0b454
- (void)setTitleView:(id)arg1;	// IMP=0x0000000100e0b0e4
- (void)viewDidLoad;	// IMP=0x0000000100e0aeb0

@end


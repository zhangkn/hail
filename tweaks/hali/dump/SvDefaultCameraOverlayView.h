//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface SvDefaultCameraOverlayView : UIView
{
    UIButton *_stillImageBtn;	// 8 = 0x8
    UIButton *_changeCameraBtn;	// 16 = 0x10
    UIButton *_changeFlashBtn;	// 24 = 0x18
}

@property(retain, nonatomic) UIButton *changeFlashBtn; // @synthesize changeFlashBtn=_changeFlashBtn;
@property(retain, nonatomic) UIButton *changeCameraBtn; // @synthesize changeCameraBtn=_changeCameraBtn;
@property(retain, nonatomic) UIButton *stillImageBtn; // @synthesize stillImageBtn=_stillImageBtn;
- (void).cxx_destruct;	// IMP=0x0000000100ae2cbc
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100ae2bb0

@end

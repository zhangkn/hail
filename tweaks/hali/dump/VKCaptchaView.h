//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class NSString, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UITextField, VKError;

@interface VKCaptchaView : UIView <UITextFieldDelegate>
{
    VKError *_error;	// 8 = 0x8
    UIImageView *_captchaImage;	// 16 = 0x10
    UILabel *_infoLabel;	// 24 = 0x18
    UITextField *_captchaTextField;	// 32 = 0x20
    UIButton *_doneButton;	// 40 = 0x28
    UIActivityIndicatorView *_imageLoadingActivity;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010095b714
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x000000010095b678
- (void)didMoveToSuperview;	// IMP=0x000000010095b660
- (void)doneButtonPressed:(id)arg1;	// IMP=0x000000010095b57c
- (void)deviceDidRotate:(id)arg1;	// IMP=0x000000010095b3d8
- (id)initWithFrame:(struct CGRect)arg1 andError:(id)arg2;	// IMP=0x000000010095ad78
- (void)dealloc;	// IMP=0x000000010095acfc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class NSString, UIButton, UILabel, UITextField;

@interface AECreditCardExpiredAlertView : UIView <UITextFieldDelegate>
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_messageLabel;	// 16 = 0x10
    CDUnknownBlockType _okAction;	// 24 = 0x18
    CDUnknownBlockType _cancelAction;	// 32 = 0x20
    UIButton *_okButton;	// 40 = 0x28
    UIButton *_cancelButton;	// 48 = 0x30
    UITextField *_monthTextField;	// 56 = 0x38
    UITextField *_yearTextField;	// 64 = 0x40
    UIView *_containerView;	// 72 = 0x48
}

+ (void)showAlertWithTitle:(id)arg1 message:(id)arg2 cancelAction:(CDUnknownBlockType)arg3 okAction:(CDUnknownBlockType)arg4;	// IMP=0x00000001004e600c
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UITextField *yearTextField; // @synthesize yearTextField=_yearTextField;
@property(retain, nonatomic) UITextField *monthTextField; // @synthesize monthTextField=_monthTextField;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *okButton; // @synthesize okButton=_okButton;
@property(copy, nonatomic) CDUnknownBlockType cancelAction; // @synthesize cancelAction=_cancelAction;
@property(copy, nonatomic) CDUnknownBlockType okAction; // @synthesize okAction=_okAction;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;	// IMP=0x00000001004e6504
- (void)keyboardDidDismiss:(id)arg1;	// IMP=0x00000001004e5e9c
- (void)keyboardWillShow:(id)arg1;	// IMP=0x00000001004e5c24
- (void)okBtnClicked;	// IMP=0x00000001004e58e4
- (void)cancelBtnclicked;	// IMP=0x00000001004e5868
- (void)next;	// IMP=0x00000001004e56d8
- (void)textDidChange:(id)arg1;	// IMP=0x00000001004e5644
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x00000001004e54a8
- (void)dealloc;	// IMP=0x00000001004e542c
- (void)registerNotifications;	// IMP=0x00000001004e528c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001004e2be0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


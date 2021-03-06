//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "AEModuleMemberButtonAnimationDelegate.h"
#import "UITextFieldDelegate.h"

@class AECheckCodeView, AEMemberPasswordTextField, AESnsLoginView, NSString, UIButton, UILabel, UITextField, UIViewController<AELoginResultHanderDelegate>;

@interface AERegisterView : UIView <UITextFieldDelegate, AEModuleMemberButtonAnimationDelegate>
{
    UIViewController<AELoginResultHanderDelegate> *_baseVC;	// 8 = 0x8
    CDUnknownBlockType _onAgreementTaped;	// 16 = 0x10
    CDUnknownBlockType _onSignInTaped;	// 24 = 0x18
    CDUnknownBlockType _onRegisterTaped;	// 32 = 0x20
    UITextField *_emailTf;	// 40 = 0x28
    AEMemberPasswordTextField *_pwdTf;	// 48 = 0x30
    UILabel *_agreementLink;	// 56 = 0x38
    AESnsLoginView *_snsContainerView;	// 64 = 0x40
    UIButton *_registerBtn;	// 72 = 0x48
    UILabel *_signinNoticeLabel;	// 80 = 0x50
    AECheckCodeView *_checkCodeView;	// 88 = 0x58
}

@property(retain, nonatomic) AECheckCodeView *checkCodeView; // @synthesize checkCodeView=_checkCodeView;
@property(readonly, nonatomic) UILabel *signinNoticeLabel; // @synthesize signinNoticeLabel=_signinNoticeLabel;
@property(readonly, nonatomic) UIButton *registerBtn; // @synthesize registerBtn=_registerBtn;
@property(retain, nonatomic) AESnsLoginView *snsContainerView; // @synthesize snsContainerView=_snsContainerView;
@property(readonly, nonatomic) UILabel *agreementLink; // @synthesize agreementLink=_agreementLink;
@property(readonly, nonatomic) AEMemberPasswordTextField *pwdTf; // @synthesize pwdTf=_pwdTf;
@property(readonly, nonatomic) UITextField *emailTf; // @synthesize emailTf=_emailTf;
@property(copy, nonatomic) CDUnknownBlockType onRegisterTaped; // @synthesize onRegisterTaped=_onRegisterTaped;
@property(copy, nonatomic) CDUnknownBlockType onSignInTaped; // @synthesize onSignInTaped=_onSignInTaped;
@property(copy, nonatomic) CDUnknownBlockType onAgreementTaped; // @synthesize onAgreementTaped=_onAgreementTaped;
@property(nonatomic) __weak UIViewController<AELoginResultHanderDelegate> *baseVC; // @synthesize baseVC=_baseVC;
- (void).cxx_destruct;	// IMP=0x0000000100bbffd0
- (void)dealloc;	// IMP=0x0000000100bbfe34
- (void)stopButtonAnimation:(int)arg1;	// IMP=0x0000000100bbfdc0
- (void)startButtonAnimation:(int)arg1;	// IMP=0x0000000100bbfd7c
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x0000000100bbfce8
- (void)hiddenCheckCode;	// IMP=0x0000000100bbfa60
- (void)showCheckCode:(id)arg1;	// IMP=0x0000000100bbf7d8
- (void)buttonClick:(id)arg1;	// IMP=0x0000000100bbf648
- (void)signinLinkTaped;	// IMP=0x0000000100bbf62c
- (void)agreementLinkTaped;	// IMP=0x0000000100bbf610
- (id)initWithEasyMode:(_Bool)arg1 baseVC:(id)arg2;	// IMP=0x0000000100bbdc4c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


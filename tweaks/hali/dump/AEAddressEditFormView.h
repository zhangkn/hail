//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "AEAddressAutoCompleteDelegate.h"
#import "AEAddressSelectingTextFieldDelegate.h"
#import "AEAddressValidatorDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITextFieldDelegate.h"

@class AEAddressAutoCompleteView, AEAddressDefaultSettingView, AEAddressFindGuideView, AEAddressPassportDisclaimerView, AEAddressPassportTitleLabel, AEAddressTipView, AEAddressValidator, AEUnderKeyboardObserver, NKRRTextFieldUnitView, NSDate, NSLayoutConstraint, NSMutableArray, NSString, UIButton, UIDatePicker, UILabel, UIScrollView;

@interface AEAddressEditFormView : UIView <AEAddressValidatorDelegate, AEAddressSelectingTextFieldDelegate, UITextFieldDelegate, AEAddressAutoCompleteDelegate, UIGestureRecognizerDelegate>
{
    _Bool _stateSelectable;	// 8 = 0x8
    _Bool _citySelectable;	// 9 = 0x9
    _Bool _addressFindEnable;	// 10 = 0xa
    _Bool _callDelegateAfterValidating;	// 11 = 0xb
    id <AEAddressEditFormDelegate> _delegate;	// 16 = 0x10
    long long _style;	// 24 = 0x18
    NSString *_buttonTitle;	// 32 = 0x20
    NSString *_tipsText;	// 40 = 0x28
    NSString *_autoCompleteViewTipsText;	// 48 = 0x30
    UIScrollView *_mainScrollView;	// 56 = 0x38
    AEAddressTipView *_tipsView;	// 64 = 0x40
    NKRRTextFieldUnitView *_fullnameTextField;	// 72 = 0x48
    NKRRTextFieldUnitView *_phoneNumberTextField;	// 80 = 0x50
    NKRRTextFieldUnitView *_streetTextField;	// 88 = 0x58
    NKRRTextFieldUnitView *_aptTextField;	// 96 = 0x60
    NKRRTextFieldUnitView *_countryTextField;	// 104 = 0x68
    NKRRTextFieldUnitView *_stateTextField;	// 112 = 0x70
    NKRRTextFieldUnitView *_cityTextField;	// 120 = 0x78
    NKRRTextFieldUnitView *_zipCodeTextField;	// 128 = 0x80
    NKRRTextFieldUnitView *_CPFTextField;	// 136 = 0x88
    UILabel *_CPFTipsLabel;	// 144 = 0x90
    AEAddressPassportTitleLabel *_passportTitleLabel;	// 152 = 0x98
    NKRRTextFieldUnitView *_passportNameTextField;	// 160 = 0xa0
    NKRRTextFieldUnitView *_passportNoTextField;	// 168 = 0xa8
    NKRRTextFieldUnitView *_passportIssueDateField;	// 176 = 0xb0
    NKRRTextFieldUnitView *_passportIssueOrganizationField;	// 184 = 0xb8
    AEAddressPassportDisclaimerView *_passportDisclaimerView;	// 192 = 0xc0
    AEAddressDefaultSettingView *_defaultSettingView;	// 200 = 0xc8
    UIButton *_submitButton;	// 208 = 0xd0
    AEAddressFindGuideView *_guideView;	// 216 = 0xd8
    AEAddressAutoCompleteView *_autoCompleteView;	// 224 = 0xe0
    NSMutableArray *_fixedFields;	// 232 = 0xe8
    AEAddressValidator *_validator;	// 240 = 0xf0
    AEUnderKeyboardObserver *_keyboardObserver;	// 248 = 0xf8
    NSLayoutConstraint *_bottomLayoutConstraint;	// 256 = 0x100
}

+ (_Bool)CPFValid:(id)arg1;	// IMP=0x000000010046aaec
@property(retain, nonatomic) NSLayoutConstraint *bottomLayoutConstraint; // @synthesize bottomLayoutConstraint=_bottomLayoutConstraint;
@property(retain, nonatomic) AEUnderKeyboardObserver *keyboardObserver; // @synthesize keyboardObserver=_keyboardObserver;
@property(retain, nonatomic) AEAddressValidator *validator; // @synthesize validator=_validator;
@property(nonatomic) _Bool callDelegateAfterValidating; // @synthesize callDelegateAfterValidating=_callDelegateAfterValidating;
@property(retain, nonatomic) NSMutableArray *fixedFields; // @synthesize fixedFields=_fixedFields;
@property(retain, nonatomic) AEAddressAutoCompleteView *autoCompleteView; // @synthesize autoCompleteView=_autoCompleteView;
@property(retain, nonatomic) AEAddressFindGuideView *guideView; // @synthesize guideView=_guideView;
@property(retain, nonatomic) UIButton *submitButton; // @synthesize submitButton=_submitButton;
@property(retain, nonatomic) AEAddressDefaultSettingView *defaultSettingView; // @synthesize defaultSettingView=_defaultSettingView;
@property(retain, nonatomic) AEAddressPassportDisclaimerView *passportDisclaimerView; // @synthesize passportDisclaimerView=_passportDisclaimerView;
@property(retain, nonatomic) NKRRTextFieldUnitView *passportIssueOrganizationField; // @synthesize passportIssueOrganizationField=_passportIssueOrganizationField;
@property(retain, nonatomic) NKRRTextFieldUnitView *passportIssueDateField; // @synthesize passportIssueDateField=_passportIssueDateField;
@property(retain, nonatomic) NKRRTextFieldUnitView *passportNoTextField; // @synthesize passportNoTextField=_passportNoTextField;
@property(retain, nonatomic) NKRRTextFieldUnitView *passportNameTextField; // @synthesize passportNameTextField=_passportNameTextField;
@property(retain, nonatomic) AEAddressPassportTitleLabel *passportTitleLabel; // @synthesize passportTitleLabel=_passportTitleLabel;
@property(retain, nonatomic) UILabel *CPFTipsLabel; // @synthesize CPFTipsLabel=_CPFTipsLabel;
@property(retain, nonatomic) NKRRTextFieldUnitView *CPFTextField; // @synthesize CPFTextField=_CPFTextField;
@property(retain, nonatomic) NKRRTextFieldUnitView *zipCodeTextField; // @synthesize zipCodeTextField=_zipCodeTextField;
@property(retain, nonatomic) NKRRTextFieldUnitView *cityTextField; // @synthesize cityTextField=_cityTextField;
@property(retain, nonatomic) NKRRTextFieldUnitView *stateTextField; // @synthesize stateTextField=_stateTextField;
@property(retain, nonatomic) NKRRTextFieldUnitView *countryTextField; // @synthesize countryTextField=_countryTextField;
@property(retain, nonatomic) NKRRTextFieldUnitView *aptTextField; // @synthesize aptTextField=_aptTextField;
@property(retain, nonatomic) NKRRTextFieldUnitView *streetTextField; // @synthesize streetTextField=_streetTextField;
@property(retain, nonatomic) NKRRTextFieldUnitView *phoneNumberTextField; // @synthesize phoneNumberTextField=_phoneNumberTextField;
@property(retain, nonatomic) NKRRTextFieldUnitView *fullnameTextField; // @synthesize fullnameTextField=_fullnameTextField;
@property(retain, nonatomic) AEAddressTipView *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) UIScrollView *mainScrollView; // @synthesize mainScrollView=_mainScrollView;
@property(retain, nonatomic) NSString *autoCompleteViewTipsText; // @synthesize autoCompleteViewTipsText=_autoCompleteViewTipsText;
@property(retain, nonatomic) NSString *tipsText; // @synthesize tipsText=_tipsText;
@property(retain, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) _Bool addressFindEnable; // @synthesize addressFindEnable=_addressFindEnable;
@property(nonatomic) _Bool citySelectable; // @synthesize citySelectable=_citySelectable;
@property(nonatomic) _Bool stateSelectable; // @synthesize stateSelectable=_stateSelectable;
@property(nonatomic) __weak id <AEAddressEditFormDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010046b484
- (void)showGuideViewIfNeeded;	// IMP=0x000000010046a8fc
- (_Bool)autoCompleteViewShowing;	// IMP=0x000000010046a8a0
- (id)findFirstResponder;	// IMP=0x000000010046a6d4
- (id)RUPassportFieldsArray;	// IMP=0x000000010046a450
- (id)CPFFieldsArray;	// IMP=0x000000010046a33c
- (id)textFieldsArray;	// IMP=0x0000000100469b3c
- (void)scrollToPassportFieldsDirectly;	// IMP=0x00000001004697f8
- (void)toggleDefaultAddress:(id)arg1;	// IMP=0x0000000100469298
- (_Bool)englishAddressRequired;	// IMP=0x00000001004691f4
- (void)specialLogicForTextField:(id)arg1 textWillChange:(id)arg2;	// IMP=0x0000000100468dcc
- (void)notifyDelegateValueChanged:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000100468c28
- (_Bool)textFieldShouldClear:(id)arg1;	// IMP=0x0000000100468b60
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x0000000100468a6c
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x0000000100468850
- (void)selectingTextFieldWillResignFirstResponder:(id)arg1;	// IMP=0x000000010046879c
- (void)selectingTextFieldStartSelecting:(id)arg1;	// IMP=0x0000000100468564
- (void)selectingTextFieldWillBecomeFirstResponder:(id)arg1;	// IMP=0x0000000100468450
- (void)addressAutoCompleteView:(id)arg1 didSelectUserInput:(id)arg2;	// IMP=0x00000001004683c8
- (void)addressAutoCompleteView:(id)arg1 didSelectAddressAtIndex:(long long)arg2;	// IMP=0x000000010046831c
- (void)validationFailed:(id)arg1;	// IMP=0x0000000100468228
- (void)validationSuccessful;	// IMP=0x0000000100468040
- (void)validate;	// IMP=0x0000000100467fd4
- (void)setupValidator;	// IMP=0x00000001004668d8
- (void)lockButton:(_Bool)arg1;	// IMP=0x0000000100466880
- (void)refreshUI:(unsigned long long)arg1;	// IMP=0x0000000100465a78
- (void)refreshUI;	// IMP=0x0000000100465a68
- (void)relayoutForm;	// IMP=0x000000010046474c
- (void)rearrangeFieldsByStyle;	// IMP=0x0000000100464694
- (void)setupKeyboardActions;	// IMP=0x0000000100464100
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0000000100464018
- (void)onScrollViewTapped;	// IMP=0x0000000100463fc4
- (void)removeAutoCompleteView;	// IMP=0x0000000100463a7c
- (void)adjustStreetAddressPosition;	// IMP=0x00000001004639b4
- (void)innerShowAutoCompleteView;	// IMP=0x0000000100462d18
- (void)showAutoCompleteView;	// IMP=0x0000000100462c54
- (void)removeRussiaPassportFields;	// IMP=0x000000010046296c
- (void)addRussiaPassportFields;	// IMP=0x0000000100461d3c
- (void)setupRussiaPassportViews;	// IMP=0x00000001004612a4
- (void)removeCPFFields;	// IMP=0x0000000100461098
- (void)addCPFFields;	// IMP=0x0000000100460be4
- (void)setupCPFViews;	// IMP=0x0000000100460690
- (void)dealloc;	// IMP=0x0000000100460620
- (void)addBackgroundView;	// IMP=0x0000000100460424
- (void)layoutSubviews;	// IMP=0x00000001004603d4
- (void)setupViews;	// IMP=0x0000000100460130
- (void)setupFixedFields;	// IMP=0x000000010045e660
- (void)setupAutoCompleteView;	// IMP=0x000000010045e514
- (void)setupDefaultAddressView;	// IMP=0x000000010045e3d0
- (void)setupSubmitButton;	// IMP=0x000000010045e248
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010045e138
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000010045e0e0
- (void)onDatePickerCancel:(id)arg1;	// IMP=0x000000010046bf48
- (void)onDatePickerDone:(id)arg1;	// IMP=0x000000010046bc40
- (void)setupDatePicker;	// IMP=0x000000010046b728
@property(retain, nonatomic) NSDate *currentIssueDate; // @dynamic currentIssueDate;
@property(retain, nonatomic) UIDatePicker *datePicker; // @dynamic datePicker;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


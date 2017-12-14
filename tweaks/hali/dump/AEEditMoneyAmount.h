//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEEditComponentBaseView.h"

#import "UITextFieldDelegate.h"

@class NSString, UIImageView, UILabel, UITextField;

@interface AEEditMoneyAmount : AEEditComponentBaseView <UITextFieldDelegate>
{
    UITextField *_tf;	// 8 = 0x8
    UILabel *_leftView;	// 16 = 0x10
    UILabel *_explainLbl;	// 24 = 0x18
    UILabel *_explainLbl2;	// 32 = 0x20
    UIImageView *_imageView;	// 40 = 0x28
    _Bool _isShowSecondExplan;	// 48 = 0x30
    NSString *_moneyType;	// 56 = 0x38
    NSString *_minAmount;	// 64 = 0x40
    NSString *_maxAmount;	// 72 = 0x48
}

@property(nonatomic) _Bool isShowSecondExplan; // @synthesize isShowSecondExplan=_isShowSecondExplan;
@property(retain) NSString *maxAmount; // @synthesize maxAmount=_maxAmount;
@property(retain) NSString *minAmount; // @synthesize minAmount=_minAmount;
@property(retain) NSString *moneyType; // @synthesize moneyType=_moneyType;
- (void).cxx_destruct;	// IMP=0x00000001000c1bd8
- (void)dealloc;	// IMP=0x00000001000c1ae8
- (_Bool)checkValidate;	// IMP=0x00000001000c1918
- (void)setText:(id)arg1;	// IMP=0x00000001000c1900
- (id)getText;	// IMP=0x00000001000c18e8
- (void)textFieldDidBeginEditing:(id)arg1;	// IMP=0x00000001000c18d8
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x00000001000c18d4
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x00000001000c18a8
- (void)showInfoView;	// IMP=0x00000001000c1208
- (void)buildContentView;	// IMP=0x00000001000bf798
- (id)getScrollView:(id)arg1;	// IMP=0x00000001000bf6f0
- (void)keyboardWasShown:(id)arg1;	// IMP=0x00000001000bf48c
- (id)initWithmoneyType:(id)arg1 minAmount:(id)arg2 maxAmount:(id)arg3 isShowSecondExplain:(_Bool)arg4;	// IMP=0x00000001000bf3f0
- (id)initWithmoneyType:(id)arg1 minAmount:(id)arg2 maxAmount:(id)arg3;	// IMP=0x00000001000bf234

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUIViewController.h"

#import "AFCommandTest.h"
#import "UITextFieldDelegate.h"

@class AECreditCardModel, AEEditCreditCardContentView, AEEditCreditCardViewDTO, NSDictionary, NSSet, NSString, RWPromise;

@interface AEEditCreditCardViewController : AEUIViewController <AFCommandTest, UITextFieldDelegate>
{
    AEEditCreditCardContentView *_contentView;	// 8 = 0x8
    NSDictionary *_fieldsDict;	// 16 = 0x10
    AEEditCreditCardViewDTO *_viewData;	// 24 = 0x18
    AECreditCardModel *_washModel;	// 32 = 0x20
    _Bool _isNew;	// 40 = 0x28
    NSString *_cardSignature;	// 48 = 0x30
    NSSet *_supportedCardTypes;	// 56 = 0x38
    NSString *_payGateway;	// 64 = 0x40
    NSString *_paymentAuthKey;	// 72 = 0x48
    RWPromise *_promise;	// 80 = 0x50
}

+ (_Bool)needCPFWithAddress:(id)arg1 andAmount:(id)arg2 andCardType:(long long)arg3;	// IMP=0x00000001004f1aa0
+ (id)paramsToTest;	// IMP=0x00000001004f1cd0
@property(nonatomic) __weak RWPromise *promise; // @synthesize promise=_promise;
- (void).cxx_destruct;	// IMP=0x00000001004f1c08
- (_Bool)shouldKeepModalForIPadDialog;	// IMP=0x00000001004f1bcc
- (void)keyboardDidShow:(id)arg1;	// IMP=0x00000001004f1958
- (void)keyboardWillShow:(id)arg1;	// IMP=0x00000001004f0fc4
- (void)keyboardWillHide:(id)arg1;	// IMP=0x00000001004f0bc4
- (void)afDismiss:(id)arg1 withUserInfo:(id)arg2;	// IMP=0x00000001004f0a88
- (void)singleTap:(id)arg1;	// IMP=0x00000001004f0a7c
- (void)close;	// IMP=0x00000001004f0a20
- (void)cancel;	// IMP=0x00000001004f0a08
- (void)save;	// IMP=0x00000001004f03c0
- (void)unlockSaveBtn;	// IMP=0x00000001004f031c
- (id)getErrorDictionary;	// IMP=0x00000001004efe6c
- (id)pageTrackName;	// IMP=0x00000001004efe40
- (void)dealloc;	// IMP=0x00000001004efd78
- (void)registerNotifications;	// IMP=0x00000001004efb70
- (void)setupUI;	// IMP=0x00000001004ef558
- (void)setupLeftButton;	// IMP=0x00000001004ef3f4
- (void)initData;	// IMP=0x00000001004ef1c0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001004ef104
- (void)viewDidLoad;	// IMP=0x00000001004ef084
- (id)initWithParam:(id)arg1;	// IMP=0x00000001004eec40

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


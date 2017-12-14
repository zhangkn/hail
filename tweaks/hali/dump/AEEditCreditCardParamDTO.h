//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AECashierDataDTO, AECreditCardModel, NSString;

@interface AEEditCreditCardParamDTO : NSObject
{
    _Bool _needShowCPF;	// 8 = 0x8
    AECashierDataDTO *_paymentDTO;	// 16 = 0x10
    AECreditCardModel *_cardModel;	// 24 = 0x18
    AECreditCardModel *_washModel;	// 32 = 0x20
    NSString *_cpfNumber;	// 40 = 0x28
}

@property(nonatomic) _Bool needShowCPF; // @synthesize needShowCPF=_needShowCPF;
@property(retain, nonatomic) NSString *cpfNumber; // @synthesize cpfNumber=_cpfNumber;
@property(retain, nonatomic) AECreditCardModel *washModel; // @synthesize washModel=_washModel;
@property(retain, nonatomic) AECreditCardModel *cardModel; // @synthesize cardModel=_cardModel;
@property(retain, nonatomic) AECashierDataDTO *paymentDTO; // @synthesize paymentDTO=_paymentDTO;
- (void).cxx_destruct;	// IMP=0x00000001004eebcc
- (id)initWithPaymentDTO:(id)arg1 showCPF:(_Bool)arg2 cpfNumber:(id)arg3;	// IMP=0x00000001004ee9b0

@end


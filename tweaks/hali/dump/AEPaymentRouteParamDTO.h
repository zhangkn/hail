//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AEPaymentRouteParamDTO : NSObject
{
    NSString *_orderIds;	// 8 = 0x8
    NSString *_paymentGateway;	// 16 = 0x10
    NSString *_payAction;	// 24 = 0x18
    NSString *_cardType;	// 32 = 0x20
    NSString *_alipaySdkInfo;	// 40 = 0x28
    NSString *_totalCashCurrency;	// 48 = 0x30
    NSString *_totalCashAmountValue;	// 56 = 0x38
    NSString *_exchangeRate;	// 64 = 0x40
}

@property(retain, nonatomic) NSString *exchangeRate; // @synthesize exchangeRate=_exchangeRate;
@property(retain, nonatomic) NSString *totalCashAmountValue; // @synthesize totalCashAmountValue=_totalCashAmountValue;
@property(retain, nonatomic) NSString *totalCashCurrency; // @synthesize totalCashCurrency=_totalCashCurrency;
@property(retain, nonatomic) NSString *alipaySdkInfo; // @synthesize alipaySdkInfo=_alipaySdkInfo;
@property(retain, nonatomic) NSString *cardType; // @synthesize cardType=_cardType;
@property(retain, nonatomic) NSString *payAction; // @synthesize payAction=_payAction;
@property(retain, nonatomic) NSString *paymentGateway; // @synthesize paymentGateway=_paymentGateway;
@property(retain, nonatomic) NSString *orderIds; // @synthesize orderIds=_orderIds;
- (void).cxx_destruct;	// IMP=0x000000010057723c

@end

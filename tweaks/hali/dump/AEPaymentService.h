//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AEPaymentServiceProtocol.h"

@class AEPaymentResultDTO, NSString;

@interface AEPaymentService : NSObject <AEPaymentServiceProtocol>
{
    unsigned long long _retryCount;	// 8 = 0x8
    AEPaymentResultDTO *_paymentResultDTO;	// 16 = 0x10
    CDUnknownBlockType _paymentResultCallback;	// 24 = 0x18
    unsigned long long _pageFrom;	// 32 = 0x20
}

@property(nonatomic) unsigned long long pageFrom; // @synthesize pageFrom=_pageFrom;
@property(nonatomic) CDUnknownBlockType paymentResultCallback; // @synthesize paymentResultCallback=_paymentResultCallback;
- (void).cxx_destruct;	// IMP=0x000000010057e960
- (void)handlePaymentProcessingResult:(id)arg1;	// IMP=0x000000010057e570
- (void)handlePaymentRetryResult:(id)arg1;	// IMP=0x000000010057e324
- (void)handlePaymentRedirectResult:(id)arg1;	// IMP=0x000000010057d448
- (void)handlePaymentFailResult:(id)arg1;	// IMP=0x000000010057cff4
- (void)handlePaymentSuccessResult:(id)arg1;	// IMP=0x000000010057cb4c
- (void)handlePaymentResult:(id)arg1;	// IMP=0x000000010057c7f8
- (void)queryPaymentResult:(id)arg1 pageFrom:(unsigned long long)arg2 paymentId:(id)arg3 extData:(id)arg4 retryCount:(unsigned long long)arg5 isFrom3D:(_Bool)arg6;	// IMP=0x000000010057c1b0
- (void)applyForPayment:(unsigned long long)arg1 orderIds:(id)arg2 paymentAuthKey:(id)arg3 paymentToken:(id)arg4 pageFrom:(unsigned long long)arg5 paymentOption:(id)arg6 exchangeRate:(id)arg7 callback:(CDUnknownBlockType)arg8;	// IMP=0x000000010057b964
- (void)dismissPreviousVC;	// IMP=0x000000010057b884
- (void)saveCardToAE:(id)arg1 withAuthKey:(id)arg2 isAlipay:(_Bool)arg3 callback:(CDUnknownBlockType)arg4;	// IMP=0x000000010057b7d8
- (void)updateCardToAE:(id)arg1 tempToken:(id)arg2 withAuthKey:(id)arg3 callback:(CDUnknownBlockType)arg4;	// IMP=0x000000010057b748
- (void)oldWayToSaveCardToAE:(id)arg1 withAuthKey:(id)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x000000010057ac68
- (void)newWayToSaveCardToAE:(id)arg1 tempToken:(id)arg2 withAuthKey:(id)arg3 callback:(CDUnknownBlockType)arg4;	// IMP=0x0000000100579f1c
- (id)generateContexForCreditCard:(id)arg1 key:(id)arg2;	// IMP=0x0000000100579aac
- (void)orderDataSignature:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x0000000100579514
- (id)init;	// IMP=0x00000001005794cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

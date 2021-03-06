//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class AEPaymentFailedInfo, AEPaymentProcessingInfo, AEPaymentRedirectInfo, AEPaymentRetryInfo, AEPaymentSuccessInfo, NSArray;

@interface AEPaymentResultDTO : NSObject <NSCopying>
{
    unsigned long long _paymentResult;	// 8 = 0x8
    NSArray *_orderIds;	// 16 = 0x10
    AEPaymentSuccessInfo *_successInfo;	// 24 = 0x18
    AEPaymentFailedInfo *_failedInfo;	// 32 = 0x20
    AEPaymentRedirectInfo *_redirectInfo;	// 40 = 0x28
    AEPaymentRetryInfo *_retryInfo;	// 48 = 0x30
    AEPaymentProcessingInfo *_processingInfo;	// 56 = 0x38
}

@property(retain, nonatomic) AEPaymentProcessingInfo *processingInfo; // @synthesize processingInfo=_processingInfo;
@property(retain, nonatomic) AEPaymentRetryInfo *retryInfo; // @synthesize retryInfo=_retryInfo;
@property(retain, nonatomic) AEPaymentRedirectInfo *redirectInfo; // @synthesize redirectInfo=_redirectInfo;
@property(retain, nonatomic) AEPaymentFailedInfo *failedInfo; // @synthesize failedInfo=_failedInfo;
@property(retain, nonatomic) AEPaymentSuccessInfo *successInfo; // @synthesize successInfo=_successInfo;
@property(retain, nonatomic) NSArray *orderIds; // @synthesize orderIds=_orderIds;
@property(nonatomic) unsigned long long paymentResult; // @synthesize paymentResult=_paymentResult;
- (void).cxx_destruct;	// IMP=0x00000001005739c8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100573704

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AEBookSaleSuccessInfoDTO, AEPrePaymentDataDTO, NSString;

@interface AEPlaceOrderResultDTO : NSObject
{
    NSString *_bizType;	// 8 = 0x8
    AEBookSaleSuccessInfoDTO *_bookSaleSuccessInfo;	// 16 = 0x10
    AEPrePaymentDataDTO *_prePaymentData;	// 24 = 0x18
}

+ (id)objectWithKeyValues:(id)arg1 context:(id)arg2 error:(id *)arg3;	// IMP=0x000000010058e580
@property(retain, nonatomic) AEPrePaymentDataDTO *prePaymentData; // @synthesize prePaymentData=_prePaymentData;
@property(retain, nonatomic) AEBookSaleSuccessInfoDTO *bookSaleSuccessInfo; // @synthesize bookSaleSuccessInfo=_bookSaleSuccessInfo;
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
- (void).cxx_destruct;	// IMP=0x000000010058e860
@property(readonly, nonatomic) _Bool isBookSaleOrder;

@end

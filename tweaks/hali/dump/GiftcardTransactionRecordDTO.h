//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class AFMoney, NSString;

@interface GiftcardTransactionRecordDTO : JSONModel
{
    NSString *_tradeTime;	// 8 = 0x8
    NSString *_relatedOrderId;	// 16 = 0x10
    NSString *_desc;	// 24 = 0x18
    long long _fundFlow;	// 32 = 0x20
    AFMoney *_tradeAmount;	// 40 = 0x28
}

+ (_Bool)propertyIsOptional:(id)arg1;	// IMP=0x0000000100118064
@property(retain, nonatomic) AFMoney *tradeAmount; // @synthesize tradeAmount=_tradeAmount;
@property(nonatomic) long long fundFlow; // @synthesize fundFlow=_fundFlow;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *relatedOrderId; // @synthesize relatedOrderId=_relatedOrderId;
@property(retain, nonatomic) NSString *tradeTime; // @synthesize tradeTime=_tradeTime;
- (void).cxx_destruct;	// IMP=0x00000001001182d8
- (void)setTradeAmountWithNSDictionary:(id)arg1;	// IMP=0x0000000100118118
- (void)setFundFlowWithNSString:(id)arg1;	// IMP=0x000000010011806c
- (id)date2String:(id)arg1;	// IMP=0x000000010011c260
- (id)toTransactionCellViewModel;	// IMP=0x000000010011c090

@end

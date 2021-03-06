//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AEProductBulkPriceOption, AFMoney, NSNumber;

@interface AEProductPriceOptionDTO : NSObject
{
    _Bool _isBulk;	// 8 = 0x8
    _Bool _isActivity;	// 9 = 0x9
    AEProductBulkPriceOption *_bulkOption;	// 16 = 0x10
    NSNumber *_processingTime;	// 24 = 0x18
    AFMoney *_maxAmount;	// 32 = 0x20
    AFMoney *_maxAmountPerPiece;	// 40 = 0x28
    AFMoney *_minAmount;	// 48 = 0x30
    AFMoney *_minAmountPerPiece;	// 56 = 0x38
    AFMoney *_previewMinAmount;	// 64 = 0x40
    AFMoney *_previewMaxAmount;	// 72 = 0x48
    NSNumber *_minPurchaseNumber;	// 80 = 0x50
}

@property(retain, nonatomic) NSNumber *minPurchaseNumber; // @synthesize minPurchaseNumber=_minPurchaseNumber;
@property(retain, nonatomic) AFMoney *previewMaxAmount; // @synthesize previewMaxAmount=_previewMaxAmount;
@property(retain, nonatomic) AFMoney *previewMinAmount; // @synthesize previewMinAmount=_previewMinAmount;
@property(retain, nonatomic) AFMoney *minAmountPerPiece; // @synthesize minAmountPerPiece=_minAmountPerPiece;
@property(retain, nonatomic) AFMoney *minAmount; // @synthesize minAmount=_minAmount;
@property(retain, nonatomic) AFMoney *maxAmountPerPiece; // @synthesize maxAmountPerPiece=_maxAmountPerPiece;
@property(retain, nonatomic) AFMoney *maxAmount; // @synthesize maxAmount=_maxAmount;
@property(retain, nonatomic) NSNumber *processingTime; // @synthesize processingTime=_processingTime;
@property(retain, nonatomic) AEProductBulkPriceOption *bulkOption; // @synthesize bulkOption=_bulkOption;
@property(nonatomic) _Bool isActivity; // @synthesize isActivity=_isActivity;
@property(nonatomic) _Bool isBulk; // @synthesize isBulk=_isBulk;
- (void).cxx_destruct;	// IMP=0x00000001005de6a8

@end


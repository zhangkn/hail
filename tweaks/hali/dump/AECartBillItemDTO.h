//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFMoney, NSString;

@interface AECartBillItemDTO : NSObject
{
    AFMoney *_totalAmount;	// 8 = 0x8
    AFMoney *_previewTotalAmount;	// 16 = 0x10
    AFMoney *_productAmount;	// 24 = 0x18
    AFMoney *_freightAmount;	// 32 = 0x20
    AFMoney *_savedFreightAmount;	// 40 = 0x28
    AFMoney *_sellerDiscountAmount;	// 48 = 0x30
    NSString *_sellerCountryCode;	// 56 = 0x38
    long long _productItemCount;	// 64 = 0x40
}

@property(nonatomic) long long productItemCount; // @synthesize productItemCount=_productItemCount;
@property(retain, nonatomic) NSString *sellerCountryCode; // @synthesize sellerCountryCode=_sellerCountryCode;
@property(retain, nonatomic) AFMoney *sellerDiscountAmount; // @synthesize sellerDiscountAmount=_sellerDiscountAmount;
@property(retain, nonatomic) AFMoney *savedFreightAmount; // @synthesize savedFreightAmount=_savedFreightAmount;
@property(retain, nonatomic) AFMoney *freightAmount; // @synthesize freightAmount=_freightAmount;
@property(retain, nonatomic) AFMoney *productAmount; // @synthesize productAmount=_productAmount;
@property(retain, nonatomic) AFMoney *previewTotalAmount; // @synthesize previewTotalAmount=_previewTotalAmount;
@property(retain, nonatomic) AFMoney *totalAmount; // @synthesize totalAmount=_totalAmount;
- (void).cxx_destruct;	// IMP=0x000000010049c28c

@end


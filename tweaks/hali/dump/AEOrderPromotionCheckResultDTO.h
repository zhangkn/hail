//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AEOrderCouponDTO, AEOrderPromotionInfoDTO, AFMoney, NSArray, NSDictionary, NSNumber, NSString;

@interface AEOrderPromotionCheckResultDTO : NSObject
{
    AFMoney *_shoppingCouponAmount;	// 8 = 0x8
    AFMoney *_currentOrderAmount;	// 16 = 0x10
    AFMoney *_previewCurrentOrderAmount;	// 24 = 0x18
    NSNumber *_totalProductAmountCent;	// 32 = 0x20
    NSString *_shoppingCouponInfo;	// 40 = 0x28
    NSDictionary *_selectedSellerCouponMap;	// 48 = 0x30
    NSDictionary *_selectedAeCouponInfo;	// 56 = 0x38
    NSDictionary *_sellerCouponMap;	// 64 = 0x40
    NSArray *_aeCouponList;	// 72 = 0x48
    NSNumber *_totalShippingAmountCent;	// 80 = 0x50
    AFMoney *_availableProductTotalAmount;	// 88 = 0x58
    NSString *_payFeeAmountStr;	// 96 = 0x60
    AFMoney *_payFeeAmount;	// 104 = 0x68
    AFMoney *_giftcardUseShowAmount;	// 112 = 0x70
    AFMoney *_giftcardUseAmount;	// 120 = 0x78
    AEOrderPromotionInfoDTO *_selectedPromotionInfo;	// 128 = 0x80
}

+ (id)objectClassInArray;	// IMP=0x000000010055c87c
@property(retain, nonatomic) AEOrderPromotionInfoDTO *selectedPromotionInfo; // @synthesize selectedPromotionInfo=_selectedPromotionInfo;
@property(retain, nonatomic) AFMoney *giftcardUseAmount; // @synthesize giftcardUseAmount=_giftcardUseAmount;
@property(retain, nonatomic) AFMoney *giftcardUseShowAmount; // @synthesize giftcardUseShowAmount=_giftcardUseShowAmount;
@property(retain, nonatomic) AFMoney *payFeeAmount; // @synthesize payFeeAmount=_payFeeAmount;
@property(retain, nonatomic) NSString *payFeeAmountStr; // @synthesize payFeeAmountStr=_payFeeAmountStr;
@property(retain, nonatomic) AFMoney *availableProductTotalAmount; // @synthesize availableProductTotalAmount=_availableProductTotalAmount;
@property(retain, nonatomic) NSNumber *totalShippingAmountCent; // @synthesize totalShippingAmountCent=_totalShippingAmountCent;
@property(retain, nonatomic) NSArray *aeCouponList; // @synthesize aeCouponList=_aeCouponList;
@property(retain, nonatomic) NSDictionary *sellerCouponMap; // @synthesize sellerCouponMap=_sellerCouponMap;
@property(retain, nonatomic) NSDictionary *selectedAeCouponInfo; // @synthesize selectedAeCouponInfo=_selectedAeCouponInfo;
@property(retain, nonatomic) NSDictionary *selectedSellerCouponMap; // @synthesize selectedSellerCouponMap=_selectedSellerCouponMap;
@property(retain, nonatomic) NSString *shoppingCouponInfo; // @synthesize shoppingCouponInfo=_shoppingCouponInfo;
@property(retain, nonatomic) NSNumber *totalProductAmountCent; // @synthesize totalProductAmountCent=_totalProductAmountCent;
@property(retain, nonatomic) AFMoney *previewCurrentOrderAmount; // @synthesize previewCurrentOrderAmount=_previewCurrentOrderAmount;
@property(retain, nonatomic) AFMoney *currentOrderAmount; // @synthesize currentOrderAmount=_currentOrderAmount;
@property(retain, nonatomic) AFMoney *shoppingCouponAmount; // @synthesize shoppingCouponAmount=_shoppingCouponAmount;
- (void).cxx_destruct;	// IMP=0x000000010055d660
- (id)sellerCouponList:(id)arg1;	// IMP=0x000000010055cf94
- (id)selectedSellerCoupon:(id)arg1;	// IMP=0x000000010055cbe8
@property(readonly, nonatomic) AEOrderCouponDTO *selectedAeCoupon;

@end


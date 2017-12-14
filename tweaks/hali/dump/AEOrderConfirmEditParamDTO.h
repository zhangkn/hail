//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface AEOrderConfirmEditParamDTO : NSObject
{
    _Bool _useShoppingCoupon;	// 8 = 0x8
    _Bool _useGiftcard;	// 9 = 0x9
    NSString *_shopcartIds;	// 16 = 0x10
    NSString *_shopcartId;	// 24 = 0x18
    NSString *_addressId;	// 32 = 0x20
    NSString *_logisticService;	// 40 = 0x28
    NSString *_quantity;	// 48 = 0x30
    NSString *_skuAttr;	// 56 = 0x38
    NSString *_sellerCouponJsonStr;	// 64 = 0x40
    NSString *_aeCouponId;	// 72 = 0x48
    NSString *_shoppingCouponJsonStr;	// 80 = 0x50
    NSString *_fromWhere;	// 88 = 0x58
    NSString *_paymentOption;	// 96 = 0x60
    NSDictionary *_additionParams;	// 104 = 0x68
}

@property(retain, nonatomic) NSDictionary *additionParams; // @synthesize additionParams=_additionParams;
@property(retain, nonatomic) NSString *paymentOption; // @synthesize paymentOption=_paymentOption;
@property(retain, nonatomic) NSString *fromWhere; // @synthesize fromWhere=_fromWhere;
@property(nonatomic) _Bool useGiftcard; // @synthesize useGiftcard=_useGiftcard;
@property(retain, nonatomic) NSString *shoppingCouponJsonStr; // @synthesize shoppingCouponJsonStr=_shoppingCouponJsonStr;
@property(nonatomic) _Bool useShoppingCoupon; // @synthesize useShoppingCoupon=_useShoppingCoupon;
@property(retain, nonatomic) NSString *aeCouponId; // @synthesize aeCouponId=_aeCouponId;
@property(retain, nonatomic) NSString *sellerCouponJsonStr; // @synthesize sellerCouponJsonStr=_sellerCouponJsonStr;
@property(retain, nonatomic) NSString *skuAttr; // @synthesize skuAttr=_skuAttr;
@property(retain, nonatomic) NSString *quantity; // @synthesize quantity=_quantity;
@property(retain, nonatomic) NSString *logisticService; // @synthesize logisticService=_logisticService;
@property(retain, nonatomic) NSString *addressId; // @synthesize addressId=_addressId;
@property(retain, nonatomic) NSString *shopcartId; // @synthesize shopcartId=_shopcartId;
@property(retain, nonatomic) NSString *shopcartIds; // @synthesize shopcartIds=_shopcartIds;
- (void).cxx_destruct;	// IMP=0x0000000100550d8c
- (id)JSONObject;	// IMP=0x00000001005507fc

@end

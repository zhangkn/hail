//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AEOrderConfirmDTO, AEPaymentViewModel, NSMutableSet;

@interface AETradeBuyEngine : NSObject
{
    _Bool _isUsingGiftcardNow;	// 8 = 0x8
    AEOrderConfirmDTO *_orderConfirmResult;	// 16 = 0x10
    AEPaymentViewModel *_paymentViewModel;	// 24 = 0x18
    id <AETradeBuyEngineDelegate> _delegate;	// 32 = 0x20
    NSMutableSet *_migrateCards;	// 40 = 0x28
}

@property(retain, nonatomic) NSMutableSet *migrateCards; // @synthesize migrateCards=_migrateCards;
@property(nonatomic) __weak id <AETradeBuyEngineDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isUsingGiftcardNow; // @synthesize isUsingGiftcardNow=_isUsingGiftcardNow;
@property(retain, nonatomic) AEPaymentViewModel *paymentViewModel; // @synthesize paymentViewModel=_paymentViewModel;
@property(retain, nonatomic) AEOrderConfirmDTO *orderConfirmResult; // @synthesize orderConfirmResult=_orderConfirmResult;
- (void).cxx_destruct;	// IMP=0x000000010062166c
- (id)paypalTrackParam;	// IMP=0x0000000100621220
- (id)pageTrackParam;	// IMP=0x0000000100620f54
- (void)updateMailingAddressWithCPF:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100620dd8
- (void)refreshAddressForRUPassportInfoNULL;	// IMP=0x0000000100620c6c
- (void)payWithPlaceOrderResult:(id)arg1 hasPlacedOrder:(_Bool)arg2;	// IMP=0x0000000100620b40
- (void)doPlaceOrder;	// IMP=0x0000000100620724
- (void)placeOrder;	// IMP=0x00000001006206e0
- (void)handleWashCard;	// IMP=0x000000010061ff2c
- (_Bool)needHandleMigrateCard;	// IMP=0x000000010061fdb4
- (void)selectShoppingCoupon:(_Bool)arg1;	// IMP=0x000000010061fc44
- (void)selectAEPlatformCoupon:(id)arg1;	// IMP=0x000000010061f97c
- (void)selectSellerCoupon:(id)arg1 sellerId:(id)arg2;	// IMP=0x000000010061f63c
- (void)didSelectPayMethod:(id)arg1;	// IMP=0x000000010061f404
- (id)editCreditCardAction:(id)arg1;	// IMP=0x000000010061edb8
- (id)placeOrderParamWithData:(id)arg1;	// IMP=0x000000010061e924
- (id)orderConfirmEditParamWithData:(id)arg1;	// IMP=0x000000010061e754
- (_Bool)isPaypalEnabled;	// IMP=0x000000010061e5f0
- (void)configPaymentViewModelWithData:(id)arg1;	// IMP=0x000000010061d8bc
- (id)initWithOrderConfirmDTO:(id)arg1;	// IMP=0x000000010061d70c
- (id)generateBottomBarVM;	// IMP=0x000000010061bd80
- (id)orderSummaryComponents;	// IMP=0x000000010061b9ac
- (id)orderReviewComponents;	// IMP=0x000000010061abcc
- (id)paymentComponents;	// IMP=0x000000010061a1f0
- (id)addressComponents;	// IMP=0x0000000100619eb8
- (id)parseData;	// IMP=0x00000001006196b8
- (void)selectShippingWithOrderItem:(id)arg1;	// IMP=0x000000010061cffc
- (void)showCouponSelectViewWithComponents:(id)arg1 title:(id)arg2;	// IMP=0x000000010061ccd0
- (void)showPayMethodSelectingView;	// IMP=0x000000010061c85c
- (void)didSelectAddress:(id)arg1;	// IMP=0x000000010061c7a0
- (void)addNewAddress;	// IMP=0x000000010061c5b8
- (void)showAddressList;	// IMP=0x000000010061c03c
- (void)addressCellAction;	// IMP=0x000000010061bf34

@end


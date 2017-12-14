//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AEOrderConfirmTracker : NSObject
{
    double _performanceStartTime;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00000001005530c8
@property(nonatomic) double performanceStartTime; // @synthesize performanceStartTime=_performanceStartTime;
- (void)trackSelectShoppingCoupon;	// IMP=0x0000000100554150
- (void)trackSelectAECoupon;	// IMP=0x0000000100554024
- (void)trackGotoShippingMethod;	// IMP=0x0000000100554004
- (void)trackSelectSellerCoupon:(id)arg1;	// IMP=0x0000000100553ea4
- (void)trackSelectPayment:(id)arg1 param:(id)arg2;	// IMP=0x0000000100553dbc
- (void)trackAddAddressAction;	// IMP=0x0000000100553d9c
- (void)trackPlaceOrderError:(id)arg1 errorInfo:(id)arg2;	// IMP=0x0000000100553c44
- (void)facebookEvent:(id)arg1;	// IMP=0x0000000100553774
- (void)trackPlaceOrderSuccess:(id)arg1 productIds:(id)arg2 payAction:(id)arg3 promotionType:(id)arg4;	// IMP=0x000000010055341c
- (void)trackOrderConfirmSuccess;	// IMP=0x00000001005533fc
- (void)trackMigrateCardAlertAction:(id)arg1 enforceMigrate:(_Bool)arg2;	// IMP=0x00000001005532ec
- (void)trackLoadEnd;	// IMP=0x0000000100553174
- (void)trackLoadStart;	// IMP=0x0000000100553148

@end


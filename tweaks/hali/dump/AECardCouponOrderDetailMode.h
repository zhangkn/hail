//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AEDoubleColumnStorage, AEOrderDetailsDTO, AEOrderInfoService, NSArray, NSDictionary, NSTimer;

@interface AECardCouponOrderDetailMode : NSObject
{
    AEDoubleColumnStorage *statusDataStorage;	// 8 = 0x8
    AEDoubleColumnStorage *storeDataStorage;	// 16 = 0x10
    AEDoubleColumnStorage *orderID_Date_AmountStorage;	// 24 = 0x18
    NSDictionary *attributeStyleStrong;	// 32 = 0x20
    NSDictionary *attributeStyleWeak;	// 40 = 0x28
    long long mDeadline;	// 48 = 0x30
    NSTimer *mReminderTimer;	// 56 = 0x38
    CDUnknownBlockType mListener;	// 64 = 0x40
    NSArray *_mOrderDetailContentCardCouponModes;	// 72 = 0x48
    AEOrderDetailsDTO *_mOrderDetails;	// 80 = 0x50
    AEOrderInfoService *_orderInfoService;	// 88 = 0x58
}

@property(retain, nonatomic) AEOrderInfoService *orderInfoService; // @synthesize orderInfoService=_orderInfoService;
@property(retain, nonatomic) AEOrderDetailsDTO *mOrderDetails; // @synthesize mOrderDetails=_mOrderDetails;
@property(retain, nonatomic) NSArray *mOrderDetailContentCardCouponModes; // @synthesize mOrderDetailContentCardCouponModes=_mOrderDetailContentCardCouponModes;
- (void).cxx_destruct;	// IMP=0x000000010003392c
- (void)updateReminderTime;	// IMP=0x00000001000337c4
- (void)removeReminderListener;	// IMP=0x000000010003376c
- (void)addReminderListener:(CDUnknownBlockType)arg1;	// IMP=0x0000000100033654
- (id)storeHomeURL;	// IMP=0x0000000100033514
- (id)orderViewList;	// IMP=0x00000001000334c0
- (id)orderID;	// IMP=0x000000010003346c
- (id)updateOrderSignature:(id)arg1;	// IMP=0x000000010003340c
- (id)orderSignature;	// IMP=0x00000001000333b8
- (id)marsUrl;	// IMP=0x0000000100033364
- (void)orderCancel:(id)arg1 reason:(id)arg2 beforeRequest:(CDUnknownBlockType)arg3 compelete:(CDUnknownBlockType)arg4;	// IMP=0x0000000100032ccc
- (_Bool)orderDetailsStatusIsPlaceOrderSucces;	// IMP=0x0000000100032ba4
- (long long)orderActionButtonTag;	// IMP=0x0000000100032acc
- (id)orderActionButtonTitle;	// IMP=0x00000001000328cc
- (id)contactPersonInfo;	// IMP=0x0000000100032878
- (id)attributeProductPrice:(id)arg1;	// IMP=0x0000000100032498
- (id)attributeProductProperty:(id)arg1;	// IMP=0x0000000100031fc8
- (id)attributeProductName:(id)arg1;	// IMP=0x0000000100031dc8
- (id)cardCouponCodeKeyModes:(id)arg1;	// IMP=0x00000001000310bc
- (id)orderDetailContentCardCouponModes;	// IMP=0x00000001000304b0
@property(readonly, nonatomic) long long cardCouponKeyStatus;
- (id)getOrderInformation;	// IMP=0x00000001000301f4
- (void)createOrderID_Date_Amount;	// IMP=0x000000010002fc00
- (id)getStoreAndSellerData;	// IMP=0x000000010002fbf0
- (void)createStoreAndSeller;	// IMP=0x000000010002f77c
- (id)getStatusAndReminderData;	// IMP=0x000000010002f76c
- (long long)calculateDeadline;	// IMP=0x000000010002f6d0
- (long long)getOrderDetailType;	// IMP=0x000000010002f520
- (id)getReminderAttrString;	// IMP=0x000000010002eff8
- (id)getCountDownString:(long long)arg1;	// IMP=0x000000010002ed34
- (void)createStatusAndReminderContents;	// IMP=0x000000010002e7e4
- (void)requestOrderDetail:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010002e4cc
- (id)init;	// IMP=0x000000010002e230

@end


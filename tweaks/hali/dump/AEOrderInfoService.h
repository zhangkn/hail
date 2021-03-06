//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AEOrderInfoServiceProtocol.h"

@class NSString;

@interface AEOrderInfoService : NSObject <AEOrderInfoServiceProtocol>
{
    CDUnknownBlockType __orderListResult;	// 8 = 0x8
}

@property(copy, nonatomic) CDUnknownBlockType _orderListResult; // @synthesize _orderListResult=__orderListResult;
- (void).cxx_destruct;	// IMP=0x00000001001fc084
- (_Bool)array:(id)arg1 containsString:(id)arg2;	// IMP=0x00000001001fbe54
- (void)requestDeleteOrderWithOrderId:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x00000001001fbc2c
- (void)requestOrderFilteredOrderListWithPageSize:(int)arg1 currentPage:(int)arg2 filterTime:(id)arg3 complete:(CDUnknownBlockType)arg4;	// IMP=0x00000001001fb7b4
- (void)whetherTheseOrdersHavePaid:(id)arg1 timeZone:(id)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x00000001001fb234
- (void)requestOrderDetailsWithOrderId:(id)arg1 timeZone:(id)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x00000001001fad68
- (void)requestOrderListWithOrderStatus:(id)arg1 filterTime:(id)arg2 pageSize:(int)arg3 currentPage:(int)arg4 complete:(CDUnknownBlockType)arg5;	// IMP=0x00000001001fa7d8
- (void)requestOrderListWithOrderStatus:(id)arg1 filterTime:(id)arg2 orderType:(id)arg3 pageSize:(int)arg4 currentPage:(int)arg5 complete:(CDUnknownBlockType)arg6;	// IMP=0x00000001001fa1fc
- (void)requestResumeOrderWithOrderId:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x00000001001f9fdc
- (void)requestOrderExtendProcessingWithextendDay:(id)arg1 orderId:(id)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x00000001001f9ca8
- (void)internalCancelOrder:(id)arg1 reason:(id)arg2 viaAPI:(id)arg3 version:(id)arg4 complete:(CDUnknownBlockType)arg5;	// IMP=0x00000001001f9a4c
- (void)requestRiskControlOrderCancelWithOrderId:(id)arg1 reason:(id)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x00000001001f9984
- (void)requestNonPaymentOrderCancelWithOrderId:(id)arg1 reason:(id)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x00000001001f98bc
- (void)requestOrderCancelWithOrderId:(id)arg1 reason:(id)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x00000001001f97f4
- (void)requestOrderStatistics:(CDUnknownBlockType)arg1;	// IMP=0x00000001001f95c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AEProductBuyerProtectionInfoDTO : NSObject
{
    NSString *_onTimeDeliveryTitle;	// 8 = 0x8
    NSString *_onTimeDeliveryDesc;	// 16 = 0x10
    NSString *_returnPolicyTitle;	// 24 = 0x18
    NSString *_returnPolicyDesc;	// 32 = 0x20
    NSString *_returnNoReasonTitle;	// 40 = 0x28
    NSString *_returnNoReasonDesc;	// 48 = 0x30
    NSString *_overseasWarehouseTitle;	// 56 = 0x38
    NSString *_overseasWarehouseDesc;	// 64 = 0x40
}

@property(retain, nonatomic) NSString *overseasWarehouseDesc; // @synthesize overseasWarehouseDesc=_overseasWarehouseDesc;
@property(retain, nonatomic) NSString *overseasWarehouseTitle; // @synthesize overseasWarehouseTitle=_overseasWarehouseTitle;
@property(retain, nonatomic) NSString *returnNoReasonDesc; // @synthesize returnNoReasonDesc=_returnNoReasonDesc;
@property(retain, nonatomic) NSString *returnNoReasonTitle; // @synthesize returnNoReasonTitle=_returnNoReasonTitle;
@property(retain, nonatomic) NSString *returnPolicyDesc; // @synthesize returnPolicyDesc=_returnPolicyDesc;
@property(retain, nonatomic) NSString *returnPolicyTitle; // @synthesize returnPolicyTitle=_returnPolicyTitle;
@property(retain, nonatomic) NSString *onTimeDeliveryDesc; // @synthesize onTimeDeliveryDesc=_onTimeDeliveryDesc;
@property(retain, nonatomic) NSString *onTimeDeliveryTitle; // @synthesize onTimeDeliveryTitle=_onTimeDeliveryTitle;
- (void).cxx_destruct;	// IMP=0x00000001005a72d0

@end

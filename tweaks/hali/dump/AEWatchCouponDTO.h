//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AEWatchCouponDTO : NSObject
{
    NSString *_acquireEndDate;	// 8 = 0x8
    NSString *_acquireStartDate;	// 16 = 0x10
    NSString *_denomination;	// 24 = 0x18
    NSString *_expireTime;	// 32 = 0x20
    NSString *_orderAmountLimit;	// 40 = 0x28
}

@property(copy, nonatomic) NSString *orderAmountLimit; // @synthesize orderAmountLimit=_orderAmountLimit;
@property(copy, nonatomic) NSString *expireTime; // @synthesize expireTime=_expireTime;
@property(copy, nonatomic) NSString *denomination; // @synthesize denomination=_denomination;
@property(copy, nonatomic) NSString *acquireStartDate; // @synthesize acquireStartDate=_acquireStartDate;
@property(copy, nonatomic) NSString *acquireEndDate; // @synthesize acquireEndDate=_acquireEndDate;
- (void).cxx_destruct;	// IMP=0x000000010062428c

@end


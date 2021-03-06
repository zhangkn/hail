//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFMoney, NSString;

@interface AEStoreCouponDTO : NSObject
{
    _Bool _acquirable;	// 8 = 0x8
    NSString *_activityId;	// 16 = 0x10
    AFMoney *_couponAmount;	// 24 = 0x18
    AFMoney *_minOrderAmount;	// 32 = 0x20
    NSString *_expireTime;	// 40 = 0x28
    NSString *_expireTimeStr;	// 48 = 0x30
    NSString *_sellerAdminSeq;	// 56 = 0x38
}

@property(retain, nonatomic) NSString *sellerAdminSeq; // @synthesize sellerAdminSeq=_sellerAdminSeq;
@property(retain, nonatomic) NSString *expireTimeStr; // @synthesize expireTimeStr=_expireTimeStr;
@property(retain, nonatomic) NSString *expireTime; // @synthesize expireTime=_expireTime;
@property(retain, nonatomic) AFMoney *minOrderAmount; // @synthesize minOrderAmount=_minOrderAmount;
@property(retain, nonatomic) AFMoney *couponAmount; // @synthesize couponAmount=_couponAmount;
@property(retain, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(nonatomic) _Bool acquirable; // @synthesize acquirable=_acquirable;
- (void).cxx_destruct;	// IMP=0x0000000100615cf0

@end


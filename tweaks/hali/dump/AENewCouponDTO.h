//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class AFMoney, NSDate, NSString;

@interface AENewCouponDTO : NSObject <NSCopying>
{
    _Bool _isMobileOnly;	// 8 = 0x8
    _Bool _isSellerCoupon;	// 9 = 0x9
    int _couponType;	// 12 = 0xc
    NSDate *_startDate;	// 16 = 0x10
    NSDate *_endDate;	// 24 = 0x18
    NSString *_sellerSeq;	// 32 = 0x20
    NSString *_couponID;	// 40 = 0x28
    NSString *_couponCode;	// 48 = 0x30
    AFMoney *_discountAmount;	// 56 = 0x38
    AFMoney *_orderLimitAmount;	// 64 = 0x40
}

@property(retain, nonatomic) AFMoney *orderLimitAmount; // @synthesize orderLimitAmount=_orderLimitAmount;
@property(retain, nonatomic) AFMoney *discountAmount; // @synthesize discountAmount=_discountAmount;
@property(retain, nonatomic) NSString *couponCode; // @synthesize couponCode=_couponCode;
@property(retain, nonatomic) NSString *couponID; // @synthesize couponID=_couponID;
@property(retain, nonatomic) NSString *sellerSeq; // @synthesize sellerSeq=_sellerSeq;
@property(nonatomic) _Bool isSellerCoupon; // @synthesize isSellerCoupon=_isSellerCoupon;
@property(nonatomic) int couponType; // @synthesize couponType=_couponType;
@property(nonatomic) _Bool isMobileOnly; // @synthesize isMobileOnly=_isMobileOnly;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;	// IMP=0x00000001005255dc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001005250d0
- (id)initWithDict:(id)arg1;	// IMP=0x0000000100524a88

@end


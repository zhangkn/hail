//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFMoney, NSArray, NSDate, NSString;

@interface AEShoppingCouponResultDTO : NSObject
{
    long long _resultCode;	// 8 = 0x8
    NSString *_resultMsg;	// 16 = 0x10
    AFMoney *_amount;	// 24 = 0x18
    NSDate *_startDate;	// 32 = 0x20
    NSDate *_endDate;	// 40 = 0x28
    NSArray *_items;	// 48 = 0x30
}

@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) AFMoney *amount; // @synthesize amount=_amount;
@property(retain, nonatomic) NSString *resultMsg; // @synthesize resultMsg=_resultMsg;
@property(nonatomic) long long resultCode; // @synthesize resultCode=_resultCode;
- (void).cxx_destruct;	// IMP=0x0000000100411060

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate;

@interface AEVoucherInfoDTO : NSObject
{
    NSArray *_voucherCodeList;	// 8 = 0x8
    NSDate *_voucherStartDate;	// 16 = 0x10
    NSDate *_voucherExpirationDate;	// 24 = 0x18
}

@property(retain, nonatomic) NSDate *voucherExpirationDate; // @synthesize voucherExpirationDate=_voucherExpirationDate;
@property(retain, nonatomic) NSDate *voucherStartDate; // @synthesize voucherStartDate=_voucherStartDate;
@property(retain, nonatomic) NSArray *voucherCodeList; // @synthesize voucherCodeList=_voucherCodeList;
- (void).cxx_destruct;	// IMP=0x00000001001f747c

@end


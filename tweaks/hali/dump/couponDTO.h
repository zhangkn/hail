//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFMoney;

@interface couponDTO : NSObject
{
    AFMoney *_denomination;	// 8 = 0x8
    AFMoney *_orderAmountLimit;	// 16 = 0x10
}

@property(retain, nonatomic) AFMoney *orderAmountLimit; // @synthesize orderAmountLimit=_orderAmountLimit;
@property(retain, nonatomic) AFMoney *denomination; // @synthesize denomination=_denomination;
- (void).cxx_destruct;	// IMP=0x0000000100279154

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFMoney, NSString;

@interface AEbigSaleExtDTO : NSObject
{
    NSString *_promotionTagEndTime;	// 8 = 0x8
    NSString *_promotionTagStartTime;	// 16 = 0x10
    AFMoney *_promotionTagPrice;	// 24 = 0x18
}

@property(retain, nonatomic) AFMoney *promotionTagPrice; // @synthesize promotionTagPrice=_promotionTagPrice;
@property(copy, nonatomic) NSString *promotionTagStartTime; // @synthesize promotionTagStartTime=_promotionTagStartTime;
@property(copy, nonatomic) NSString *promotionTagEndTime; // @synthesize promotionTagEndTime=_promotionTagEndTime;
- (void).cxx_destruct;	// IMP=0x0000000100bc76dc

@end


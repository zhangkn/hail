//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface AEMobileSellerCouponWrapInfo : NSObject
{
    _Bool _showTargetURL;	// 8 = 0x8
    NSString *_sellerCouponTitle;	// 16 = 0x10
    NSString *_sellerCouponIcon;	// 24 = 0x18
    NSArray *_sellerCouponList;	// 32 = 0x20
}

+ (id)objectClassInArray;	// IMP=0x000000010047f690
@property(retain, nonatomic) NSArray *sellerCouponList; // @synthesize sellerCouponList=_sellerCouponList;
@property(nonatomic) _Bool showTargetURL; // @synthesize showTargetURL=_showTargetURL;
@property(retain, nonatomic) NSString *sellerCouponIcon; // @synthesize sellerCouponIcon=_sellerCouponIcon;
@property(retain, nonatomic) NSString *sellerCouponTitle; // @synthesize sellerCouponTitle=_sellerCouponTitle;
- (void).cxx_destruct;	// IMP=0x000000010047f7fc

@end

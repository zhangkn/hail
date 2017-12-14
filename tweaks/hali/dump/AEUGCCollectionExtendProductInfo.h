//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface AEUGCCollectionExtendProductInfo : NSObject <NSCoding>
{
    _Bool _mobilePromotionPrice;	// 8 = 0x8
    NSString *_productId;	// 16 = 0x10
    NSString *_productImgUrl;	// 24 = 0x18
    NSString *_productUrl;	// 32 = 0x20
    NSString *_comment;	// 40 = 0x28
    double _price;	// 48 = 0x30
    NSString *_currentcy;	// 56 = 0x38
    NSString *_showPrice;	// 64 = 0x40
    long long _status;	// 72 = 0x48
}

@property(nonatomic) _Bool mobilePromotionPrice; // @synthesize mobilePromotionPrice=_mobilePromotionPrice;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *showPrice; // @synthesize showPrice=_showPrice;
@property(retain, nonatomic) NSString *currentcy; // @synthesize currentcy=_currentcy;
@property(nonatomic) double price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) NSString *productUrl; // @synthesize productUrl=_productUrl;
@property(retain, nonatomic) NSString *productImgUrl; // @synthesize productImgUrl=_productImgUrl;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
- (void).cxx_destruct;	// IMP=0x000000010067ef74
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010067ed58
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010067ece0

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFMoney, NSString;

@interface AEMobilePromotionTagDTO : NSObject
{
    _Bool _promotionTagShowSwitch;	// 8 = 0x8
    _Bool _promotionCountdownSwitch;	// 9 = 0x9
    NSString *_promotionTagIcon;	// 16 = 0x10
    NSString *_promotionTagInfo;	// 24 = 0x18
    NSString *_promotionTagStartTime;	// 32 = 0x20
    NSString *_promotionTagEndTime;	// 40 = 0x28
    AFMoney *_promotionTagPrice;	// 48 = 0x30
}

+ (_Bool)propertyIsOptional:(id)arg1;	// IMP=0x0000000100c37c1c
@property(retain, nonatomic) AFMoney *promotionTagPrice; // @synthesize promotionTagPrice=_promotionTagPrice;
@property(nonatomic) _Bool promotionCountdownSwitch; // @synthesize promotionCountdownSwitch=_promotionCountdownSwitch;
@property(copy, nonatomic) NSString *promotionTagEndTime; // @synthesize promotionTagEndTime=_promotionTagEndTime;
@property(copy, nonatomic) NSString *promotionTagStartTime; // @synthesize promotionTagStartTime=_promotionTagStartTime;
@property(copy, nonatomic) NSString *promotionTagInfo; // @synthesize promotionTagInfo=_promotionTagInfo;
@property(copy, nonatomic) NSString *promotionTagIcon; // @synthesize promotionTagIcon=_promotionTagIcon;
@property(nonatomic) _Bool promotionTagShowSwitch; // @synthesize promotionTagShowSwitch=_promotionTagShowSwitch;
- (void).cxx_destruct;	// IMP=0x0000000100c37d1c

@end


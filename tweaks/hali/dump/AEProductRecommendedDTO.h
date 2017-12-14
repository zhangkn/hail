//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AEProductRecommendPromotionDTO, AEProductRecommendTagDTO, AFMoney, NSString;

@interface AEProductRecommendedDTO : NSObject
{
    _Bool _offline;	// 8 = 0x8
    NSString *_productId;	// 16 = 0x10
    NSString *_subject;	// 24 = 0x18
    NSString *_type;	// 32 = 0x20
    NSString *_imgUrl;	// 40 = 0x28
    NSString *_unit;	// 48 = 0x30
    NSString *_action;	// 56 = 0x38
    AFMoney *_minAmount;	// 64 = 0x40
    AFMoney *_maxAmount;	// 72 = 0x48
    AEProductRecommendTagDTO *_tag;	// 80 = 0x50
    AEProductRecommendPromotionDTO *_promotion;	// 88 = 0x58
}

+ (_Bool)propertyIsOptional:(id)arg1;	// IMP=0x00000001005e04fc
@property(retain, nonatomic) AEProductRecommendPromotionDTO *promotion; // @synthesize promotion=_promotion;
@property(retain, nonatomic) AEProductRecommendTagDTO *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) AFMoney *maxAmount; // @synthesize maxAmount=_maxAmount;
@property(retain, nonatomic) AFMoney *minAmount; // @synthesize minAmount=_minAmount;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *unit; // @synthesize unit=_unit;
@property(nonatomic) _Bool offline; // @synthesize offline=_offline;
@property(retain, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
- (void).cxx_destruct;	// IMP=0x00000001005e07f4

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AEProductDetailRecommendedItemMarketingPriceItemDTO, AEProductDetailRecommendedItemPriceDTO, AEProductDetailRecommendedItemTradeItemDTO, AEProductDetailTag, NSDictionary, NSString;

@interface AEProductDetailRecommendedItemDTO : NSObject
{
    NSString *_imgUrl;	// 8 = 0x8
    NSString *_productId;	// 16 = 0x10
    NSString *_status;	// 24 = 0x18
    NSString *_subject;	// 32 = 0x20
    NSString *_type;	// 40 = 0x28
    NSString *_action;	// 48 = 0x30
    AEProductDetailRecommendedItemMarketingPriceItemDTO *_marketingPrice;	// 56 = 0x38
    AEProductDetailRecommendedItemPriceDTO *_price;	// 64 = 0x40
    AEProductDetailRecommendedItemTradeItemDTO *_trade;	// 72 = 0x48
    NSDictionary *_exposure;	// 80 = 0x50
    NSDictionary *_click;	// 88 = 0x58
    AEProductDetailTag *_tag;	// 96 = 0x60
    NSDictionary *_p_tagResource;	// 104 = 0x68
}

@property(retain, nonatomic) NSDictionary *p_tagResource; // @synthesize p_tagResource=_p_tagResource;
@property(retain, nonatomic) AEProductDetailTag *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSDictionary *click; // @synthesize click=_click;
@property(retain, nonatomic) NSDictionary *exposure; // @synthesize exposure=_exposure;
@property(retain, nonatomic) AEProductDetailRecommendedItemTradeItemDTO *trade; // @synthesize trade=_trade;
@property(retain, nonatomic) AEProductDetailRecommendedItemPriceDTO *price; // @synthesize price=_price;
@property(retain, nonatomic) AEProductDetailRecommendedItemMarketingPriceItemDTO *marketingPrice; // @synthesize marketingPrice=_marketingPrice;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(retain, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
- (void).cxx_destruct;	// IMP=0x00000001005c14b8

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AEUGCShopNewsFeedItemCouponDTO, AEUGCShopNewsPostStoreDTO, NSArray, NSString;

@interface AEUGCShopNewsFeedItemDTO : NSObject
{
    _Bool _recommmend;	// 8 = 0x8
    _Bool _hasCoupon;	// 9 = 0x9
    _Bool _likeByMe;	// 10 = 0xa
    long long _postId;	// 16 = 0x10
    unsigned long long _status;	// 24 = 0x18
    NSString *_lang;	// 32 = 0x20
    NSArray *_mainPicList;	// 40 = 0x28
    NSString *_title;	// 48 = 0x30
    NSString *_titleTrans;	// 56 = 0x38
    NSString *_desc;	// 64 = 0x40
    NSString *_descTrans;	// 72 = 0x48
    unsigned long long _likeCount;	// 80 = 0x50
    unsigned long long _commentCount;	// 88 = 0x58
    long long _createTime;	// 96 = 0x60
    long long _planPlayTime;	// 104 = 0x68
    unsigned long long _feedType;	// 112 = 0x70
    unsigned long long _appType;	// 120 = 0x78
    unsigned long long _ruleId;	// 128 = 0x80
    long long _fansPromotionDiscount;	// 136 = 0x88
    AEUGCShopNewsPostStoreDTO *_storeEntity;	// 144 = 0x90
    AEUGCShopNewsFeedItemCouponDTO *_couponInfo;	// 152 = 0x98
    NSArray *_products;	// 160 = 0xa0
}

+ (id)replacedKeyFromPropertyName;	// IMP=0x0000000100ec1b6c
@property(retain, nonatomic) NSArray *products; // @synthesize products=_products;
@property(retain, nonatomic) AEUGCShopNewsFeedItemCouponDTO *couponInfo; // @synthesize couponInfo=_couponInfo;
@property(retain, nonatomic) AEUGCShopNewsPostStoreDTO *storeEntity; // @synthesize storeEntity=_storeEntity;
@property(nonatomic) long long fansPromotionDiscount; // @synthesize fansPromotionDiscount=_fansPromotionDiscount;
@property(nonatomic) unsigned long long ruleId; // @synthesize ruleId=_ruleId;
@property(nonatomic) unsigned long long appType; // @synthesize appType=_appType;
@property(nonatomic) unsigned long long feedType; // @synthesize feedType=_feedType;
@property(nonatomic) long long planPlayTime; // @synthesize planPlayTime=_planPlayTime;
@property(nonatomic) long long createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned long long commentCount; // @synthesize commentCount=_commentCount;
@property(nonatomic) _Bool likeByMe; // @synthesize likeByMe=_likeByMe;
@property(nonatomic) unsigned long long likeCount; // @synthesize likeCount=_likeCount;
@property(copy, nonatomic) NSString *descTrans; // @synthesize descTrans=_descTrans;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *titleTrans; // @synthesize titleTrans=_titleTrans;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSArray *mainPicList; // @synthesize mainPicList=_mainPicList;
@property(copy, nonatomic) NSString *lang; // @synthesize lang=_lang;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) _Bool hasCoupon; // @synthesize hasCoupon=_hasCoupon;
@property(nonatomic) _Bool recommmend; // @synthesize recommmend=_recommmend;
@property(nonatomic) long long postId; // @synthesize postId=_postId;
- (void).cxx_destruct;	// IMP=0x0000000100ec1f00

@end

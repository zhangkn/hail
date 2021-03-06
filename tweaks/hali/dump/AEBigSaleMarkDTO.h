//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AEBigSaleBannerDTO, NSString;

@interface AEBigSaleMarkDTO : NSObject
{
    long long _bigSaleStatus;	// 8 = 0x8
    NSString *_bigSaleFilter;	// 16 = 0x10
    NSString *_bigSaleBrand;	// 24 = 0x18
    NSString *_bigSaleLogoImage;	// 32 = 0x20
    NSString *_bigSaleBrandBgColor;	// 40 = 0x28
    AEBigSaleBannerDTO *_bigSaleBanner;	// 48 = 0x30
}

+ (_Bool)propertyIsOptional:(id)arg1;	// IMP=0x0000000100c100bc
+ (id)defaultMark;	// IMP=0x0000000100c0fff0
@property(retain, nonatomic) AEBigSaleBannerDTO *bigSaleBanner; // @synthesize bigSaleBanner=_bigSaleBanner;
@property(retain, nonatomic) NSString *bigSaleBrandBgColor; // @synthesize bigSaleBrandBgColor=_bigSaleBrandBgColor;
@property(retain, nonatomic) NSString *bigSaleLogoImage; // @synthesize bigSaleLogoImage=_bigSaleLogoImage;
@property(retain, nonatomic) NSString *bigSaleBrand; // @synthesize bigSaleBrand=_bigSaleBrand;
@property(retain, nonatomic) NSString *bigSaleFilter; // @synthesize bigSaleFilter=_bigSaleFilter;
@property(nonatomic) long long bigSaleStatus; // @synthesize bigSaleStatus=_bigSaleStatus;
- (void).cxx_destruct;	// IMP=0x0000000100c1024c
- (_Bool)isMobileOnlyBigSale;	// IMP=0x0000000100c100a4
- (_Bool)isBigSale;	// IMP=0x0000000100c1008c

@end


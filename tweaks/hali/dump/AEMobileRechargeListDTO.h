//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AEMobileRechargePromotionDTO, NSMutableArray, NSNumber, NSString;

@interface AEMobileRechargeListDTO : NSObject
{
    NSString *_regular;	// 8 = 0x8
    NSMutableArray *_productList;	// 16 = 0x10
    AEMobileRechargePromotionDTO *_promotion;	// 24 = 0x18
    NSString *_countryCode;	// 32 = 0x20
    NSString *_note;	// 40 = 0x28
    NSNumber *_credits;	// 48 = 0x30
}

@property(retain, nonatomic) NSNumber *credits; // @synthesize credits=_credits;
@property(retain, nonatomic) NSString *note; // @synthesize note=_note;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) AEMobileRechargePromotionDTO *promotion; // @synthesize promotion=_promotion;
@property(retain, nonatomic) NSMutableArray *productList; // @synthesize productList=_productList;
@property(retain, nonatomic) NSString *regular; // @synthesize regular=_regular;
- (void).cxx_destruct;	// IMP=0x00000001005170d4
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000100516c00

@end


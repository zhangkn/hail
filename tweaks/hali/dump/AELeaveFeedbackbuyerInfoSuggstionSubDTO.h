//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface AELeaveFeedbackbuyerInfoSuggstionSubDTO : NSObject
{
    NSString *_productId;	// 8 = 0x8
    NSArray *_buyerPersonInfo;	// 16 = 0x10
    NSArray *_buyerProduct;	// 24 = 0x18
}

@property(retain, nonatomic) NSArray *buyerProduct; // @synthesize buyerProduct=_buyerProduct;
@property(retain, nonatomic) NSArray *buyerPersonInfo; // @synthesize buyerPersonInfo=_buyerPersonInfo;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
- (void).cxx_destruct;	// IMP=0x000000010011f038

@end

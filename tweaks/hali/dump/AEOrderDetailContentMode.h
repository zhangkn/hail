//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString, NSString;

@interface AEOrderDetailContentMode : NSObject
{
    NSString *_imageUrl;	// 8 = 0x8
    NSAttributedString *_productName;	// 16 = 0x10
    NSAttributedString *_productProperty;	// 24 = 0x18
    NSAttributedString *_productPriceAndQuantity;	// 32 = 0x20
    NSString *_disputeText;	// 40 = 0x28
    NSString *_ssoURL;	// 48 = 0x30
    NSString *_productDetailURL;	// 56 = 0x38
}

@property(retain, nonatomic) NSString *productDetailURL; // @synthesize productDetailURL=_productDetailURL;
@property(retain, nonatomic) NSString *ssoURL; // @synthesize ssoURL=_ssoURL;
@property(retain, nonatomic) NSString *disputeText; // @synthesize disputeText=_disputeText;
@property(retain, nonatomic) NSAttributedString *productPriceAndQuantity; // @synthesize productPriceAndQuantity=_productPriceAndQuantity;
@property(retain, nonatomic) NSAttributedString *productProperty; // @synthesize productProperty=_productProperty;
@property(retain, nonatomic) NSAttributedString *productName; // @synthesize productName=_productName;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
- (void).cxx_destruct;	// IMP=0x00000001001d0b90

@end


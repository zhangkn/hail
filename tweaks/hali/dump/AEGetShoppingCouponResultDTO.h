//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface AEGetShoppingCouponResultDTO : NSObject
{
    _Bool _resultFlag;	// 8 = 0x8
    NSString *_resultMSG;	// 16 = 0x10
    NSString *_resultCode;	// 24 = 0x18
    NSDictionary *_shoppingCouponCopy;	// 32 = 0x20
}

@property(retain, nonatomic) NSDictionary *shoppingCouponCopy; // @synthesize shoppingCouponCopy=_shoppingCouponCopy;
@property(nonatomic) _Bool resultFlag; // @synthesize resultFlag=_resultFlag;
@property(retain, nonatomic) NSString *resultCode; // @synthesize resultCode=_resultCode;
@property(retain, nonatomic) NSString *resultMSG; // @synthesize resultMSG=_resultMSG;
- (void).cxx_destruct;	// IMP=0x000000010060551c

@end


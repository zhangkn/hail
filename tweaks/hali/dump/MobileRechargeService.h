//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MobileRechargeService : NSObject
{
}

+ (void)placeOrderForPhone:(id)arg1 sellerAliMemberId:(id)arg2 productId:(id)arg3 promotionCode:(id)arg4 countryCode:(id)arg5 complete:(CDUnknownBlockType)arg6;	// IMP=0x000000010062f9ac
- (void)checkMobilePhone:(id)arg1 sellerAliMemberId:(id)arg2 amount:(id)arg3 countryCode:(id)arg4 complete:(CDUnknownBlockType)arg5;	// IMP=0x000000010062f61c
- (void)getMobileRechargeList:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;	// IMP=0x000000010062f310

@end

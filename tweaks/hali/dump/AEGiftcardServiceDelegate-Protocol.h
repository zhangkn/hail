//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AEGiftcardInfoDTO, AEGiftcardService, NSError;

@protocol AEGiftcardServiceDelegate <NSObject>
- (void)giftcardService:(AEGiftcardService *)arg1 giftcardInfoLoadFailed:(NSError *)arg2 transactionType:(long long)arg3 page:(long long)arg4;
- (void)giftcardService:(AEGiftcardService *)arg1 giftcardInfoDidLoad:(AEGiftcardInfoDTO *)arg2 transactionType:(long long)arg3 page:(long long)arg4;
@end


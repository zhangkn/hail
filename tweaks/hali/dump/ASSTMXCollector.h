//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TrustDefenderMobile;

@interface ASSTMXCollector : NSObject
{
    NSString *lastTMXRequestTime;	// 8 = 0x8
    NSString *tmxSessionID;	// 16 = 0x10
    TrustDefenderMobile *profile;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000101147628
- (_Bool)checkTimeout;	// IMP=0x0000000101147588
- (void)saveProfileResult:(id)arg1;	// IMP=0x0000000101147474
- (id)getTMXSessionID;	// IMP=0x0000000101146e78
- (void)initializeConfig;	// IMP=0x0000000101146dfc

@end


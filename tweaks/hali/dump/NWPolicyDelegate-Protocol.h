//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NWAisle, NWPolicy;

@protocol NWPolicyDelegate <NSObject>
- (NWPolicy *)queryPolicy:(NSString *)arg1;
- (void)updateAisleStatus:(NWAisle *)arg1 withHost:(NSString *)arg2 withStatus:(int)arg3;
- (NSString *)queryCname:(NSString *)arg1;
- (NSString *)queryScheme:(NSString *)arg1;
- (NWPolicy *)queryPolicy:(NSString *)arg1 withScheme:(NSString *)arg2 withAcceleration:(_Bool)arg3 withSuccessAisle:(_Bool)arg4;
@end


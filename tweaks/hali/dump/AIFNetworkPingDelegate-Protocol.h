//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AIFNetworkPing, AIFNetworkPingSummary, NSError;

@protocol AIFNetworkPingDelegate <NSObject>

@optional
- (void)ping:(AIFNetworkPing *)arg1 didReceiveUnexpectedReplyWithSummary:(AIFNetworkPingSummary *)arg2;
- (void)ping:(AIFNetworkPing *)arg1 didReceiveReplyWithSummary:(AIFNetworkPingSummary *)arg2;
- (void)ping:(AIFNetworkPing *)arg1 didTimeoutWithSummary:(AIFNetworkPingSummary *)arg2;
- (void)ping:(AIFNetworkPing *)arg1 didFailToSendPingWithSummary:(AIFNetworkPingSummary *)arg2 error:(NSError *)arg3;
- (void)ping:(AIFNetworkPing *)arg1 didSendPingWithSummary:(AIFNetworkPingSummary *)arg2;
- (void)ping:(AIFNetworkPing *)arg1 didFailWithError:(NSError *)arg2;
@end


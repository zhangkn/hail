//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NotificationHandlerProtocol.h"

@class NSString;

@interface AENotificationHandler : NSObject <NotificationHandlerProtocol>
{
}

- (void)innerLogInfomationToFile:(id)arg1;	// IMP=0x0000000100a6d4b0
- (void)_defaultRefirctionForiPad;	// IMP=0x0000000100a6d334
- (void)hanldeNotificationDirectionForiPad:(id)arg1;	// IMP=0x0000000100a6d21c
- (void)_handlePushNotificationForiPad:(id)arg1;	// IMP=0x0000000100a6cfe4
- (void)handlePushNotificationForiPad:(id)arg1;	// IMP=0x0000000100a6cfd8
- (void)redirectWithNotificationForiPad:(id)arg1;	// IMP=0x0000000100a6c9a4
- (_Bool)checkNotificationIsExpired:(id)arg1;	// IMP=0x0000000100a6c62c
- (void)handleNotificationRedirection:(id)arg1;	// IMP=0x0000000100a6becc
- (void)handlePushNotificationByNotificationDTO:(id)arg1 isApplicationInactive:(_Bool)arg2;	// IMP=0x0000000100a6bc6c
- (void)handlePushNotification:(id)arg1;	// IMP=0x0000000100a6b6e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

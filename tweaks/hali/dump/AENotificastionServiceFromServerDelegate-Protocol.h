//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AENotificastionServiceFromServer, NSDictionary, NSError, NSString;

@protocol AENotificastionServiceFromServerDelegate <NSObject>

@optional
- (void)getUnreadNotificationMsgWithSuccess:(_Bool)arg1 result:(NSString *)arg2 error:(NSError *)arg3;
- (void)getAPIResponse:(AENotificastionServiceFromServer *)arg1 isSuccess:(_Bool)arg2 result:(NSDictionary *)arg3 error:(NSError *)arg4;
@end


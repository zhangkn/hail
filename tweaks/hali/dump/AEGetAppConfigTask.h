//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFNotificationTask.h"

@interface AEGetAppConfigTask : AFNotificationTask
{
}

+ (void)runWithNotification:(id)arg1;	// IMP=0x0000000100a62be0
+ (void)batchPing:(id)arg1 ttl:(long long)arg2 timeout:(double)arg3;	// IMP=0x0000000100a62a1c
+ (void)registerClientSettingHandler;	// IMP=0x0000000100a61a8c
+ (void)consume:(id)arg1;	// IMP=0x0000000100a61a0c
+ (unsigned long long)triggerEvent;	// IMP=0x0000000100a61a04
+ (unsigned long long)priority;	// IMP=0x0000000100a619fc
+ (void)load;	// IMP=0x0000000100a619d4

@end


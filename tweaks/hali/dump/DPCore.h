//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DPCore : NSObject
{
}

+ (void)setEnvironment:(int)arg1;	// IMP=0x00000001014ea534
+ (int)getEnvironment:(int)arg1;	// IMP=0x00000001014ea3d4
+ (id)sharedInstance;	// IMP=0x00000001014ea2bc
+ (void)setOnlineHost:(id)arg1;	// IMP=0x00000001014ea134
+ (id)getSDKVersion;	// IMP=0x00000001014ea0c0
+ (void)resetClientData:(int)arg1;	// IMP=0x00000001014ea02c
+ (id)getSecurityToken:(int)arg1 envIsValid:(_Bool)arg2;	// IMP=0x00000001014e9c3c
+ (_Bool)initWithAppkey:(id)arg1 environment:(int)arg2 authCode:(id)arg3 resultHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001014e992c

@end

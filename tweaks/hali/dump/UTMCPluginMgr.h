//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface UTMCPluginMgr : NSObject
{
    NSMutableArray *mPluginMsgArr;	// 8 = 0x8
    struct dispatch_queue_s *mPluginMsgQueue;	// 16 = 0x10
    NSMutableArray *mPlugins;	// 24 = 0x18
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000101aa7a28
+ (id)getInstance;	// IMP=0x0000000101aa7950
- (void).cxx_destruct;	// IMP=0x0000000101aa82c8
- (_Bool)dispatch2Plugins:(id)arg1 withLogMap:(id)arg2;	// IMP=0x0000000101aa7ee8
- (void)addPluginMsg:(id)arg1;	// IMP=0x0000000101aa7cdc
- (void)unregisterPlugin:(id)arg1;	// IMP=0x0000000101aa7c5c
- (void)registerPlugin:(id)arg1;	// IMP=0x0000000101aa7b24
- (id)init;	// IMP=0x0000000101aa7a4c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000101aa7a48

@end

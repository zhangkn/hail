//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RACChannel.h"

@class NSObject, NSString, RACKVOChannelData;

@interface RACKVOChannel : RACChannel
{
    NSObject *_target;	// 8 = 0x8
    NSString *_keyPath;	// 16 = 0x10
}

@property(readonly, copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property __weak NSObject *target; // @synthesize target=_target;
- (void).cxx_destruct;	// IMP=0x0000000101438ebc
- (void)destroyCurrentThreadData;	// IMP=0x0000000101438d18
- (void)createCurrentThreadData;	// IMP=0x0000000101438a98
- (id)initWithTarget:(id)arg1 keyPath:(id)arg2 nilValue:(id)arg3;	// IMP=0x00000001014381a0
@property(readonly, nonatomic) RACKVOChannelData *currentThreadData;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x0000000101438f04
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x0000000101438ef8

@end


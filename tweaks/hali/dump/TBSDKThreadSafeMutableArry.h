//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSArray.h"

@class NSMutableArray;

@interface TBSDKThreadSafeMutableArry : NSArray
{
    struct _opaque_pthread_rwlock_t s_pthread_rwlock_t;	// 8 = 0x8
    NSMutableArray *_mutableArry;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x0000000101378488
- (unsigned long long)count;	// IMP=0x0000000101378430
- (unsigned long long)getCount;	// IMP=0x00000001013783d8
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000101378368
- (void)removeLastObject;	// IMP=0x000000010137831c
- (void)removeAllObjects;	// IMP=0x00000001013782d0
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000101378274
- (void)insert:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000101378200
- (void)addObject:(id)arg1;	// IMP=0x0000000101378194
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x0000000101378108
- (void)dealloc;	// IMP=0x00000001013780b4
- (id)init;	// IMP=0x0000000101378074

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PINDiskCache, PINMemoryCache;

@interface PINCache : NSObject
{
    NSString *_name;	// 8 = 0x8
    struct dispatch_queue_s *_concurrentQueue;	// 16 = 0x10
    PINDiskCache *_diskCache;	// 24 = 0x18
    PINMemoryCache *_memoryCache;	// 32 = 0x20
}

+ (id)sharedCache;	// IMP=0x00000001013ee424
@property(readonly) PINMemoryCache *memoryCache; // @synthesize memoryCache=_memoryCache;
@property(readonly) PINDiskCache *diskCache; // @synthesize diskCache=_diskCache;
@property(nonatomic) struct dispatch_queue_s *concurrentQueue; // @synthesize concurrentQueue=_concurrentQueue;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;	// IMP=0x00000001013efc7c
- (void)removeAllObjects;	// IMP=0x00000001013efbe4
- (void)trimToDate:(id)arg1;	// IMP=0x00000001013efb60
- (void)removeObjectForKey:(id)arg1;	// IMP=0x00000001013efadc
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001013efa3c
- (id)objectForKey:(id)arg1;	// IMP=0x00000001013ef8b0
@property(readonly) unsigned long long diskByteCount;
- (void)trimToDate:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000001013ef514
- (void)removeAllObjects:(CDUnknownBlockType)arg1;	// IMP=0x00000001013ef2b0
- (void)removeObjectForKey:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000001013eeff8
- (void)setObject:(id)arg1 forKey:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000001013eecf8
- (void)objectForKey:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000001013ee4e0
- (id)description;	// IMP=0x00000001013ee3bc
- (id)initWithName:(id)arg1 rootPath:(id)arg2;	// IMP=0x00000001013ee1d0
- (id)initWithName:(id)arg1;	// IMP=0x00000001013ee134
- (void)dealloc;	// IMP=0x00000001013ee0dc

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CacheService : NSObject
{
}

+ (id)getInstance;	// IMP=0x0000000101d1eae0
- (id)getCacheKey:(id)arg1;	// IMP=0x0000000101d1fdcc
- (void)clearCacheWithRequest:(id)arg1;	// IMP=0x0000000101d1fdc8
- (void)cacheWithResponse:(id)arg1;	// IMP=0x0000000101d1f504
- (id)getWithRequest:(id)arg1;	// IMP=0x0000000101d1f3a0
- (id)getThresholdResponseWithRequest:(id)arg1;	// IMP=0x0000000101d1f22c
- (id)getResponseWithRequest:(id)arg1;	// IMP=0x0000000101d1eb98
- (id)init;	// IMP=0x0000000101d1eb60

@end


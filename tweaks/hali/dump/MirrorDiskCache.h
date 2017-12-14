//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_semaphore>, NSOperationQueue, NSString, NSUserDefaults;

@interface MirrorDiskCache : NSObject
{
    NSString *_mirrorCachePath;	// 8 = 0x8
    long long _limitOfSize;	// 16 = 0x10
    NSObject<OS_dispatch_semaphore> *_semaphore;	// 24 = 0x18
    NSOperationQueue *_calculationQueue;	// 32 = 0x20
    NSUserDefaults *_defaults;	// 40 = 0x28
    NSMutableDictionary *_dataMD5_yetCachedKeyDic;	// 48 = 0x30
    NSMutableDictionary *_key_yetCachedKeyDic;	// 56 = 0x38
    NSMutableDictionary *_dataMD5_RetainCountDic;	// 64 = 0x40
}

+ (id)sharedCache;	// IMP=0x0000000101364fb4
@property(retain, nonatomic) NSMutableDictionary *dataMD5_RetainCountDic; // @synthesize dataMD5_RetainCountDic=_dataMD5_RetainCountDic;
@property(retain, nonatomic) NSMutableDictionary *key_yetCachedKeyDic; // @synthesize key_yetCachedKeyDic=_key_yetCachedKeyDic;
@property(retain, nonatomic) NSMutableDictionary *dataMD5_yetCachedKeyDic; // @synthesize dataMD5_yetCachedKeyDic=_dataMD5_yetCachedKeyDic;
@property(retain, nonatomic) NSUserDefaults *defaults; // @synthesize defaults=_defaults;
@property(readonly, nonatomic) NSOperationQueue *calculationQueue; // @synthesize calculationQueue=_calculationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(nonatomic) long long limitOfSize; // @synthesize limitOfSize=_limitOfSize;
- (void).cxx_destruct;	// IMP=0x0000000101367d2c
- (void)calculateCurrentSize;	// IMP=0x0000000101367830
- (id)attributesForFilePath:(id)arg1;	// IMP=0x0000000101367744
- (void)removeOldObjects;	// IMP=0x0000000101367094
- (void)removeAllObjects;	// IMP=0x0000000101366a6c
- (void)removeObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000101366730
- (void)removeObjectsByAccessedDate:(id)arg1;	// IMP=0x0000000101366598
- (void)removeDirectoryIfEmpty:(id)arg1;	// IMP=0x00000001013664c4
- (void)removeObjectForKey:(id)arg1;	// IMP=0x0000000101366318
- (id)getObjectMD5:(id)arg1;	// IMP=0x00000001013661c0
- (void)cacheObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000101365e0c
- (id)objectForKey:(id)arg1;	// IMP=0x0000000101365aec
- (_Bool)hasObjectForKey:(id)arg1;	// IMP=0x0000000101365a68
- (id)validFilePathsUnderPath:(id)arg1;	// IMP=0x0000000101365720
- (id)filePathForKey:(id)arg1;	// IMP=0x0000000101365578
@property(readonly, nonatomic) NSString *mirrorCachePath;
- (void)dealloc;	// IMP=0x000000010136511c
- (id)init;	// IMP=0x0000000101365034

@end


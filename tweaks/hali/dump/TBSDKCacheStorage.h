//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSString, TBSDKThreadSafeMutableDictionary;

@interface TBSDKCacheStorage : NSObject
{
    NSObject<OS_dispatch_queue> *queue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *downloadQueue;	// 16 = 0x10
    NSObject<OS_dispatch_group> *downloadGroup;	// 24 = 0x18
    _Bool _syncflag;	// 32 = 0x20
    NSString *_path;	// 40 = 0x28
    NSDictionary *_mainConfig;	// 48 = 0x30
    TBSDKThreadSafeMutableDictionary *_blockConfig;	// 56 = 0x38
    TBSDKThreadSafeMutableDictionary *_apiConfig;	// 64 = 0x40
    NSMutableDictionary *_blocks;	// 72 = 0x48
}

+ (id)sharedInstance;	// IMP=0x0000000101d31dac
@property _Bool syncflag; // @synthesize syncflag=_syncflag;
@property(retain, nonatomic) NSMutableDictionary *blocks; // @synthesize blocks=_blocks;
@property(retain, nonatomic) TBSDKThreadSafeMutableDictionary *apiConfig; // @synthesize apiConfig=_apiConfig;
@property(retain, nonatomic) TBSDKThreadSafeMutableDictionary *blockConfig; // @synthesize blockConfig=_blockConfig;
@property(retain, nonatomic) NSDictionary *mainConfig; // @synthesize mainConfig=_mainConfig;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;	// IMP=0x0000000101d367e0
- (id)open:(id)arg1;	// IMP=0x0000000101d36518
- (void)loadConfig;	// IMP=0x0000000101d35f2c
- (id)loadURL:(id)arg1 toFile:(id)arg2;	// IMP=0x0000000101d35d14
- (id)get:(id)arg1 key:(id)arg2;	// IMP=0x0000000101d359c4
- (_Bool)put:(id)arg1 key:(id)arg2 value:(id)arg3;	// IMP=0x0000000101d356a8
- (id)select:(id)arg1 key:(id)arg2;	// IMP=0x0000000101d350e4
- (void)delete:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x0000000101d34e74
- (void)delete:(id)arg1 key:(id)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x0000000101d34bd4
- (_Bool)insert:(id)arg1 key:(id)arg2 value:(id)arg3;	// IMP=0x0000000101d3471c
- (void)insert:(id)arg1 key:(id)arg2 value:(id)arg3 callback:(CDUnknownBlockType)arg4;	// IMP=0x0000000101d342bc
- (id)getBlockByApiName:(id)arg1 apiVersion:(id)arg2;	// IMP=0x0000000101d34100
- (id)getBlockByAPI:(id)arg1 ver:(id)arg2;	// IMP=0x0000000101d340a0
- (id)getConfigWithApiName:(id)arg1 apiVersion:(id)arg2 key:(id)arg3;	// IMP=0x0000000101d33edc
- (id)getBlock:(id)arg1;	// IMP=0x0000000101d33c7c
- (id)getConfigByURL:(id)arg1 key:(id)arg2;	// IMP=0x0000000101d338b8
- (_Bool)isCacheEnable:(id)arg1;	// IMP=0x0000000101d33550
- (id)getExcludeQueryListByKey:(id)arg1;	// IMP=0x0000000101d331b0
- (void)addConfig:(id)arg1;	// IMP=0x0000000101d32e2c
- (void)setConfig:(id)arg1;	// IMP=0x0000000101d326d8
- (void)dealloc;	// IMP=0x0000000101d32630
- (id)init;	// IMP=0x0000000101d320ac
- (void)cleanCache;	// IMP=0x0000000101d3202c
- (void)nextStartupCleanCache;	// IMP=0x0000000101d31fc4
- (void)handleEnvData;	// IMP=0x0000000101d31e2c

@end

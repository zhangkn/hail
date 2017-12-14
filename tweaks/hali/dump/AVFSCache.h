//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVFSFileCache, AVFSLevelFileCache, AVFSMemoryCache, AVFSPrivateCache, AVFSSQLiteCache, AVFSStreamCache, NSString;

@interface AVFSCache : NSObject
{
    AVFSMemoryCache *_memCache;	// 8 = 0x8
    AVFSSQLiteCache *_sqliteCache;	// 16 = 0x10
    AVFSFileCache *_fileCache;	// 24 = 0x18
    AVFSLevelFileCache *_levelFileCache;	// 32 = 0x20
    AVFSStreamCache *_streamCache;	// 40 = 0x28
    AVFSPrivateCache *_privateCache;	// 48 = 0x30
    NSString *_moduleName;	// 56 = 0x38
    unsigned long long _cachePolicy;	// 64 = 0x40
    long long _expireDate;	// 72 = 0x48
    long long _limitSize;	// 80 = 0x50
}

@property(nonatomic) long long limitSize; // @synthesize limitSize=_limitSize;
@property(nonatomic) long long expireDate; // @synthesize expireDate=_expireDate;
@property(nonatomic) unsigned long long cachePolicy; // @synthesize cachePolicy=_cachePolicy;
@property(readonly, copy) NSString *moduleName; // @synthesize moduleName=_moduleName;
- (void).cxx_destruct;	// IMP=0x00000001011e4094
- (void)trimInBackground;	// IMP=0x00000001011e3ba4
- (id)privateCache;	// IMP=0x00000001011e3b2c
- (id)streamCache;	// IMP=0x00000001011e3ab4
- (id)sqliteCache;	// IMP=0x00000001011e3a3c
- (id)levelFileCache;	// IMP=0x00000001011e39c4
- (id)fileCache;	// IMP=0x00000001011e394c
- (id)memCache;	// IMP=0x00000001011e38d4
- (void)dealloc;	// IMP=0x00000001011e3858
- (id)initWithModule:(id)arg1;	// IMP=0x00000001011e3658

@end


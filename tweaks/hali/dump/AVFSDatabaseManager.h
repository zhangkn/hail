//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_semaphore>;

@interface AVFSDatabaseManager : NSObject
{
    NSMutableDictionary *_databaseDict;	// 8 = 0x8
    NSObject<OS_dispatch_semaphore> *_lockSemaphore;	// 16 = 0x10
    Class _loggerClass;	// 24 = 0x18
}

+ (id)sharedManager;	// IMP=0x00000001011ba264
@property(retain, nonatomic) Class loggerClass; // @synthesize loggerClass=_loggerClass;
- (void).cxx_destruct;	// IMP=0x00000001011bb388
- (id)encryptSqliteShmCachePathForModule:(id)arg1;	// IMP=0x00000001011bb270
- (id)encryptSqliteWalCachePathForModule:(id)arg1;	// IMP=0x00000001011bb17c
- (id)encryptSqliteCachePathForModule:(id)arg1;	// IMP=0x00000001011bb088
- (id)sqliteShmCachePathForModule:(id)arg1;	// IMP=0x00000001011baf94
- (id)sqliteWalCachePathForModule:(id)arg1;	// IMP=0x00000001011baea0
- (id)sqliteCachePathForModule:(id)arg1;	// IMP=0x00000001011badac
- (id)loadEncryptDatabaseForModule:(id)arg1;	// IMP=0x00000001011babe8
- (id)loadDatabaseForModule:(id)arg1;	// IMP=0x00000001011bab00
- (void)removeEncryptDatabaseForModule:(id)arg1;	// IMP=0x00000001011ba918
- (void)removeDatabaseForModule:(id)arg1;	// IMP=0x00000001011ba76c
- (id)encryptDatabaseForModule:(id)arg1;	// IMP=0x00000001011ba584
- (id)databaseForModule:(id)arg1;	// IMP=0x00000001011ba3e0
- (id)defaultEncryptDatabase;	// IMP=0x00000001011ba3cc
- (id)defaultDatabase;	// IMP=0x00000001011ba3b8
- (id)init;	// IMP=0x00000001011ba318

@end


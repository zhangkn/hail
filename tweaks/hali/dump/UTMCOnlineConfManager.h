//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UTMCLifeCycleProtocol.h"

@class NSMutableArray, NSString, UTMCPersistentFile;

@interface UTMCOnlineConfManager : NSObject <UTMCLifeCycleProtocol>
{
    NSMutableArray *mConfBusinessList;	// 8 = 0x8
    _Bool mIsStop;	// 16 = 0x10
    NSString *mUTSyncConfTimeKeyStr;	// 24 = 0x18
    NSString *mUTConfFileName;	// 32 = 0x20
    UTMCPersistentFile *mConfCache;	// 40 = 0x28
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000101a9912c
+ (id)getInstance;	// IMP=0x0000000101a99054
- (void).cxx_destruct;	// IMP=0x0000000101a9b700
- (void)syncOnlineconf;	// IMP=0x0000000101a9acb0
- (void)dispatchSyncFailNotify;	// IMP=0x0000000101a9ab30
- (id)ogLocalCacheEntryForRequest;	// IMP=0x0000000101a9a860
- (void)dispatchSuccessConfs:(id)arg1;	// IMP=0x0000000101a9a410
- (void)saveOnlineConf:(id)arg1;	// IMP=0x0000000101a9a1b4
- (id)calOnlineConf:(id)arg1;	// IMP=0x0000000101a99ea4
- (void)switchBackGround;	// IMP=0x0000000101a99ea0
- (void)switchForeGround;	// IMP=0x0000000101a99c60
- (void)start;	// IMP=0x0000000101a99b38
- (void)loadConfsFromFile;	// IMP=0x0000000101a99664
- (id)localConfCacheForKey:(id)arg1;	// IMP=0x0000000101a994e8
- (void)saveAllConfigEntry;	// IMP=0x0000000101a99470
- (void)updateConfEntryToCache:(id)arg1 confEntry:(id)arg2;	// IMP=0x0000000101a99388
- (void)removeConfBusiness:(id)arg1;	// IMP=0x0000000101a992d4
- (void)addConfBusiness:(id)arg1;	// IMP=0x0000000101a99238
- (id)init;	// IMP=0x0000000101a99150
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000101a9914c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


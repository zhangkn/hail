//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVFSFileCache, NSHashTable, NSMutableArray, NSString;

@interface AEUGCShopNewsFeedListViewModel : NSObject
{
    NSString *_nextStartRowKey;	// 8 = 0x8
    NSString *_streamId;	// 16 = 0x10
    _Bool _hasNext;	// 24 = 0x18
    _Bool _openCache;	// 25 = 0x19
    NSMutableArray *_cellViewModels;	// 32 = 0x20
    unsigned long long _feedType;	// 40 = 0x28
    NSString *_sellerMemberSeq;	// 48 = 0x30
    NSHashTable *_hashTable;	// 56 = 0x38
    AVFSFileCache *_cache;	// 64 = 0x40
}

+ (id)generateIdentifierWithBaseApi:(id)arg1 necessaryParams:(id)arg2;	// IMP=0x0000000100f02d8c
@property(retain, nonatomic) AVFSFileCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) NSHashTable *hashTable; // @synthesize hashTable=_hashTable;
@property(nonatomic) _Bool openCache; // @synthesize openCache=_openCache;
@property(readonly, nonatomic) _Bool hasNext; // @synthesize hasNext=_hasNext;
@property(readonly, copy, nonatomic) NSString *sellerMemberSeq; // @synthesize sellerMemberSeq=_sellerMemberSeq;
@property(readonly, nonatomic) unsigned long long feedType; // @synthesize feedType=_feedType;
@property(readonly, copy, nonatomic) NSMutableArray *cellViewModels; // @synthesize cellViewModels=_cellViewModels;
- (void).cxx_destruct;	// IMP=0x0000000100f02f3c
- (id)bannerListCacheKey;	// IMP=0x0000000100f02c34
- (id)postListCacheKey;	// IMP=0x0000000100f02980
- (SEL)queryDataSelector;	// IMP=0x0000000100f02900
- (void)queryFromRemoteWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100f01a18
- (void)queryFromCacheWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100f01390
- (void)loadDataWithIsReload:(_Bool)arg1 withPolicy:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100f005a8
- (_Bool)isStorePicTextList;	// IMP=0x0000000100f00578
- (void)reloadDataWithPolicy:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100f004b8
- (void)loadDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100f0049c
- (id)init;	// IMP=0x0000000100f0048c
- (id)initWithType:(unsigned long long)arg1 sellerMemberSeq:(id)arg2;	// IMP=0x0000000100f00408
- (id)initWithType:(unsigned long long)arg1;	// IMP=0x0000000100f001d4
- (void)dealloc;	// IMP=0x0000000100f001a0

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AEUGCModelCacheProxy.h"

@class AEUGCProductListShowDTO, AVFSFileCache, NSDictionary, NSHashTable, NSMutableArray, NSString;

@interface AEUGCShowYourIdeaCardListViewModel : NSObject <AEUGCModelCacheProxy>
{
    NSString *_streamId;	// 8 = 0x8
    unsigned long long _page;	// 16 = 0x10
    NSDictionary *_filterDic;	// 24 = 0x18
    _Bool _hasNext;	// 32 = 0x20
    _Bool _loading;	// 33 = 0x21
    NSMutableArray *_cellViewModels;	// 40 = 0x28
    unsigned long long _themeId;	// 48 = 0x30
    unsigned long long _orderBy;	// 56 = 0x38
    NSHashTable *_hashTable;	// 64 = 0x40
    AEUGCProductListShowDTO *_dto;	// 72 = 0x48
    AVFSFileCache *_cache;	// 80 = 0x50
}

+ (id)filterDicWithDic:(id)arg1;	// IMP=0x0000000100db6468
+ (id)generateIdentifierWithBaseApi:(id)arg1 necessaryParams:(id)arg2;	// IMP=0x0000000100db63a8
@property(retain, nonatomic) AVFSFileCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) AEUGCProductListShowDTO *dto; // @synthesize dto=_dto;
@property(retain, nonatomic) NSHashTable *hashTable; // @synthesize hashTable=_hashTable;
@property(readonly, nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(readonly, nonatomic) _Bool hasNext; // @synthesize hasNext=_hasNext;
@property(readonly, nonatomic) unsigned long long orderBy; // @synthesize orderBy=_orderBy;
@property(nonatomic) unsigned long long themeId; // @synthesize themeId=_themeId;
@property(readonly, nonatomic) NSMutableArray *cellViewModels; // @synthesize cellViewModels=_cellViewModels;
- (void).cxx_destruct;	// IMP=0x0000000100db7e18
- (void)queryFromRemoteWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100db7b80
- (void)queryFromCacheWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100db7628
- (void)loadDataWithIsReload:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100db6758
- (_Bool)canLoadMore;	// IMP=0x0000000100db6378
- (void)insertCellWithDic:(id)arg1;	// IMP=0x0000000100db6154
- (void)changeCommentCountWithPostId:(id)arg1 count:(long long)arg2;	// IMP=0x0000000100db6024
- (void)likeWithIndex:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100db5d34
- (void)translateWithIndex:(unsigned long long)arg1;	// IMP=0x0000000100db5cd4
- (void)reloadDataWithThemeId:(unsigned long long)arg1 orderBy:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100db5bec
- (void)reloadDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100db5bc0
- (void)loadDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100db5ba8
- (id)initWithThemeId:(unsigned long long)arg1 orderBy:(unsigned long long)arg2 filterDic:(id)arg3;	// IMP=0x0000000100db58b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


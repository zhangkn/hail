//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AEUGCModelCacheProxy.h"

@class AEUGCProductListShowDTO, AVFSFileCache, NSHashTable, NSMutableArray, NSString;

@interface AEUGCListVenueCardListViewModel : NSObject <AEUGCModelCacheProxy>
{
    _Bool _hasNext;	// 8 = 0x8
    _Bool _loading;	// 9 = 0x9
    _Bool _isUserSecondSceneId;	// 10 = 0xa
    NSMutableArray *_cellViewModels;	// 16 = 0x10
    NSString *_sceneId;	// 24 = 0x18
    NSString *_categoryCode;	// 32 = 0x20
    NSString *_topPostId;	// 40 = 0x28
    NSString *_secondSceneId;	// 48 = 0x30
    unsigned long long _orderBy;	// 56 = 0x38
    unsigned long long _screenId;	// 64 = 0x40
    long long _total;	// 72 = 0x48
    NSHashTable *_hashTable;	// 80 = 0x50
    AEUGCProductListShowDTO *_dto;	// 88 = 0x58
    AVFSFileCache *_cache;	// 96 = 0x60
    NSString *_nextStartRowKey;	// 104 = 0x68
    NSString *_captureRequestScendId;	// 112 = 0x70
}

+ (id)generateIdentifierWithBaseApi:(id)arg1 necessaryParams:(id)arg2;	// IMP=0x00000001006b490c
@property(copy, nonatomic) NSString *captureRequestScendId; // @synthesize captureRequestScendId=_captureRequestScendId;
@property(retain, nonatomic) NSString *nextStartRowKey; // @synthesize nextStartRowKey=_nextStartRowKey;
@property(retain, nonatomic) AVFSFileCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) AEUGCProductListShowDTO *dto; // @synthesize dto=_dto;
@property(retain, nonatomic) NSHashTable *hashTable; // @synthesize hashTable=_hashTable;
@property(nonatomic) long long total; // @synthesize total=_total;
@property(nonatomic) _Bool isUserSecondSceneId; // @synthesize isUserSecondSceneId=_isUserSecondSceneId;
@property(readonly, nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(readonly, nonatomic) _Bool hasNext; // @synthesize hasNext=_hasNext;
@property(readonly, nonatomic) unsigned long long screenId; // @synthesize screenId=_screenId;
@property(readonly, nonatomic) unsigned long long orderBy; // @synthesize orderBy=_orderBy;
@property(retain, nonatomic) NSString *secondSceneId; // @synthesize secondSceneId=_secondSceneId;
@property(retain, nonatomic) NSString *topPostId; // @synthesize topPostId=_topPostId;
@property(retain, nonatomic) NSString *categoryCode; // @synthesize categoryCode=_categoryCode;
@property(retain, nonatomic) NSString *sceneId; // @synthesize sceneId=_sceneId;
@property(readonly, nonatomic) NSMutableArray *cellViewModels; // @synthesize cellViewModels=_cellViewModels;
- (void).cxx_destruct;	// IMP=0x00000001006b5f40
- (id)generateCacheKey;	// IMP=0x00000001006b5b18
- (void)queryFromRemoteWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001006b58e8
- (void)queryFromCacheWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001006b5594
- (void)loadDataWithIsReload:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001006b49cc
- (_Bool)canLoadMore;	// IMP=0x00000001006b4898
- (void)insertCellWithDic:(id)arg1;	// IMP=0x00000001006b4664
- (void)changeCommentCountWithPostId:(id)arg1 count:(long long)arg2;	// IMP=0x00000001006b450c
- (void)likeWithIndex:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001006b421c
- (void)translateWithIndex:(unsigned long long)arg1;	// IMP=0x00000001006b41bc
- (void)reloadDataWithSceneId:(id)arg1 orderBy:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001006b4100
- (void)reloadDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001006b40d4
- (void)loadDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001006b40bc
- (id)initWithSceneId:(id)arg1 orderBy:(unsigned long long)arg2 categoryCode:(id)arg3 screenId:(unsigned long long)arg4;	// IMP=0x00000001006b3e00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


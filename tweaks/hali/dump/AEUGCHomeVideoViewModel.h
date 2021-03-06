//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AEUGCHomeGeneralViewModelProtocol.h"

@class AEUGCProductListShowDTO, NSHashTable, NSMutableArray, NSString;

@interface AEUGCHomeVideoViewModel : NSObject <AEUGCHomeGeneralViewModelProtocol>
{
    _Bool _hasNext;	// 8 = 0x8
    _Bool _loading;	// 9 = 0x9
    long long _total;	// 16 = 0x10
    NSMutableArray *_cellViewModels;	// 24 = 0x18
    long long _page;	// 32 = 0x20
    NSHashTable *_hashTable;	// 40 = 0x28
    AEUGCProductListShowDTO *_dto;	// 48 = 0x30
}

@property(retain, nonatomic) AEUGCProductListShowDTO *dto; // @synthesize dto=_dto;
@property(retain, nonatomic) NSHashTable *hashTable; // @synthesize hashTable=_hashTable;
@property(nonatomic) long long page; // @synthesize page=_page;
@property(readonly, nonatomic) NSMutableArray *cellViewModels; // @synthesize cellViewModels=_cellViewModels;
@property(readonly, nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) long long total; // @synthesize total=_total;
@property(readonly, nonatomic) _Bool hasNext; // @synthesize hasNext=_hasNext;
- (void).cxx_destruct;	// IMP=0x0000000100db1d14
- (void)queryFromRemoteWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100db1afc
- (_Bool)canLoadMore;	// IMP=0x0000000100db1a88
- (void)changeCommentCountWithPostId:(id)arg1 count:(long long)arg2;	// IMP=0x0000000100db1958
- (void)loadDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100db1120
- (void)likeWithIndex:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100db0e30
- (void)translateWithIndex:(unsigned long long)arg1;	// IMP=0x0000000100db0dd0
- (void)reloadDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100db0d9c
@property(readonly, copy, nonatomic) NSString *pageTrackName;
- (id)initWithParam:(id)arg1;	// IMP=0x0000000100db0b64

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


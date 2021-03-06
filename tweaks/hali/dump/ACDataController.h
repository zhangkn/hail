//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AEFloorSegmentedCollectionViewDataSource.h"

@class ACChannelViewModel, ACFetchController, ACFloorConverter, NSString;

@interface ACDataController : NSObject <AEFloorSegmentedCollectionViewDataSource>
{
    _Bool _needLocalCache;	// 8 = 0x8
    _Bool _haveCachedModels;	// 9 = 0x9
    _Bool _alreayQueriedCache;	// 10 = 0xa
    _Bool _isFirstFetch;	// 11 = 0xb
    _Bool _fetchFromRemoteFinished;	// 12 = 0xc
    ACFetchController *_fetchController;	// 16 = 0x10
    ACChannelViewModel *_viewModel;	// 24 = 0x18
    id <ACDataDelegate> _delegate;	// 32 = 0x20
    ACFloorConverter *_floorConverter;	// 40 = 0x28
}

@property(retain, nonatomic) ACFloorConverter *floorConverter; // @synthesize floorConverter=_floorConverter;
@property(nonatomic) _Bool fetchFromRemoteFinished; // @synthesize fetchFromRemoteFinished=_fetchFromRemoteFinished;
@property(nonatomic) _Bool isFirstFetch; // @synthesize isFirstFetch=_isFirstFetch;
@property(nonatomic) _Bool alreayQueriedCache; // @synthesize alreayQueriedCache=_alreayQueriedCache;
@property(nonatomic) _Bool haveCachedModels; // @synthesize haveCachedModels=_haveCachedModels;
@property(nonatomic) _Bool needLocalCache; // @synthesize needLocalCache=_needLocalCache;
@property(nonatomic) __weak id <ACDataDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ACChannelViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) ACFetchController *fetchController; // @synthesize fetchController=_fetchController;
- (void).cxx_destruct;	// IMP=0x0000000100a20be0
- (id)floorModelsInCollectionView:(id)arg1 forSegmentAtIndex:(long long)arg2;	// IMP=0x0000000100a209b4
- (id)segmentedFloorModelInCollectionView:(id)arg1;	// IMP=0x0000000100a2099c
- (id)constantFloorModelsInCollectionView:(id)arg1;	// IMP=0x0000000100a20984
- (_Bool)needPullToRefreshInCollectionView:(id)arg1 forSegmentIndex:(long long)arg2;	// IMP=0x0000000100a208d4
- (_Bool)needPullToRefreshInCollectionView:(id)arg1;	// IMP=0x0000000100a2082c
- (_Bool)hasNextPageInCollectionView:(id)arg1 forSegmentIndex:(long long)arg2;	// IMP=0x0000000100a207d8
- (void)notifyToReloadDataWithDataContenxt:(id)arg1;	// IMP=0x0000000100a20728
- (void)notifyToTranferDataIfNeededWithDataContext:(id)arg1;	// IMP=0x0000000100a205ec
- (void)didFetchedModels:(id)arg1 withDataContext:(id)arg2;	// IMP=0x0000000100a203b4
- (void)didFinishFetchDTOs:(id)arg1 withDataContext:(id)arg2;	// IMP=0x0000000100a20028
- (void)fetchDataWithChannelContext:(id)arg1;	// IMP=0x0000000100a1fad8
- (void)trackWithException:(id)arg1;	// IMP=0x0000000100a1f98c
- (void)loadLocalCacheIfNeedWithChannelContext:(id)arg1;	// IMP=0x0000000100a1f31c
- (void)cacheData:(id)arg1 withDataContext:(id)arg2;	// IMP=0x0000000100a1f0fc
- (id)initWithParam:(id)arg1;	// IMP=0x0000000100a1efb8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionView.h"

#import "AEFloorCollectionViewLayoutDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class AEFloorCollectionLayoutAttributes, AEFloorCollectionViewLayout, AETileCollectionViewIndicatorTile, NSArray, NSHashTable, NSMutableArray, NSMutableDictionary, NSString, UIRefreshControl;

@interface AEFloorCollectionView : UICollectionView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AEFloorCollectionViewLayoutDelegate>
{
    struct AEFloorProtocolResponse _protocolResponds;	// 8 = 0x8
    _Bool _showLoadMoreIndicatorViewWhenNilData;	// 11 = 0xb
    _Bool _hasAnyFloors;	// 12 = 0xc
    _Bool _hasReloadCustomFloorOnce;	// 13 = 0xd
    _Bool _refreshing;	// 14 = 0xe
    id <AEFloorCollectionViewDelegate> _floor_delegate;	// 16 = 0x10
    id <AEFloorCollectionViewDataSource> _floor_datasource;	// 24 = 0x18
    double _minimumInteritemSpacing;	// 32 = 0x20
    long long _scrollingDirection;	// 40 = 0x28
    NSMutableDictionary *_registeredTiles;	// 48 = 0x30
    AEFloorCollectionViewLayout *_floorLayout;	// 56 = 0x38
    double _preOffsetY;	// 64 = 0x40
    AEFloorCollectionLayoutAttributes *_collectionLayoutAttributes;	// 72 = 0x48
    NSMutableArray *_customFloors;	// 80 = 0x50
    NSArray *_allFloorModels;	// 88 = 0x58
    AETileCollectionViewIndicatorTile *_footerIndicatorModel;	// 96 = 0x60
    NSHashTable *_observeScrollActionFloors;	// 104 = 0x68
    UIRefreshControl *_refreshCtr;	// 112 = 0x70
}

@property(retain, nonatomic) UIRefreshControl *refreshCtr; // @synthesize refreshCtr=_refreshCtr;
@property(nonatomic) _Bool refreshing; // @synthesize refreshing=_refreshing;
@property(retain, nonatomic) NSHashTable *observeScrollActionFloors; // @synthesize observeScrollActionFloors=_observeScrollActionFloors;
@property(retain, nonatomic) AETileCollectionViewIndicatorTile *footerIndicatorModel; // @synthesize footerIndicatorModel=_footerIndicatorModel;
@property(copy, nonatomic) NSArray *allFloorModels; // @synthesize allFloorModels=_allFloorModels;
@property(retain, nonatomic) NSMutableArray *customFloors; // @synthesize customFloors=_customFloors;
@property(nonatomic) _Bool hasReloadCustomFloorOnce; // @synthesize hasReloadCustomFloorOnce=_hasReloadCustomFloorOnce;
@property(retain, nonatomic) AEFloorCollectionLayoutAttributes *collectionLayoutAttributes; // @synthesize collectionLayoutAttributes=_collectionLayoutAttributes;
@property(nonatomic) double preOffsetY; // @synthesize preOffsetY=_preOffsetY;
@property(retain, nonatomic) AEFloorCollectionViewLayout *floorLayout; // @synthesize floorLayout=_floorLayout;
@property(retain, nonatomic) NSMutableDictionary *registeredTiles; // @synthesize registeredTiles=_registeredTiles;
@property(nonatomic) long long scrollingDirection; // @synthesize scrollingDirection=_scrollingDirection;
@property(nonatomic) double minimumInteritemSpacing; // @synthesize minimumInteritemSpacing=_minimumInteritemSpacing;
@property(nonatomic) _Bool hasAnyFloors; // @synthesize hasAnyFloors=_hasAnyFloors;
@property(nonatomic) _Bool showLoadMoreIndicatorViewWhenNilData; // @synthesize showLoadMoreIndicatorViewWhenNilData=_showLoadMoreIndicatorViewWhenNilData;
@property(nonatomic) __weak id <AEFloorCollectionViewDataSource> floor_datasource; // @synthesize floor_datasource=_floor_datasource;
@property(nonatomic) __weak id <AEFloorCollectionViewDelegate> floor_delegate; // @synthesize floor_delegate=_floor_delegate;
- (void).cxx_destruct;	// IMP=0x00000001009cc4a4
- (struct UIEdgeInsets)contentInsetForCollectionView:(id)arg1 layout:(id)arg2;	// IMP=0x00000001009cc0cc
- (double)collectionView:(id)arg1 layout:(id)arg2 columnCountForSectionAtIndex:(long long)arg3;	// IMP=0x00000001009cc068
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x00000001009cbfe4
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x00000001009cbf80
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x00000001009cbf1c
- (id)collectionView:(id)arg1 layout:(id)arg2 itemAttributesAtIndexPath:(id)arg3;	// IMP=0x00000001009cbe98
- (id)collectionView:(id)arg1 layout:(id)arg2 decorationAttributesInSection:(long long)arg3;	// IMP=0x00000001009cbe34
- (id)collectionView:(id)arg1 layout:(id)arg2 sectionFooterAttributesInSection:(long long)arg3;	// IMP=0x00000001009cbcdc
- (id)collectionView:(id)arg1 layout:(id)arg2 sectionHeaderAttributesInSection:(long long)arg3;	// IMP=0x00000001009cbc1c
- (id)collectionView:(id)arg1 layout:(id)arg2 collectionFooterAttributesInSection:(long long)arg3;	// IMP=0x00000001009cbb4c
- (id)collectionView:(id)arg1 layout:(id)arg2 collectionHeaderAttributesInSection:(long long)arg3;	// IMP=0x00000001009cba7c
- (void)calculateReferenceSizeForAttribute:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000001009cb6ac
- (_Bool)hasMoreData;	// IMP=0x00000001009cb638
- (_Bool)isLoadMoreSection:(long long)arg1;	// IMP=0x00000001009cb5a4
- (void)catchException:(id)arg1 forTile:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000001009cb408
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000001009cb0d8
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000001009cad04
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000001009cac60
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x00000001009cabec
- (void)registerTiles:(id)arg1;	// IMP=0x00000001009ca79c
- (void)buildLayoutAttributesTree;	// IMP=0x00000001009ca4e8
- (void)inspectFloorForScrollObservation:(id)arg1;	// IMP=0x00000001009ca3ec
- (id)floorModelAtIndexPath:(id)arg1 forElementKind:(long long)arg2;	// IMP=0x00000001009ca29c
- (void)scrollViewDidScrollToTop:(id)arg1;	// IMP=0x00000001009ca200
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x00000001009ca164
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x00000001009ca0c8
- (void)scrollViewWillBeginDecelerating:(id)arg1;	// IMP=0x00000001009ca02c
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x00000001009c9f88
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x00000001009c9ec8
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x00000001009c9e2c
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000001009c9d1c
- (void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4;	// IMP=0x00000001009c9b94
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00000001009c9a5c
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;	// IMP=0x00000001009c9808
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00000001009c96d4
- (void)notifySomeFloorsForDidScroll;	// IMP=0x00000001009c9540
- (void)notifyFloorForDidEndDisplay:(id)arg1;	// IMP=0x00000001009c94e0
- (void)notifyFloorForWillDisplay:(id)arg1;	// IMP=0x00000001009c9480
- (void)setContentSize:(struct CGSize)arg1;	// IMP=0x00000001009c9380
- (id)customFloorForModel:(id)arg1;	// IMP=0x00000001009c92fc
- (void)reloadCustomFloors;	// IMP=0x00000001009c8fe8
- (void)deleteItemsAtIndexPaths:(id)arg1;	// IMP=0x00000001009c8d30
- (void)reloadItemsAtIndexPaths:(id)arg1;	// IMP=0x00000001009c8cfc
- (void)reloadSections:(id)arg1;	// IMP=0x00000001009c8cc8
- (void)reloadData;	// IMP=0x00000001009c8bbc
- (void)disposeAfterReload;	// IMP=0x00000001009c8bb8
- (void)prepareForReload;	// IMP=0x00000001009c8b84
- (void)stopRefresh;	// IMP=0x00000001009c8b2c
- (void)startRefresh;	// IMP=0x00000001009c8a48
- (void)initRefreshControl;	// IMP=0x00000001009c8928
- (void)registerDefaultCellsAndDecorations;	// IMP=0x00000001009c863c
- (void)dealloc;	// IMP=0x00000001009c85c4
- (void)commonInit;	// IMP=0x00000001009c83a0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001009c8238
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;	// IMP=0x00000001009c822c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001009c8210

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


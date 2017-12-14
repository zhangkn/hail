//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "AEFloorCollectionViewDataSource.h"
#import "AEFloorCollectionViewDelegate.h"
#import "AEPredictFloorProtocol.h"
#import "AEProductListHeaderViewDelegate.h"
#import "AEProductListSliderProductFloorDelegate.h"
#import "AESearchFunctionViewDelegate.h"
#import "AESearchListAttributeTipsFloorDelegate.h"
#import "AESearchListTagTipsFloorDelegate.h"

@class AEFloorCollectionView, AEProductListSliderProductFloor, AESearchFunctionView, AESearchQRWSuggestion, AESearchResultDTO, AFOrderedDictionary, NSArray, NSString, UIButton, bigSaleMarkItemDTO, brandItemDTO, spellSuggestItemDTO;

@interface AEProductListTableView : UIView <AEPredictFloorProtocol, AEFloorCollectionViewDataSource, AEFloorCollectionViewDelegate, AEProductListSliderProductFloorDelegate, AEProductListHeaderViewDelegate, AESearchFunctionViewDelegate, AESearchListTagTipsFloorDelegate, AESearchListAttributeTipsFloorDelegate>
{
    _Bool _isLogoWall;	// 8 = 0x8
    _Bool _searchFuncViewHiddenStatus;	// 9 = 0x9
    _Bool _isNeedShowGuideAnimation;	// 10 = 0xa
    _Bool _isLoading;	// 11 = 0xb
    _Bool _needHideSpellingCheck;	// 12 = 0xc
    _Bool _isScrollingFast;	// 13 = 0xd
    id _delegate;	// 16 = 0x10
    AEFloorCollectionView *_collectionView;	// 24 = 0x18
    AESearchResultDTO *_currentSearchResultDTO;	// 32 = 0x20
    unsigned long long _slideType;	// 40 = 0x28
    bigSaleMarkItemDTO *_bigSaleMark;	// 48 = 0x30
    AEProductListSliderProductFloor *_currentCellSlider;	// 56 = 0x38
    AESearchFunctionView *_searchFuncView;	// 64 = 0x40
    AFOrderedDictionary *_dataDictionary;	// 72 = 0x48
    long long _showMode;	// 80 = 0x50
    brandItemDTO *_brand;	// 88 = 0x58
    NSString *_selectedLogoWallProperty;	// 96 = 0x60
    spellSuggestItemDTO *_spellSuggest;	// 104 = 0x68
    AESearchQRWSuggestion *_qrwSuggest;	// 112 = 0x70
    CDUnknownBlockType _listRefineAttributeViewSlideUpHandler;	// 120 = 0x78
    NSArray *_sortViewTitleArray;	// 128 = 0x80
    NSString *_keyword;	// 136 = 0x88
    double _lastOffsetCapture;	// 144 = 0x90
    struct CGPoint _lastOffset;	// 152 = 0x98
}

@property(nonatomic) _Bool isScrollingFast; // @synthesize isScrollingFast=_isScrollingFast;
@property(nonatomic) double lastOffsetCapture; // @synthesize lastOffsetCapture=_lastOffsetCapture;
@property(nonatomic) struct CGPoint lastOffset; // @synthesize lastOffset=_lastOffset;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(copy, nonatomic) NSArray *sortViewTitleArray; // @synthesize sortViewTitleArray=_sortViewTitleArray;
@property(copy, nonatomic) CDUnknownBlockType listRefineAttributeViewSlideUpHandler; // @synthesize listRefineAttributeViewSlideUpHandler=_listRefineAttributeViewSlideUpHandler;
@property(retain, nonatomic) AESearchQRWSuggestion *qrwSuggest; // @synthesize qrwSuggest=_qrwSuggest;
@property(retain, nonatomic) spellSuggestItemDTO *spellSuggest; // @synthesize spellSuggest=_spellSuggest;
@property(nonatomic) _Bool needHideSpellingCheck; // @synthesize needHideSpellingCheck=_needHideSpellingCheck;
@property(copy, nonatomic) NSString *selectedLogoWallProperty; // @synthesize selectedLogoWallProperty=_selectedLogoWallProperty;
@property(retain, nonatomic) brandItemDTO *brand; // @synthesize brand=_brand;
@property(nonatomic) long long showMode; // @synthesize showMode=_showMode;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool isNeedShowGuideAnimation; // @synthesize isNeedShowGuideAnimation=_isNeedShowGuideAnimation;
@property(nonatomic) _Bool searchFuncViewHiddenStatus; // @synthesize searchFuncViewHiddenStatus=_searchFuncViewHiddenStatus;
@property(retain, nonatomic) AFOrderedDictionary *dataDictionary; // @synthesize dataDictionary=_dataDictionary;
@property(retain, nonatomic) AESearchFunctionView *searchFuncView; // @synthesize searchFuncView=_searchFuncView;
@property(retain, nonatomic) AEProductListSliderProductFloor *currentCellSlider; // @synthesize currentCellSlider=_currentCellSlider;
@property(retain, nonatomic) bigSaleMarkItemDTO *bigSaleMark; // @synthesize bigSaleMark=_bigSaleMark;
@property(nonatomic) unsigned long long slideType; // @synthesize slideType=_slideType;
@property(retain, nonatomic) AESearchResultDTO *currentSearchResultDTO; // @synthesize currentSearchResultDTO=_currentSearchResultDTO;
@property(retain, nonatomic) AEFloorCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isLogoWall; // @synthesize isLogoWall=_isLogoWall;
- (void).cxx_destruct;	// IMP=0x0000000100cd9148
- (void)dealloc;	// IMP=0x0000000100cd8cd0
- (long long)originShowMode;	// IMP=0x0000000100cd8cc8
- (long long)searchFunctionViewMode;	// IMP=0x0000000100cd8cc0
@property(readonly, nonatomic) UIButton *filterBtn;
- (void)collectionView:(id)arg1 refresh:(long long)arg2;	// IMP=0x0000000100cd8978
- (void)collectionView:(id)arg1 didEndDisplayingViewModel:(id)arg2 forItemAtIndex:(long long)arg3;	// IMP=0x0000000100cd85c4
- (void)collectionView:(id)arg1 willDisplayViewModel:(id)arg2 forItemAtIndex:(long long)arg3;	// IMP=0x0000000100cd8138
- (void)doTesting;	// IMP=0x0000000100cd80f4
- (_Bool)needPullToRefreshInCollectionView:(id)arg1;	// IMP=0x0000000100cd80ec
- (_Bool)hasNextPageInCollectionView:(id)arg1;	// IMP=0x0000000100cd8074
- (id)allFloorModelsInCollectionView:(id)arg1;	// IMP=0x0000000100cd6f80
- (id)listRefineAttributeFloorViewModel:(id)arg1;	// IMP=0x0000000100cd68ac
- (id)emptyRecommendTipFloorViewModel:(id)arg1;	// IMP=0x0000000100cd6780
- (id)emptyRecommendSectionFloorViewModel:(id)arg1;	// IMP=0x0000000100cd6654
- (id)listRefineCategoryFloorViewModel:(id)arg1;	// IMP=0x0000000100cd5f84
- (id)headerFloorViewModel:(id)arg1;	// IMP=0x0000000100cd58a0
- (void)hiddenSearchFunctionInput;	// IMP=0x0000000100cd55fc
- (void)showSearchFunctionInput;	// IMP=0x0000000100cd5348
- (void)collectionViewDidScroll:(id)arg1;	// IMP=0x0000000100cd527c
- (void)collectionViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x0000000100cd5278
- (void)bigSaleStatus:(id)arg1;	// IMP=0x0000000100cd514c
- (void)setSearchFunctionViewWithData:(id)arg1 isBigSale:(_Bool)arg2;	// IMP=0x0000000100cd4db0
- (void)showEmptyPageWithResult:(id)arg1;	// IMP=0x0000000100cd4da0
- (void)resetTableViewFunctions;	// IMP=0x0000000100cd4cf0
- (void)setLessResult;	// IMP=0x0000000100cd49a8
- (void)reloadData;	// IMP=0x0000000100cd492c
- (void)cellScrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x0000000100cd4928
- (void)cellScrollViewWillBeginDragging:(id)arg1;	// IMP=0x0000000100cd4924
- (void)cellScrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x0000000100cd4920
- (void)cellScrollViewDidEndDecelerating:(id)arg1;	// IMP=0x0000000100cd491c
- (void)cellScrollViewDidScroll:(id)arg1 clas:(id)arg2;	// IMP=0x0000000100cd4814
- (void)slidingSelectionViewDidSlidedDwon;	// IMP=0x0000000100cd4798
- (void)sortSeletedTitle:(id)arg1;	// IMP=0x0000000100cd4134
- (void)galleryBtnTapped;	// IMP=0x0000000100cd3d7c
- (void)filterBtnTapped;	// IMP=0x0000000100cd3d3c
- (_Bool)isTagCell:(id)arg1;	// IMP=0x0000000100cd3ca8
- (void)showCellSwipeAnimation;	// IMP=0x0000000100cd2830
- (void)updateFilterBtn;	// IMP=0x0000000100cd2728
- (void)cancelCellSwipeAnimation;	// IMP=0x0000000100cd2268
- (void)bindData:(id)arg1 searchResultDTO:(id)arg2 keyword:(id)arg3;	// IMP=0x0000000100cd1fdc
- (void)hideSpellingCheckWithIgnoreSpellingCheck:(_Bool)arg1;	// IMP=0x0000000100cd1fc4
- (void)resetLogoWall;	// IMP=0x0000000100cd1fb4
- (void)setDefaultSearchFunctionView;	// IMP=0x0000000100cd1de8
- (void)showCellSwipAnimat;	// IMP=0x0000000100cd1d64
- (void)slideUpListRefineAttributeView;	// IMP=0x0000000100cd1ce8
- (void)slideUpSortView;	// IMP=0x0000000100cd1ca8
- (void)scrollToTop;	// IMP=0x0000000100cd1c44
- (void)refreshLogoWall:(id)arg1 isReset:(_Bool)arg2;	// IMP=0x0000000100cd1b30
- (void)searchListAttributeTipsDidSelectedView:(id)arg1 searchTag:(id)arg2;	// IMP=0x0000000100cd1ae0
- (void)searchListTagTipsDidSelectedView:(id)arg1 searchTag:(id)arg2;	// IMP=0x0000000100cd1a0c
- (void)addSubviews;	// IMP=0x0000000100cd0f8c
- (void)initVar;	// IMP=0x0000000100cd0e5c
- (void)clickTagCallback:(id)arg1 tagView:(id)arg2;	// IMP=0x0000000100cd0e58
- (void)refreshCurrentWithData:(id)arg1;	// IMP=0x0000000100cd0e54
- (id)initWithSortViewTitleArray:(id)arg1;	// IMP=0x0000000100cd0d98
- (void)ae_predictResult:(id)arg1;	// IMP=0x0000000100c7d0b0
- (void)ae_collectionView:(id)arg1 willDisplayViewModel:(id)arg2 forItemAtIndex:(long long)arg3 data:(id)arg4;	// IMP=0x0000000100c7d0ac
- (id)ae_predictConfigInfo;	// IMP=0x0000000100c7d0a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


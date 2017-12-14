//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUIViewController.h"

#import "AEUGCPopoverListViewDelegate.h"
#import "AEUGCVideoLPLiveCellDelegate.h"
#import "AEUGCVideoLanguageSelectorViewDelegate.h"
#import "AFCommandViewController.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class AEUGCLiveRoomErrorView, AEUGCPopoverListView, AEUGCPostFollowService, AEUGCVideoLanguageSelectorView, AEUGCVideoService, HMSegmentedControl, NSArray, NSMutableArray, NSMutableDictionary, NSString, UICollectionView, UIRefreshControl, UIView;

@interface AEUGCVideoHighlightLPViewController : AEUIViewController <AEUGCPopoverListViewDelegate, AEUGCVideoLanguageSelectorViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource, AEUGCVideoLPLiveCellDelegate, AFCommandViewController>
{
    _Bool _bottomLoading;	// 8 = 0x8
    _Bool _loadLanguageFromCacheDone;	// 9 = 0x9
    _Bool _loadLiveListDone;	// 10 = 0xa
    _Bool _loadLiveListError;	// 11 = 0xb
    _Bool _hasNext;	// 12 = 0xc
    HMSegmentedControl *_segmentedControl;	// 16 = 0x10
    UIView *_segmentedControlBottomLine;	// 24 = 0x18
    UIRefreshControl *_topRefreshControl;	// 32 = 0x20
    AEUGCLiveRoomErrorView *_errorView;	// 40 = 0x28
    CDUnknownBlockType _errorRefreshBtnClickedBlock;	// 48 = 0x30
    AEUGCPopoverListView *_popoverListView;	// 56 = 0x38
    AEUGCVideoLanguageSelectorView *_languageSelectorView;	// 64 = 0x40
    UICollectionView *_collectionView;	// 72 = 0x48
    NSMutableArray *_liveSceneArr;	// 80 = 0x50
    double _lastScrollOffsetY;	// 88 = 0x58
    NSArray *_languages;	// 96 = 0x60
    NSString *_currentLanguage;	// 104 = 0x68
    NSString *_loadLiveListErrorMsg;	// 112 = 0x70
    NSString *_nextStartRowKey;	// 120 = 0x78
    long long _type;	// 128 = 0x80
    NSMutableDictionary *_languageNameCodeDic;	// 136 = 0x88
    AEUGCVideoService *_videoService;	// 144 = 0x90
    NSMutableDictionary *_cellHeightCache;	// 152 = 0x98
    NSString *_lpId;	// 160 = 0xa0
    AEUGCPostFollowService *_followService;	// 168 = 0xa8
}

@property(retain, nonatomic) AEUGCPostFollowService *followService; // @synthesize followService=_followService;
@property(copy, nonatomic) NSString *lpId; // @synthesize lpId=_lpId;
@property(retain, nonatomic) NSMutableDictionary *cellHeightCache; // @synthesize cellHeightCache=_cellHeightCache;
@property(retain, nonatomic) AEUGCVideoService *videoService; // @synthesize videoService=_videoService;
@property(retain, nonatomic) NSMutableDictionary *languageNameCodeDic; // @synthesize languageNameCodeDic=_languageNameCodeDic;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) _Bool hasNext; // @synthesize hasNext=_hasNext;
@property(copy, nonatomic) NSString *nextStartRowKey; // @synthesize nextStartRowKey=_nextStartRowKey;
@property(copy, nonatomic) NSString *loadLiveListErrorMsg; // @synthesize loadLiveListErrorMsg=_loadLiveListErrorMsg;
@property(nonatomic) _Bool loadLiveListError; // @synthesize loadLiveListError=_loadLiveListError;
@property(nonatomic) _Bool loadLiveListDone; // @synthesize loadLiveListDone=_loadLiveListDone;
@property(copy, nonatomic) NSString *currentLanguage; // @synthesize currentLanguage=_currentLanguage;
@property(copy, nonatomic) NSArray *languages; // @synthesize languages=_languages;
@property(nonatomic) _Bool loadLanguageFromCacheDone; // @synthesize loadLanguageFromCacheDone=_loadLanguageFromCacheDone;
@property(nonatomic) double lastScrollOffsetY; // @synthesize lastScrollOffsetY=_lastScrollOffsetY;
@property(nonatomic) _Bool bottomLoading; // @synthesize bottomLoading=_bottomLoading;
@property(retain, nonatomic) NSMutableArray *liveSceneArr; // @synthesize liveSceneArr=_liveSceneArr;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) AEUGCVideoLanguageSelectorView *languageSelectorView; // @synthesize languageSelectorView=_languageSelectorView;
@property(retain, nonatomic) AEUGCPopoverListView *popoverListView; // @synthesize popoverListView=_popoverListView;
@property(copy, nonatomic) CDUnknownBlockType errorRefreshBtnClickedBlock; // @synthesize errorRefreshBtnClickedBlock=_errorRefreshBtnClickedBlock;
@property(retain, nonatomic) AEUGCLiveRoomErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) UIRefreshControl *topRefreshControl; // @synthesize topRefreshControl=_topRefreshControl;
@property(retain, nonatomic) UIView *segmentedControlBottomLine; // @synthesize segmentedControlBottomLine=_segmentedControlBottomLine;
@property(retain, nonatomic) HMSegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
- (void).cxx_destruct;	// IMP=0x0000000100f79344
- (_Bool)containesLiveScene:(id)arg1;	// IMP=0x0000000100f77fb8
- (void)resetLanguageSelector;	// IMP=0x0000000100f77c5c
- (id)getLanguageNameList;	// IMP=0x0000000100f777b0
- (void)hideErrorMsg;	// IMP=0x0000000100f7776c
- (void)showErrorMsg:(id)arg1 refreshAction:(CDUnknownBlockType)arg2;	// IMP=0x0000000100f77628
- (void)loadLiveListFromNetwork:(id)arg1;	// IMP=0x0000000100f76e18
- (void)refresh;	// IMP=0x0000000100f7640c
- (void)loadLiveListFromCache;	// IMP=0x0000000100f760d0
- (void)loadDataFromCache;	// IMP=0x0000000100f759f8
- (id)pageTrackParams;	// IMP=0x0000000100f75930
- (id)pageTrackName;	// IMP=0x0000000100f75904
- (void)setupConstraints;	// IMP=0x0000000100f747a4
- (void)hideLanguageSelector;	// IMP=0x0000000100f74680
- (void)showLanguageSelector;	// IMP=0x0000000100f74560
- (void)segmentChanged:(id)arg1;	// IMP=0x0000000100f742d8
- (void)onTopRefreshControlChanged:(id)arg1;	// IMP=0x0000000100f74268
- (void)onBottomRefreshControlChanged:(id)arg1;	// IMP=0x0000000100f741a0
- (void)followButtonTapped:(id)arg1;	// IMP=0x0000000100f73604
- (void)remindMeButtonTapped:(id)arg1;	// IMP=0x0000000100f72f84
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100f72d80
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000100f72d34
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000100f72d2c
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000100f72c70
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000100f729c4
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x0000000100f729bc
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x0000000100f729b4
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000100f72814
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;	// IMP=0x0000000100f72768
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x0000000100f72754
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000100f72610
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x0000000100f725fc
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000100f721bc
- (void)popListViewDismissAction:(id)arg1;	// IMP=0x0000000100f7217c
- (void)popListView:(id)arg1 DidSelectItemAtIndex:(unsigned long long)arg2;	// IMP=0x0000000100f71e64
- (void)typeButtonPressed:(id)arg1;	// IMP=0x0000000100f71c90
- (void)viewDidLoad;	// IMP=0x0000000100f71848
- (id)initWithParam:(id)arg1;	// IMP=0x0000000100f71750

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


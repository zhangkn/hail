//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUGCAdapterViewController.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class AEUGCBannerItemViewModel, AEUGCCollectionCardListViewModel, NSDictionary, NSString, UIActivityIndicatorView, UIButton, UICollectionView;

@interface AEUGCBlogPickerHotThemeViewController : AEUGCAdapterViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    NSDictionary *_params;	// 8 = 0x8
    UIButton *_backButton;	// 16 = 0x10
    NSString *_commentListVcActionUUID;	// 24 = 0x18
    UICollectionView *_collectionView;	// 32 = 0x20
    AEUGCBannerItemViewModel *_bannerViewModel;	// 40 = 0x28
    AEUGCCollectionCardListViewModel *_listViewModel;	// 48 = 0x30
    UIActivityIndicatorView *_indicatorView;	// 56 = 0x38
}

@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) AEUGCCollectionCardListViewModel *listViewModel; // @synthesize listViewModel=_listViewModel;
@property(retain, nonatomic) AEUGCBannerItemViewModel *bannerViewModel; // @synthesize bannerViewModel=_bannerViewModel;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;	// IMP=0x0000000100661b1c
- (id)pageTrackParams;	// IMP=0x00000001006619ec
- (id)pageTrackName;	// IMP=0x00000001006619c0
- (void)updateCommentStatus:(id)arg1;	// IMP=0x00000001006618d8
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00000001006616b4
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000100661654
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000010066148c
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000100661428
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000100661420
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x00000001006612bc
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x000000010066128c
- (void)prepareLoadData:(CDUnknownBlockType)arg1;	// IMP=0x0000000100661010
- (id)cardCell:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x000000010065fe78
- (void)configAutoLayout;	// IMP=0x000000010065f8ac
- (void)backAction:(id)arg1;	// IMP=0x000000010065f85c
- (long long)preferredStatusBarStyle;	// IMP=0x000000010065f854
- (void)viewDidLoad;	// IMP=0x000000010065f274
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010065f1fc
- (id)initWithParam:(id)arg1;	// IMP=0x000000010065ef78
- (void)dealloc;	// IMP=0x000000010065ef44

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

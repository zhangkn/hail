//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUGCAdapterViewController.h"

#import "AEUGCPopoverListViewDelegate.h"
#import "AEUGCSelectTypeCollectionViewCellDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class AEUGCPopoverListView, AEUGCSelectTypeCollectionViewCell, AEUGCVenueBlogPickerCardListViewModel, HMSegmentedControl, NSDictionary, NSMutableArray, NSString, UIActivityIndicatorView, UICollectionView;

@interface AEUGCVenueBlogPickerViewController : AEUGCAdapterViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, AEUGCSelectTypeCollectionViewCellDelegate, UICollectionViewDataSource, AEUGCPopoverListViewDelegate>
{
    NSDictionary *_params;	// 8 = 0x8
    NSString *_commentListVcActionUUID;	// 16 = 0x10
    _Bool _hideSegmentCtr;	// 24 = 0x18
    unsigned long long screenType;	// 32 = 0x20
    HMSegmentedControl *_segmentedControl;	// 40 = 0x28
    UICollectionView *_collectionView;	// 48 = 0x30
    NSMutableArray *_popoverItems;	// 56 = 0x38
    AEUGCVenueBlogPickerCardListViewModel *_cardlistViewModel;	// 64 = 0x40
    AEUGCSelectTypeCollectionViewCell *_selectionCell;	// 72 = 0x48
    AEUGCPopoverListView *_popoverListView;	// 80 = 0x50
    UIActivityIndicatorView *_indicatorView;	// 88 = 0x58
}

@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) AEUGCPopoverListView *popoverListView; // @synthesize popoverListView=_popoverListView;
@property(retain, nonatomic) AEUGCSelectTypeCollectionViewCell *selectionCell; // @synthesize selectionCell=_selectionCell;
@property(retain, nonatomic) AEUGCVenueBlogPickerCardListViewModel *cardlistViewModel; // @synthesize cardlistViewModel=_cardlistViewModel;
@property(copy, nonatomic) NSMutableArray *popoverItems; // @synthesize popoverItems=_popoverItems;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) HMSegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
- (void).cxx_destruct;	// IMP=0x00000001006c9f80
- (id)pageTrackParams;	// IMP=0x00000001006c9ce0
- (id)pageTrackName;	// IMP=0x00000001006c9c94
- (id)showMode;	// IMP=0x00000001006c9c68
- (void)updateCommentStatus:(id)arg1;	// IMP=0x00000001006c9b80
- (void)popListViewDismissAction:(id)arg1;	// IMP=0x00000001006c9b68
- (void)popListView:(id)arg1 DidSelectItemAtIndex:(unsigned long long)arg2;	// IMP=0x00000001006c9558
- (void)typeButtonPressed:(id)arg1;	// IMP=0x00000001006c9260
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00000001006c903c
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000001006c8ee4
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000001006c8e84
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000001006c8e2c
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x00000001006c8e24
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x00000001006c8e14
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x00000001006c8cf0
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x00000001006c8cdc
- (unsigned long long)convertToOrderByFromIndex:(unsigned long long)arg1;	// IMP=0x00000001006c8cc4
- (unsigned long long)convertToIndexFromOrderBy:(unsigned long long)arg1;	// IMP=0x00000001006c8cb0
- (id)cardCell:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000001006c7b00
- (void)prepareLoadListData:(CDUnknownBlockType)arg1;	// IMP=0x00000001006c7884
- (void)loadData;	// IMP=0x00000001006c7748
- (void)configAutoLayout;	// IMP=0x00000001006c706c
- (void)configUI;	// IMP=0x00000001006c6f58
- (void)viewDidLoad;	// IMP=0x00000001006c6bec
- (id)initWithParam:(id)arg1;	// IMP=0x00000001006c6704

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

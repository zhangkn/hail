//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUGCAdapterViewController.h"

#import "AEUGCPhotosCollectionViewModelDelegate.h"
#import "AEUGCPopoverListViewDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class AEUGCPhotosCollectionViewModel, AEUGCPopoverListView, AEUGCTitleArrowButton, NSArray, NSMutableArray, NSString, PHCachingImageManager, UICollectionView;

@interface AEUGCPhotosCollectionViewController : AEUGCAdapterViewController <UICollectionViewDelegate, UICollectionViewDataSource, UIImagePickerControllerDelegate, UINavigationControllerDelegate, AEUGCPhotosCollectionViewModelDelegate, AEUGCPopoverListViewDelegate>
{
    AEUGCPhotosCollectionViewModel *_photoCollectionVM;	// 8 = 0x8
    _Bool _multiSelectionModel;	// 16 = 0x10
    _Bool _isAllowCrop;	// 17 = 0x11
    id <AEUGCPhotosCollectionViewControllerDelegate> _delegate;	// 24 = 0x18
    unsigned long long _maximumSelectionCount;	// 32 = 0x20
    UICollectionView *_collectionView;	// 40 = 0x28
    NSArray *_albums;	// 48 = 0x30
    PHCachingImageManager *_imageManage;	// 56 = 0x38
    AEUGCPopoverListView *_popoverListView;	// 64 = 0x40
    AEUGCTitleArrowButton *_titleButton;	// 72 = 0x48
    NSMutableArray *_selPHAssetIds;	// 80 = 0x50
}

@property(retain, nonatomic) NSMutableArray *selPHAssetIds; // @synthesize selPHAssetIds=_selPHAssetIds;
@property(retain, nonatomic) AEUGCTitleArrowButton *titleButton; // @synthesize titleButton=_titleButton;
@property(retain, nonatomic) AEUGCPopoverListView *popoverListView; // @synthesize popoverListView=_popoverListView;
@property(retain, nonatomic) PHCachingImageManager *imageManage; // @synthesize imageManage=_imageManage;
@property(nonatomic) NSArray *albums; // @synthesize albums=_albums;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) unsigned long long maximumSelectionCount; // @synthesize maximumSelectionCount=_maximumSelectionCount;
@property(nonatomic) _Bool isAllowCrop; // @synthesize isAllowCrop=_isAllowCrop;
@property(nonatomic) _Bool multiSelectionModel; // @synthesize multiSelectionModel=_multiSelectionModel;
@property(nonatomic) __weak id <AEUGCPhotosCollectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001007a0350
- (void)photoLibraryDidChange;	// IMP=0x00000001007a0070
- (void)popListView:(id)arg1 DidSelectItemAtIndex:(unsigned long long)arg2;	// IMP=0x000000010079f674
- (void)popListViewDismissAction:(id)arg1;	// IMP=0x000000010079f5f4
- (void)addPhotosAction:(id)arg1;	// IMP=0x000000010079f09c
- (void)backBarButtonAction:(id)arg1;	// IMP=0x000000010079efec
- (void)imagePickerControllerDidCancel:(id)arg1;	// IMP=0x000000010079efc8
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;	// IMP=0x000000010079ed38
- (void)saveImageToLibrary:(id)arg1;	// IMP=0x000000010079ec2c
- (void)handlePhotoInEditViewController:(id)arg1;	// IMP=0x000000010079e93c
- (void)handleAssetsSelectionAtIndex:(id)arg1;	// IMP=0x000000010079e62c
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000010079e2d4
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x000000010079e2c0
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000010079e248
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000010079dc50
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000010079dbd0
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x000000010079dbc8
- (void)updateCollectionTitle:(id)arg1;	// IMP=0x000000010079db58
- (void)didReceiveMemoryWarning;	// IMP=0x000000010079db24
- (void)viewDidLoad;	// IMP=0x000000010079d2ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


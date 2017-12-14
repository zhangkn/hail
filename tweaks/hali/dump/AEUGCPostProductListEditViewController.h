//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUGCAdapterViewController.h"

#import "AEUGCPostProductAddtionDelegate.h"
#import "AEUGCPostProductContentEditViewDelegate.h"
#import "CHTCollectionViewDelegateWaterfallLayout.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class AEUGCPostProductCardEditViewController, AEUGCPostProductContentEditCell, AEUGCPostProductListViewModel, NSDictionary, NSString, UIButton, UICollectionView, UIImagePickerController;

@interface AEUGCPostProductListEditViewController : AEUGCAdapterViewController <UICollectionViewDelegate, UICollectionViewDataSource, UIImagePickerControllerDelegate, UINavigationControllerDelegate, AEUGCPostProductContentEditViewDelegate, CHTCollectionViewDelegateWaterfallLayout, AEUGCPostProductAddtionDelegate>
{
    UIButton *_addProductButton;	// 8 = 0x8
    UIImagePickerController *_temImagePickVc;	// 16 = 0x10
    UICollectionView *_collectionView;	// 24 = 0x18
    AEUGCPostProductListViewModel *_viewModel;	// 32 = 0x20
    AEUGCPostProductContentEditCell *_contentEditCell;	// 40 = 0x28
    AEUGCPostProductCardEditViewController *_cardEditViewController;	// 48 = 0x30
    NSDictionary *_params;	// 56 = 0x38
    struct CGRect _keyboardFrame;	// 64 = 0x40
}

+ (struct CGSize)calculateProductListItemCellSizeWithModel:(id)arg1 withpreferredMaxLayoutWidth:(double)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000100e127d0
+ (struct CGSize)calculateTagEditCellSizeWithModel:(id)arg1 withpreferredMaxLayoutWidth:(double)arg2;	// IMP=0x0000000100e12584
@property(copy, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(nonatomic) struct CGRect keyboardFrame; // @synthesize keyboardFrame=_keyboardFrame;
@property(retain, nonatomic) AEUGCPostProductCardEditViewController *cardEditViewController; // @synthesize cardEditViewController=_cardEditViewController;
@property(retain, nonatomic) AEUGCPostProductContentEditCell *contentEditCell; // @synthesize contentEditCell=_contentEditCell;
@property(retain, nonatomic) AEUGCPostProductListViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;	// IMP=0x0000000100e17364
- (id)pageTrackName;	// IMP=0x0000000100e171cc
- (void)keyboardWillChangeFrameNotification:(id)arg1;	// IMP=0x0000000100e17008
- (void)didAddProductItems:(id)arg1 fromViewController:(id)arg2;	// IMP=0x0000000100e16a88
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000100e16880
- (void)imagePickerControllerDidCancel:(id)arg1;	// IMP=0x0000000100e16828
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;	// IMP=0x0000000100e161b8
- (void)contentEditView:(id)arg1 didChangeDescription:(id)arg2;	// IMP=0x0000000100e1619c
- (void)contentEditView:(id)arg1 didChangeTitle:(id)arg2;	// IMP=0x0000000100e16180
- (void)contentEditView:(id)arg1 didChangeHeight:(double)arg2;	// IMP=0x0000000100e16120
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100e14d50
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000100e14ce8
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000100e14ce0
- (long long)collectionView:(id)arg1 layout:(id)arg2 columnCountForSection:(long long)arg3;	// IMP=0x0000000100e14cd0
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x0000000100e14ca0
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000100e149d8
- (void)doneAction:(id)arg1;	// IMP=0x0000000100e144e4
- (void)backAction:(id)arg1;	// IMP=0x0000000100e14498
- (void)cancelAction:(id)arg1;	// IMP=0x0000000100e140cc
- (void)addTagAction:(id)arg1;	// IMP=0x0000000100e13de0
- (void)addProductAction:(id)arg1;	// IMP=0x0000000100e13984
- (void)adjustContentEditViewToVisiable;	// IMP=0x0000000100e13708
- (void)showAddBannerActionSheet;	// IMP=0x0000000100e13384
- (void)enterBannerLibrary;	// IMP=0x0000000100e130cc
- (void)enterPhotoLibrary;	// IMP=0x0000000100e13048
- (void)enterTakePhoto;	// IMP=0x0000000100e12df0
- (void)enterCardEditViewControllerWithIndex:(unsigned long long)arg1 enterEdit:(_Bool)arg2;	// IMP=0x0000000100e1292c
- (_Bool)showErrorMsgIfNeed:(unsigned long long)arg1 testErrorType:(unsigned long long)arg2;	// IMP=0x0000000100e123fc
- (void)updateAddButton;	// IMP=0x0000000100e1201c
- (void)configAutoLayout;	// IMP=0x0000000100e11b1c
- (void)configUI;	// IMP=0x0000000100e118ac
- (void)configDataSource;	// IMP=0x0000000100e117dc
- (void)defaultConfig;	// IMP=0x0000000100e11774
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100e113cc
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100e11354
- (void)viewDidLoad;	// IMP=0x0000000100e10e94
- (unsigned long long)displayMode;	// IMP=0x0000000100e10e8c
- (id)initWithParam:(id)arg1;	// IMP=0x0000000100e10de0
- (void)dealloc;	// IMP=0x0000000100e10d64

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


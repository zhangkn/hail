//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUGCAdapterViewController.h"

#import "AEUGCPhotosCollectionViewControllerDelegate.h"
#import "AEUGCPostPicTextHashTagEditViewControllerDelegate.h"
#import "AEUGCPostPicTextIntroEditViewDelegate.h"
#import "AEUGCPostProductAddtionDelegate.h"
#import "CHTCollectionViewDelegateWaterfallLayout.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UITextFieldDelegate.h"

@class AEUGCPostPicTextFloattingToolBar, AEUGCPostPicTextIntroEditCell, AEUGCPostPicTextViewModel, NSDictionary, NSString, UICollectionView, UITextField;

@interface AEUGCPostPicTextViewController : AEUGCAdapterViewController <UICollectionViewDelegate, UICollectionViewDataSource, UINavigationControllerDelegate, AEUGCPostPicTextIntroEditViewDelegate, CHTCollectionViewDelegateWaterfallLayout, AEUGCPostPicTextHashTagEditViewControllerDelegate, AEUGCPhotosCollectionViewControllerDelegate, AEUGCPostProductAddtionDelegate, UITextFieldDelegate>
{
    struct CGRect _keyboardFrame;	// 8 = 0x8
    CDUnknownBlockType _insertPicElementHandler;	// 40 = 0x28
    CDUnknownBlockType _insertProductElementHandler;	// 48 = 0x30
    CDUnknownBlockType _insertVideoElementHandler;	// 56 = 0x38
    CDUnknownBlockType _queryDraftHandler;	// 64 = 0x40
    UICollectionView *_collectionView;	// 72 = 0x48
    AEUGCPostPicTextViewModel *_viewModel;	// 80 = 0x50
    AEUGCPostPicTextIntroEditCell *_introSectionEditCell;	// 88 = 0x58
    AEUGCPostPicTextFloattingToolBar *_floattingToolBar;	// 96 = 0x60
    NSDictionary *_params;	// 104 = 0x68
    UITextField *_videoLinkTextField;	// 112 = 0x70
}

@property(retain, nonatomic) UITextField *videoLinkTextField; // @synthesize videoLinkTextField=_videoLinkTextField;
@property(copy, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) AEUGCPostPicTextFloattingToolBar *floattingToolBar; // @synthesize floattingToolBar=_floattingToolBar;
@property(retain, nonatomic) AEUGCPostPicTextIntroEditCell *introSectionEditCell; // @synthesize introSectionEditCell=_introSectionEditCell;
@property(retain, nonatomic) AEUGCPostPicTextViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;	// IMP=0x0000000100e27534
- (unsigned long long)displayMode;	// IMP=0x0000000100e273a8
- (id)pageTrackName;	// IMP=0x0000000100e2737c
- (void)keyboardWillChangeFrameNotification:(id)arg1;	// IMP=0x0000000100e27218
- (void)keyboardDidHideNotification:(id)arg1;	// IMP=0x0000000100e271b4
- (void)hashTagEditViewControllerEditDone:(id)arg1;	// IMP=0x0000000100e268a0
- (void)photoCollectionViewController:(id)arg1 didSelectImages:(id)arg2;	// IMP=0x0000000100e266e8
- (void)photoCollectionViewControllerCancledPickImage:(id)arg1;	// IMP=0x0000000100e266e4
- (void)photoCollectionViewController:(id)arg1 didFinishPickImage:(id)arg2;	// IMP=0x0000000100e26510
- (void)didAddProductItems:(id)arg1 fromViewController:(id)arg2;	// IMP=0x0000000100e2647c
- (_Bool)introEditViewGuidanceShouldReturn:(id)arg1;	// IMP=0x0000000100e2638c
- (void)introEditView:(id)arg1 didChangeHeight:(double)arg2;	// IMP=0x0000000100e26328
- (void)introEditView:(id)arg1 didChangeGuidance:(id)arg2;	// IMP=0x0000000100e262b4
- (void)introEditView:(id)arg1 didChangeTitle:(id)arg2;	// IMP=0x0000000100e26240
- (void)introEditViewDidBeginGuidanceEditing:(id)arg1;	// IMP=0x0000000100e26230
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100e234e4
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000100e23454
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000100e2344c
- (long long)collectionView:(id)arg1 layout:(id)arg2 columnCountForSection:(long long)arg3;	// IMP=0x0000000100e23444
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x0000000100e23414
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000100e22e68
- (void)addVideoAction:(id)arg1;	// IMP=0x0000000100e224f0
- (void)addProductsAction:(id)arg1;	// IMP=0x0000000100e21a04
- (void)addPhotosAction:(id)arg1;	// IMP=0x0000000100e21390
- (void)nextAction:(id)arg1;	// IMP=0x0000000100e211e4
- (void)cancelAction:(id)arg1;	// IMP=0x0000000100e20888
- (void)processInsertWithReserveText:(id)arg1 returnText:(id)arg2 currentIndex:(unsigned long long)arg3 insertHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100e20510
- (id)returnTextBehindOfCursor;	// IMP=0x0000000100e202b4
- (id)reserveTextAheadOfCursor;	// IMP=0x0000000100e200cc
- (id)insertIndexPath;	// IMP=0x0000000100e1fe34
- (_Bool)hasFirstResponder;	// IMP=0x0000000100e1fd08
- (void)exitEditIfNeed;	// IMP=0x0000000100e1fbcc
- (void)adjustviewToVisiableWithAnimation:(_Bool)arg1;	// IMP=0x0000000100e1f5f4
- (void)configAutoLayout;	// IMP=0x0000000100e1f420
- (void)configUI;	// IMP=0x0000000100e1ee84
- (void)configDataSource;	// IMP=0x0000000100e1ee2c
- (void)defaultConfig;	// IMP=0x0000000100e1ed68
- (void)viewDidLayoutSubviews;	// IMP=0x0000000100e1ed34
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100e1ecd0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100e1ec58
- (void)viewDidLoad;	// IMP=0x0000000100e1e008
- (id)initWithParam:(id)arg1;	// IMP=0x0000000100e1df40
- (void)dealloc;	// IMP=0x0000000100e1df0c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

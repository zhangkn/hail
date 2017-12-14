//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AEUGCMaskControllerDelegate.h"
#import "AEUGCPostProductCardEditViewDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UITextViewDelegate.h"

@class AEUGCMaskController, AEUGCPostProductCardEditView, AEUGCPostProductViewModel<AEUGCPostProductCardEditViewControllerModelProtocol>, NSString;

@interface AEUGCPostProductCardEditViewController : NSObject <AEUGCMaskControllerDelegate, AEUGCPostProductCardEditViewDelegate, UITextViewDelegate, UICollectionViewDataSource>
{
    CDUnknownBlockType _cancelHandler;	// 8 = 0x8
    CDUnknownBlockType _doneHandler;	// 16 = 0x10
    AEUGCPostProductCardEditView *_view;	// 24 = 0x18
    AEUGCMaskController *_maskController;	// 32 = 0x20
    AEUGCPostProductViewModel<AEUGCPostProductCardEditViewControllerModelProtocol> *_viewModel;	// 40 = 0x28
}

@property(nonatomic) __weak AEUGCPostProductViewModel<AEUGCPostProductCardEditViewControllerModelProtocol> *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) AEUGCMaskController *maskController; // @synthesize maskController=_maskController;
@property(readonly, nonatomic) AEUGCPostProductCardEditView *view; // @synthesize view=_view;
- (void).cxx_destruct;	// IMP=0x0000000100dd6678
- (void)keyboardHeightChanged:(id)arg1;	// IMP=0x0000000100dd5fbc
- (void)productCardEditCancel:(id)arg1;	// IMP=0x0000000100dd5f7c
- (void)productCardEditDone:(id)arg1;	// IMP=0x0000000100dd5f3c
- (void)productCardEditView:(id)arg1 didChangeText:(id)arg2;	// IMP=0x0000000100dd5e84
- (void)maskControllerWillDismiss:(id)arg1;	// IMP=0x0000000100dd5e38
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100dd5924
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000100dd58b4
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000100dd58a0
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000100dd57d8
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000100dd5720
- (void)showWithEnterEdit:(_Bool)arg1;	// IMP=0x0000000100dd4750
- (void)viewDidLoad;	// IMP=0x0000000100dd449c
- (void)loadView;	// IMP=0x0000000100dd42ec
- (id)initWithModel:(id)arg1 doneHandler:(CDUnknownBlockType)arg2 cancelHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100dd3ea8
- (void)dealloc;	// IMP=0x0000000100dd3e2c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

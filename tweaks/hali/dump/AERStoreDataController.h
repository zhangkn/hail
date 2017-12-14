//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AEFloorCollectionViewDataSource.h"
#import "TileCollectionViewDataSource.h"

@class AERStoreService, AERStoreViewModel, NSString;

@interface AERStoreDataController : NSObject <TileCollectionViewDataSource, AEFloorCollectionViewDataSource>
{
    NSString *_poplayerKey;	// 8 = 0x8
    NSString *_poplayerAnimationType;	// 16 = 0x10
    _Bool _isFirstFetch;	// 24 = 0x18
    AERStoreViewModel *_viewModel;	// 32 = 0x20
    id <AERStoreDataDelegate> _delegate;	// 40 = 0x28
    NSString *_sellerAdminSeq;	// 48 = 0x30
    NSString *_storeNo;	// 56 = 0x38
    NSString *_previewFlag;	// 64 = 0x40
    NSString *_extParams;	// 72 = 0x48
    AERStoreService *_storeService;	// 80 = 0x50
}

@property(nonatomic) _Bool isFirstFetch; // @synthesize isFirstFetch=_isFirstFetch;
@property(retain, nonatomic) AERStoreService *storeService; // @synthesize storeService=_storeService;
@property(copy, nonatomic) NSString *extParams; // @synthesize extParams=_extParams;
@property(copy, nonatomic) NSString *previewFlag; // @synthesize previewFlag=_previewFlag;
@property(copy, nonatomic) NSString *storeNo; // @synthesize storeNo=_storeNo;
@property(copy, nonatomic) NSString *sellerAdminSeq; // @synthesize sellerAdminSeq=_sellerAdminSeq;
@property(nonatomic) __weak id <AERStoreDataDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AERStoreViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;	// IMP=0x0000000100d4877c
- (id)allFloorModelsInCollectionView:(id)arg1;	// IMP=0x0000000100d4861c
- (id)stacksInCollectionView:(id)arg1;	// IMP=0x0000000100d485c8
- (void)notifyToReloadData:(_Bool)arg1 withStoreDTO:(id)arg2;	// IMP=0x0000000100d48508
- (void)notifyToTranferDataIfNeeded;	// IMP=0x0000000100d48504
- (void)loadStoreFloorDataError:(id)arg1;	// IMP=0x0000000100d48428
- (void)loadStoreFloorDataSuccess:(id)arg1;	// IMP=0x0000000100d4761c
- (void)fetchStoreData;	// IMP=0x0000000100d472d8
- (id)initWithParam:(id)arg1;	// IMP=0x0000000100d47074

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


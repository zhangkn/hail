//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class AEUGCVideoLiveRoomViewModel, NSString, UIButton, UICollectionView, UILabel;

@interface AEUGCVideoFullScreenPresenterView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    id <AEUGCVideoFullScreenPresenterViewDelegate> _delegate;	// 8 = 0x8
    UIView *_titleView;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UIButton *_closeButton;	// 32 = 0x20
    UIView *_line;	// 40 = 0x28
    UICollectionView *_collectionView;	// 48 = 0x30
    UILabel *_infoLabel;	// 56 = 0x38
    AEUGCVideoLiveRoomViewModel *_liveRoomViewModel;	// 64 = 0x40
}

@property(retain, nonatomic) AEUGCVideoLiveRoomViewModel *liveRoomViewModel; // @synthesize liveRoomViewModel=_liveRoomViewModel;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) __weak id <AEUGCVideoFullScreenPresenterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100fcb0e4
- (void)checkAndLoadMore;	// IMP=0x0000000100fca7a8
- (void)configConstraints;	// IMP=0x0000000100fc95ac
- (void)onCloseButtonTapped:(id)arg1;	// IMP=0x0000000100fc94a8
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000100fc94a0
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100fc8eb4
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000100fc8e40
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x0000000100fc8e38
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x0000000100fc8e30
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x0000000100fc8e1c
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000100fc8d08
- (void)refresh;	// IMP=0x0000000100fc8be8
- (id)init;	// IMP=0x0000000100fc8878

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


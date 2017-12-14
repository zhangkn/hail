//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSArray, NSString, UICollectionView, UIColor;

@interface AEUGCSlidersContainer : UIView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    _Bool _updateSelectionPosition;	// 8 = 0x8
    NSArray *_dataSource;	// 16 = 0x10
    long long _style;	// 24 = 0x18
    id <AEUGCSlidersContainerDelegate> _delegate;	// 32 = 0x20
    UIColor *_collectionViewBackgroundColor;	// 40 = 0x28
    UICollectionView *_collectionView;	// 48 = 0x30
}

@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool updateSelectionPosition; // @synthesize updateSelectionPosition=_updateSelectionPosition;
@property(retain, nonatomic) UIColor *collectionViewBackgroundColor; // @synthesize collectionViewBackgroundColor=_collectionViewBackgroundColor;
@property(nonatomic) __weak id <AEUGCSlidersContainerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;	// IMP=0x00000001007c6170
- (void)updateSelectionPosition:(id)arg1;	// IMP=0x00000001007c5fc8
- (void)reload;	// IMP=0x00000001007c5f88
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;	// IMP=0x00000001007c581c
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000001007c5754
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000001007c5604
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x00000001007c5540
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000001007c5210
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000001007c51c4
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x00000001007c51bc
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001007c4f54

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

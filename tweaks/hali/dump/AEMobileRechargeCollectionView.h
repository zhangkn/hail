//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSArray, NSString;

@interface AEMobileRechargeCollectionView : UICollectionView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    NSArray *_sections;	// 8 = 0x8
}

@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
- (void).cxx_destruct;	// IMP=0x000000010050f524
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000010050f324
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000010050f1a0
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000010050f100
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x000000010050f0b4
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;	// IMP=0x000000010050efd0
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x000000010050eeec
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x000000010050ee6c
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x000000010050edec
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x000000010050ed4c
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000010050eba8
- (void)registerFooterViewModelClass:(Class)arg1 forViewClass:(Class)arg2;	// IMP=0x000000010050eb10
- (void)registerHeaderViewModelClass:(Class)arg1 forViewClass:(Class)arg2;	// IMP=0x000000010050ea78
- (void)registerCellModelClass:(Class)arg1 forCellClass:(Class)arg2;	// IMP=0x000000010050e9f0
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;	// IMP=0x000000010050e944

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

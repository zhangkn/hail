//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewDelegateFlowLayout.h"

@class AEFloorCollectionView, AEFloorCollectionViewLayout, AEFloorLayoutAttributes, NSIndexPath;

@protocol AEFloorCollectionViewLayoutDelegate <UICollectionViewDelegateFlowLayout>
- (double)collectionView:(AEFloorCollectionView *)arg1 layout:(AEFloorCollectionViewLayout *)arg2 columnCountForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)contentInsetForCollectionView:(AEFloorCollectionView *)arg1 layout:(AEFloorCollectionViewLayout *)arg2;
- (struct UIEdgeInsets)collectionView:(AEFloorCollectionView *)arg1 layout:(AEFloorCollectionViewLayout *)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(AEFloorCollectionView *)arg1 layout:(AEFloorCollectionViewLayout *)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(AEFloorCollectionView *)arg1 layout:(AEFloorCollectionViewLayout *)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (AEFloorLayoutAttributes *)collectionView:(AEFloorCollectionView *)arg1 layout:(AEFloorCollectionViewLayout *)arg2 itemAttributesAtIndexPath:(NSIndexPath *)arg3;
- (AEFloorLayoutAttributes *)collectionView:(AEFloorCollectionView *)arg1 layout:(AEFloorCollectionViewLayout *)arg2 decorationAttributesInSection:(long long)arg3;
- (AEFloorLayoutAttributes *)collectionView:(AEFloorCollectionView *)arg1 layout:(AEFloorCollectionViewLayout *)arg2 sectionFooterAttributesInSection:(long long)arg3;
- (AEFloorLayoutAttributes *)collectionView:(AEFloorCollectionView *)arg1 layout:(AEFloorCollectionViewLayout *)arg2 sectionHeaderAttributesInSection:(long long)arg3;
- (AEFloorLayoutAttributes *)collectionView:(AEFloorCollectionView *)arg1 layout:(AEFloorCollectionViewLayout *)arg2 collectionFooterAttributesInSection:(long long)arg3;
- (AEFloorLayoutAttributes *)collectionView:(AEFloorCollectionView *)arg1 layout:(AEFloorCollectionViewLayout *)arg2 collectionHeaderAttributesInSection:(long long)arg3;
@end


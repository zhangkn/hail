//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TileCellDisplayProtocol.h"

@class UICollectionView;

@protocol AETileDisplayDelegate <TileCellDisplayProtocol>

@optional
- (void)dismissInCollectionView:(UICollectionView *)arg1;
- (void)showInCollectionView:(UICollectionView *)arg1;
- (void)collectionViewDidScroll:(UICollectionView *)arg1;
- (_Bool)needObserveCollectionViewScrollState;
@end


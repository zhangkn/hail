//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AEFloorPagingCollectionView;

@protocol AEFloorPagingCollectionViewPageDelegate <NSObject>
- (void)pagingCollectionView:(AEFloorPagingCollectionView *)arg1 didScrollToPage:(long long)arg2 fromPage:(long long)arg3;

@optional
- (void)pagingCollectionViewDidEndDecelerating:(AEFloorPagingCollectionView *)arg1;
- (void)pagingCollectionViewDidScroll:(AEFloorPagingCollectionView *)arg1;
@end


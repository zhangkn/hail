//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class TileCollectionView, UIActivityIndicatorView;

@interface TileCollectionRefresher : UIControl
{
    _Bool _refreshing;	// 8 = 0x8
    _Bool _prefetchEnabled;	// 9 = 0x9
    _Bool _refreshingWhenCollectionViewIsEmpty;	// 10 = 0xa
    _Bool _alreadyUpdatedContentInset;	// 11 = 0xb
    _Bool _prefetchedBeforeRefreshing;	// 12 = 0xc
    double _notifiedContentSize;	// 16 = 0x10
    double _prefetchThreshold;	// 24 = 0x18
    double _previousContentOffset;	// 32 = 0x20
    double _previousContentSize;	// 40 = 0x28
    TileCollectionView *_collectionView;	// 48 = 0x30
    UIActivityIndicatorView *_indicator;	// 56 = 0x38
}

@property(retain, nonatomic) UIActivityIndicatorView *indicator; // @synthesize indicator=_indicator;
@property(nonatomic) __weak TileCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool prefetchedBeforeRefreshing; // @synthesize prefetchedBeforeRefreshing=_prefetchedBeforeRefreshing;
@property(nonatomic) double previousContentSize; // @synthesize previousContentSize=_previousContentSize;
@property(nonatomic) double previousContentOffset; // @synthesize previousContentOffset=_previousContentOffset;
@property(nonatomic) double prefetchThreshold; // @synthesize prefetchThreshold=_prefetchThreshold;
@property(nonatomic) double notifiedContentSize; // @synthesize notifiedContentSize=_notifiedContentSize;
@property(nonatomic) _Bool alreadyUpdatedContentInset; // @synthesize alreadyUpdatedContentInset=_alreadyUpdatedContentInset;
@property(nonatomic) _Bool refreshingWhenCollectionViewIsEmpty; // @synthesize refreshingWhenCollectionViewIsEmpty=_refreshingWhenCollectionViewIsEmpty;
@property(nonatomic) _Bool prefetchEnabled; // @synthesize prefetchEnabled=_prefetchEnabled;
@property(nonatomic, getter=isRefreshing) _Bool refreshing; // @synthesize refreshing=_refreshing;
- (void).cxx_destruct;	// IMP=0x0000000101a437b4
- (void)setEnabled:(_Bool)arg1;	// IMP=0x0000000101a43268
- (void)notifyCollectionViewToRefresh;	// IMP=0x0000000101a431f4
- (void)endRefreshing;	// IMP=0x0000000101a4319c
- (void)beginRefreshing;	// IMP=0x0000000101a43144
- (_Bool)shouldEndRefreshing:(id)arg1;	// IMP=0x0000000101a43090
- (_Bool)shouldBeginRefreshing:(id)arg1;	// IMP=0x0000000101a42f28
- (_Bool)shouldPrefetch:(id)arg1;	// IMP=0x0000000101a42c44
- (void)collectionViewDidUpdatedContentSize:(id)arg1;	// IMP=0x0000000101a42b50
- (void)collectionViewDidScroll:(id)arg1;	// IMP=0x0000000101a42a4c
- (void)willMoveToSuperview:(id)arg1;	// IMP=0x0000000101a429b0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000101a4292c

@end


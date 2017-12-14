//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TileCollectionView, TileFlowLayout;

@interface TileFlowLayoutContext : NSObject
{
    TileCollectionView *_collectionView;	// 8 = 0x8
    TileFlowLayout *_collectionViewFlowLayout;	// 16 = 0x10
    unsigned long long _layoutDirection;	// 24 = 0x18
    struct CGPoint _origin;	// 32 = 0x20
    struct CGSize _size;	// 48 = 0x30
}

@property(nonatomic) unsigned long long layoutDirection; // @synthesize layoutDirection=_layoutDirection;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) struct CGPoint origin; // @synthesize origin=_origin;
@property(nonatomic) __weak TileFlowLayout *collectionViewFlowLayout; // @synthesize collectionViewFlowLayout=_collectionViewFlowLayout;
@property(nonatomic) __weak TileCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;	// IMP=0x0000000101a50cb4

@end


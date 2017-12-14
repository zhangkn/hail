//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSString, UICollectionView, UIView;

@interface AEUGCShopNewsPicTextCouponListCell : UICollectionViewCell <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    UICollectionView *_collectionView;	// 8 = 0x8
    UIView *_bottomLine;	// 16 = 0x10
    double _preferredMaxLayoutWidth;	// 24 = 0x18
    CDUnknownBlockType _acquireCouponHandler;	// 32 = 0x20
    id <AEUGCShopNewsPicTextCouponCellViewModel> _viewModel;	// 40 = 0x28
}

@property(nonatomic) __weak id <AEUGCShopNewsPicTextCouponCellViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) CDUnknownBlockType acquireCouponHandler; // @synthesize acquireCouponHandler=_acquireCouponHandler;
@property(nonatomic) double preferredMaxLayoutWidth; // @synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth;
- (void).cxx_destruct;	// IMP=0x0000000100ee7b80
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100ee79d0
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000100ee7924
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x0000000100ee7910
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000100ee7814
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000100ee77c4
- (void)bindModel:(id)arg1;	// IMP=0x0000000100ee7770
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100ee70a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUGCShopNewsPicTextDetailViewController.h"

@class AEUGCShopNewsPostDetailSectionHeaderView;

@interface AEUGCShopNewsFansDiscountDetailViewController : AEUGCShopNewsPicTextDetailViewController
{
    AEUGCShopNewsPostDetailSectionHeaderView *_sectionHeaderView;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100ef2d80
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100ef2b64
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000100ef2788
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000100ef2648
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000100ef238c
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x0000000100ef22c8
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForFooterInSection:(long long)arg3;	// IMP=0x0000000100ef2208
- (double)collectionView:(id)arg1 layout:(id)arg2 heightForFooterInSection:(long long)arg3;	// IMP=0x0000000100ef217c
- (double)collectionView:(id)arg1 layout:(id)arg2 heightForHeaderInSection:(long long)arg3;	// IMP=0x0000000100ef1f60
- (long long)collectionView:(id)arg1 layout:(id)arg2 columnCountForSection:(long long)arg3;	// IMP=0x0000000100ef1ed0
- (void)configUI;	// IMP=0x0000000100ef1d54
- (id)fansDiscountViewModel;	// IMP=0x0000000100ef1d40
- (id)initWithParam:(id)arg1;	// IMP=0x0000000100ef1c5c

@end

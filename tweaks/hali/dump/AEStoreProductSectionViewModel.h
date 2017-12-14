//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEStoreSectionViewModel.h"

@class NSMutableArray;

@interface AEStoreProductSectionViewModel : AEStoreSectionViewModel
{
    long long _contentCellCount;	// 8 = 0x8
    double _widthHeightRatio;	// 16 = 0x10
    _Bool _isIPad;	// 24 = 0x18
    NSMutableArray *_productViewModels;	// 32 = 0x20
}

+ (void)registerCellsForTableView:(id)arg1;	// IMP=0x0000000100d3351c
@property(nonatomic) _Bool isIPad; // @synthesize isIPad=_isIPad;
@property(retain, nonatomic) NSMutableArray *productViewModels; // @synthesize productViewModels=_productViewModels;
- (void).cxx_destruct;	// IMP=0x0000000100d35878
- (void)configMarginCell:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000100d357d8
- (void)configViewMoreCell:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000100d35740
- (void)configPadThreeColumnCell:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000100d355e4
- (void)configFourColumnCell:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000100d35448
- (void)configThreeColumnCell:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000100d352ec
- (void)configTwoColumnCell:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000100d351d8
- (void)configOneColumnCell:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000100d350ec
- (void)configImageTitleCell:(id)arg1 atIndexPath:(id)arg2 widthHeightRatio:(double)arg3;	// IMP=0x0000000100d35044
- (void)configTextTitleCell:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000100d34f8c
- (void)configCell:(id)arg1 whoseReusableIdIs:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000100d34d28
- (id)itemModelsForItemIndex:(unsigned long long)arg1 contentIndex:(unsigned long long)arg2 columnsCount:(unsigned long long)arg3;	// IMP=0x0000000100d34c74
- (long long)contentIndexFromIndexPath:(id)arg1;	// IMP=0x0000000100d34c1c
- (id)padThreeColumnCellReusableId:(long long)arg1;	// IMP=0x0000000100d34bf0
- (id)fourColumnCellReusableId:(long long)arg1;	// IMP=0x0000000100d34ac0
- (id)threeColumnCellReusableId:(long long)arg1;	// IMP=0x0000000100d349b4
- (id)twoColumnCellReusableId:(long long)arg1;	// IMP=0x0000000100d348a8
- (id)titleReusableId;	// IMP=0x0000000100d3483c
- (id)cellReusableIdentifier:(id)arg1;	// IMP=0x0000000100d345a4
- (long long)padCellCount;	// IMP=0x0000000100d3439c
- (long long)phoneCellCount;	// IMP=0x0000000100d3419c
- (long long)cellCount;	// IMP=0x0000000100d34158
- (void)inflateWithItems:(id)arg1;	// IMP=0x0000000100d33f00
- (void)inflateWithFields:(id)arg1;	// IMP=0x0000000100d337ec
- (id)init;	// IMP=0x0000000100d3347c

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTileCell.h"

@class UIButton, UIImageView, UILabel, UIView;

@interface AEStoreTitleTileCell : AEBaseTileCell
{
    UIImageView *_storeIV;	// 8 = 0x8
    UIView *_dummyView1;	// 16 = 0x10
    UILabel *_storeNameLbl;	// 24 = 0x18
    UIImageView *_storeLevelView;	// 32 = 0x20
    UILabel *_positiveFeedbackRateLbl;	// 40 = 0x28
    UIImageView *_topBrandsImg;	// 48 = 0x30
    UILabel *_topBrandsLabel;	// 56 = 0x38
    UIButton *_shareBtn;	// 64 = 0x40
}

@property(retain, nonatomic) UIButton *shareBtn; // @synthesize shareBtn=_shareBtn;
@property(retain, nonatomic) UILabel *topBrandsLabel; // @synthesize topBrandsLabel=_topBrandsLabel;
@property(retain, nonatomic) UIImageView *topBrandsImg; // @synthesize topBrandsImg=_topBrandsImg;
@property(retain, nonatomic) UILabel *positiveFeedbackRateLbl; // @synthesize positiveFeedbackRateLbl=_positiveFeedbackRateLbl;
@property(retain, nonatomic) UIImageView *storeLevelView; // @synthesize storeLevelView=_storeLevelView;
@property(retain, nonatomic) UILabel *storeNameLbl; // @synthesize storeNameLbl=_storeNameLbl;
@property(retain, nonatomic) UIView *dummyView1; // @synthesize dummyView1=_dummyView1;
@property(retain, nonatomic) UIImageView *storeIV; // @synthesize storeIV=_storeIV;
- (void).cxx_destruct;	// IMP=0x0000000100d333b8
- (void)setContentOffset:(struct CGPoint)arg1;	// IMP=0x0000000100d32d84
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000100d32d4c
- (_Bool)needObserveCollectionViewScrollState;	// IMP=0x0000000100d32d44
- (void)prepareForReuse;	// IMP=0x0000000100d32d0c
- (void)renderWithTile:(id)arg1;	// IMP=0x0000000100d30bfc
- (void)shareEvent:(id)arg1;	// IMP=0x0000000100d30938
- (id)captureScreen;	// IMP=0x0000000100d3080c
- (void)configConstraints;	// IMP=0x0000000100d2e744
- (void)setupUI;	// IMP=0x0000000100d2e460
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100d2db5c

@end

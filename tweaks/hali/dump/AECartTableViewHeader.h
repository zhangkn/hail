//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AECartTableViewHeaderViewModel, AEComponentBigSaleBanner, UIImageView, UILabel;

@interface AECartTableViewHeader : UIView
{
    AECartTableViewHeaderViewModel *_viewModel;	// 8 = 0x8
    double _headerHeight;	// 16 = 0x10
    AEComponentBigSaleBanner *_bigSaleBanner;	// 24 = 0x18
    UIImageView *_emptyImageView;	// 32 = 0x20
    UILabel *_emptyDescriptionLabel;	// 40 = 0x28
}

+ (id)minimalHeaderFooterView;	// IMP=0x00000001004b52a0
@property(retain, nonatomic) UILabel *emptyDescriptionLabel; // @synthesize emptyDescriptionLabel=_emptyDescriptionLabel;
@property(retain, nonatomic) UIImageView *emptyImageView; // @synthesize emptyImageView=_emptyImageView;
@property(retain, nonatomic) AEComponentBigSaleBanner *bigSaleBanner; // @synthesize bigSaleBanner=_bigSaleBanner;
@property(readonly, nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
@property(retain, nonatomic) AECartTableViewHeaderViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;	// IMP=0x00000001004b53dc

@end

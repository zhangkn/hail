//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "AEUGCComponentProxy.h"

@class AEUGCVenueTopBannerView, NSString;

@interface AEUGCTopVenueBannerCell : UICollectionViewCell <AEUGCComponentProxy>
{
    id <AEUGCTopVenueBannerCellViewModel> _viewModel;	// 8 = 0x8
    AEUGCVenueTopBannerView *_topBannerView;	// 16 = 0x10
}

@property(retain, nonatomic) AEUGCVenueTopBannerView *topBannerView; // @synthesize topBannerView=_topBannerView;
- (void).cxx_destruct;	// IMP=0x00000001006c46a8
- (void)viewNowAction:(id)arg1;	// IMP=0x00000001006c453c
- (void)bindModel:(id)arg1;	// IMP=0x00000001006c3d94
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001006c3b2c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

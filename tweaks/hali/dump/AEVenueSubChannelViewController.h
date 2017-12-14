//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ActivityChannelViewController.h"

@class AEVenueNavigationAttributes, AEVenueNavigationView, UILabel;

@interface AEVenueSubChannelViewController : ActivityChannelViewController
{
    _Bool _showVenueNavigation;	// 8 = 0x8
    UILabel *_cartCountLbl;	// 16 = 0x10
    AEVenueNavigationView *_venueNavigationView;	// 24 = 0x18
    double _navigationBarAlpha;	// 32 = 0x20
    double _showVenueNavigationOffset;	// 40 = 0x28
    double _previousContentOffset;	// 48 = 0x30
    AEVenueNavigationAttributes *_outerNavigationAttributes;	// 56 = 0x38
    AEVenueNavigationAttributes *_navigationAttributes;	// 64 = 0x40
}

@property(retain, nonatomic) AEVenueNavigationAttributes *navigationAttributes; // @synthesize navigationAttributes=_navigationAttributes;
@property(retain, nonatomic) AEVenueNavigationAttributes *outerNavigationAttributes; // @synthesize outerNavigationAttributes=_outerNavigationAttributes;
@property(nonatomic) double previousContentOffset; // @synthesize previousContentOffset=_previousContentOffset;
@property(nonatomic) double showVenueNavigationOffset; // @synthesize showVenueNavigationOffset=_showVenueNavigationOffset;
@property(nonatomic) double navigationBarAlpha; // @synthesize navigationBarAlpha=_navigationBarAlpha;
@property(nonatomic) _Bool showVenueNavigation; // @synthesize showVenueNavigation=_showVenueNavigation;
@property(retain, nonatomic) AEVenueNavigationView *venueNavigationView; // @synthesize venueNavigationView=_venueNavigationView;
@property(retain, nonatomic) UILabel *cartCountLbl; // @synthesize cartCountLbl=_cartCountLbl;
- (void).cxx_destruct;	// IMP=0x000000010044119c
- (void)didFindVenueNavigationDTO:(id)arg1;	// IMP=0x0000000100440d04
- (void)resetInnerNavigationAttributes;	// IMP=0x0000000100440240
- (void)resetOuterNavigationAttributes;	// IMP=0x000000010043fe18
- (void)recordInnerNavigationAttributes;	// IMP=0x000000010043fe14
- (void)recordOuterNavigationAttributes;	// IMP=0x000000010043fc34
- (void)didFetchedDataWithDataContext:(id)arg1;	// IMP=0x000000010043fafc
- (void)makeNavigationViewShow:(_Bool)arg1;	// IMP=0x000000010043f944
- (void)collectionViewDidScrollToOffset:(struct CGPoint)arg1;	// IMP=0x000000010043f838
- (id)willProcessTileDTOs:(id)arg1 withDataContext:(id)arg2;	// IMP=0x000000010043f67c
- (void)updateItemCount;	// IMP=0x000000010043f51c
- (void)gotoSearch;	// IMP=0x000000010043f4cc
- (void)gotoCart;	// IMP=0x000000010043f47c
- (void)configNavigationBar;	// IMP=0x000000010043eed4
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010043ee74
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010043ee40
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010043edd0
- (void)viewDidLoad;	// IMP=0x000000010043eb80

@end


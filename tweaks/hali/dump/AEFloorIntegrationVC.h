//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUIViewController.h"

#import "AEFloorCollectionViewDataSource.h"
#import "AEFloorCollectionViewDelegate.h"

@class AEFloorCollectionView, NSMutableArray, NSString;

@interface AEFloorIntegrationVC : AEUIViewController <AEFloorCollectionViewDataSource, AEFloorCollectionViewDelegate>
{
    double _navBarbgAlpha;	// 8 = 0x8
    AEFloorCollectionView *_collectionView;	// 16 = 0x10
    NSMutableArray *_floorModels;	// 24 = 0x18
}

@property(retain, nonatomic) NSMutableArray *floorModels; // @synthesize floorModels=_floorModels;
@property(retain, nonatomic) AEFloorCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) double navBarbgAlpha; // @synthesize navBarbgAlpha=_navBarbgAlpha;
- (void).cxx_destruct;	// IMP=0x00000001003472c4
- (_Bool)hasNextPageInCollectionView:(id)arg1;	// IMP=0x000000010034720c
- (id)allFloorModelsInCollectionView:(id)arg1;	// IMP=0x00000001003471fc
- (void)initFloorModels;	// IMP=0x0000000100347168
- (void)didReceiveMemoryWarning;	// IMP=0x0000000100347134
- (void)viewDidLoad;	// IMP=0x0000000100346ed8
- (id)initWithParam:(id)arg1;	// IMP=0x0000000100346ea4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


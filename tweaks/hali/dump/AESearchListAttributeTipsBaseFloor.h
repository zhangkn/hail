//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETileAdapterFloor.h"

#import "AELabelSelectionViewDelegate.h"

@class AELabelSelectionView, NSString;

@interface AESearchListAttributeTipsBaseFloor : AETileAdapterFloor <AELabelSelectionViewDelegate>
{
    AELabelSelectionView *_labelSelectionView;	// 8 = 0x8
}

+ (id)getSearchTagFromLabelSelectionItemViewModel:(id)arg1;	// IMP=0x0000000100ccd17c
+ (Class)modelClass;	// IMP=0x0000000100ccce54
+ (id)identifier;	// IMP=0x0000000100ccce28
@property(retain, nonatomic) AELabelSelectionView *labelSelectionView; // @synthesize labelSelectionView=_labelSelectionView;
- (void).cxx_destruct;	// IMP=0x0000000100ccd3e8
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x0000000100ccd26c
- (void)labelSelectionDidSelectedView:(id)arg1 labelSelectionItemViewModel:(id)arg2;	// IMP=0x0000000100ccd024
- (id)exposureStringWithKeyword:(id)arg1;	// IMP=0x0000000100cccf64
- (void)configConstraints;	// IMP=0x0000000100cccf60
- (void)configComponents;	// IMP=0x0000000100ccced0
- (id)initFloor;	// IMP=0x0000000100ccce68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

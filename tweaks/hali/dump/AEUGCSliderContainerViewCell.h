//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "AEUGCComponentProxy.h"
#import "AEUGCSlidersContainerDelegate.h"

@class AEUGCSlidersContainer, NSString;

@interface AEUGCSliderContainerViewCell : UICollectionViewCell <AEUGCSlidersContainerDelegate, AEUGCComponentProxy>
{
    AEUGCSlidersContainer *_sliderContainer;	// 8 = 0x8
    id <AEUGCSlidersContainerCellDelegate> _delegate;	// 16 = 0x10
    struct UIEdgeInsets _sliderInsets;	// 24 = 0x18
}

@property(nonatomic) struct UIEdgeInsets sliderInsets; // @synthesize sliderInsets=_sliderInsets;
@property(nonatomic) __weak id <AEUGCSlidersContainerCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AEUGCSlidersContainer *sliderContainer; // @synthesize sliderContainer=_sliderContainer;
- (void).cxx_destruct;	// IMP=0x00000001007c4e98
- (void)sliderContainer:(id)arg1 unSelectAtIndex:(long long)arg2;	// IMP=0x00000001007c487c
- (void)sliderContainer:(id)arg1 didSelectAtIndex:(long long)arg2;	// IMP=0x00000001007c47c8
- (void)bindModel:(id)arg1;	// IMP=0x00000001007c4674
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001007c3f88

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


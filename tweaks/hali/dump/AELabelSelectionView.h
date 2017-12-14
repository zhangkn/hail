//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "AELabelSelectionItemViewDelegate.h"

@class NSMutableArray, NSString;

@interface AELabelSelectionView : UIView <AELabelSelectionItemViewDelegate>
{
    id <AELabelSelectionViewDelegate> _delegate;	// 8 = 0x8
    NSMutableArray *_itemViews;	// 16 = 0x10
}

+ (Class)labelSelectionItemView;	// IMP=0x0000000100c3f2d4
+ (id)labelSelectionItemViewName;	// IMP=0x0000000100c3f0a4
+ (long long)minNumberOneRow;	// IMP=0x0000000100c3f09c
+ (long long)maxRow;	// IMP=0x0000000100c3f094
+ (double)bottomGap;	// IMP=0x0000000100c3f070
+ (double)topGap;	// IMP=0x0000000100c3f068
+ (double)rightGap;	// IMP=0x0000000100c3f044
+ (double)leftGap;	// IMP=0x0000000100c3f03c
+ (double)verticalGap;	// IMP=0x0000000100c3f034
+ (double)horizontalGap;	// IMP=0x0000000100c3f02c
+ (id)backgroundViewColor;	// IMP=0x0000000100c3f010
+ (double)heightWithViewModel:(id)arg1 dispalyWidth:(double)arg2;	// IMP=0x0000000100c3dea8
@property(retain, nonatomic) NSMutableArray *itemViews; // @synthesize itemViews=_itemViews;
@property(nonatomic) __weak id <AELabelSelectionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100c3f3a0
- (void)disableSubViewsUserInteraction;	// IMP=0x0000000100c3f1b8
- (void)labelSelectionDidSelectedItemView:(id)arg1 labelSelectionItemViewModel:(id)arg2;	// IMP=0x0000000100c3f0d0
- (id)itemIds;	// IMP=0x0000000100c3ed94
- (void)bindDataWithViewModel:(id)arg1 dispalyWidth:(double)arg2;	// IMP=0x0000000100c3e314
- (id)init;	// IMP=0x0000000100c3de08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


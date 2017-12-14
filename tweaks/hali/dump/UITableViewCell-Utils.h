//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSIndexPath;

@interface UITableViewCell (Utils)
+ (void)view:(id)arg1 removeViewsWithClass:(Class)arg2;	// IMP=0x0000000101047b80
+ (id)imageViewForRightArrow;	// IMP=0x00000001010478ac
+ (struct CGRect)frameOfRightArrowImageForCellSize:(struct CGSize)arg1;	// IMP=0x0000000101047884
@property(retain, nonatomic) NSIndexPath *indexPath;
- (void)removeAllSepatorViews;	// IMP=0x0000000101047b20
- (void)addRightArrowImageForCellSize:(struct CGSize)arg1;	// IMP=0x00000001010479d0
- (void)removeAllSubviewsFromContentView;	// IMP=0x00000001010476fc
- (void)setBothInsetsAndMarginsToZero;	// IMP=0x00000001010476e0
- (void)setSeparatorInsetToZero;	// IMP=0x0000000101047684
- (void)setBothInsetsAndMargins:(struct UIEdgeInsets)arg1;	// IMP=0x00000001010475b8
@end

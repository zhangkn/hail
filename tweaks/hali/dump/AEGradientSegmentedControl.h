//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "UIScrollViewDelegate.h"

@class CALayer, NSArray, NSMutableArray, NSString, UIColor, UIFont, UIScrollView;

@interface AEGradientSegmentedControl : UIControl <UIScrollViewDelegate>
{
    _Bool _indexChangeFromTouched;	// 8 = 0x8
    NSArray *_titles;	// 16 = 0x10
    unsigned long long _selectedSegmentIndex;	// 24 = 0x18
    unsigned long long _numberOfSegments;	// 32 = 0x20
    CDUnknownBlockType _selectedBlock;	// 40 = 0x28
    UIFont *_segmentFont;	// 48 = 0x30
    UIFont *_selectedSegmentFont;	// 56 = 0x38
    UIColor *_indicatorColor;	// 64 = 0x40
    UIColor *_segmentColor;	// 72 = 0x48
    UIColor *_selectedSegmentColor;	// 80 = 0x50
    double _minimumTitleSpacing;	// 88 = 0x58
    UIScrollView *_scrollView;	// 96 = 0x60
    NSMutableArray *_titleLabels;	// 104 = 0x68
    NSMutableArray *_fittingRects;	// 112 = 0x70
    double _maxFittingHeight;	// 120 = 0x78
    CALayer *_indicatorLayer;	// 128 = 0x80
    double _preOffsetX;	// 136 = 0x88
}

@property(nonatomic) _Bool indexChangeFromTouched; // @synthesize indexChangeFromTouched=_indexChangeFromTouched;
@property(nonatomic) double preOffsetX; // @synthesize preOffsetX=_preOffsetX;
@property(retain, nonatomic) CALayer *indicatorLayer; // @synthesize indicatorLayer=_indicatorLayer;
@property(nonatomic) double maxFittingHeight; // @synthesize maxFittingHeight=_maxFittingHeight;
@property(retain, nonatomic) NSMutableArray *fittingRects; // @synthesize fittingRects=_fittingRects;
@property(retain, nonatomic) NSMutableArray *titleLabels; // @synthesize titleLabels=_titleLabels;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) double minimumTitleSpacing; // @synthesize minimumTitleSpacing=_minimumTitleSpacing;
@property(retain, nonatomic) UIColor *selectedSegmentColor; // @synthesize selectedSegmentColor=_selectedSegmentColor;
@property(retain, nonatomic) UIColor *segmentColor; // @synthesize segmentColor=_segmentColor;
@property(retain, nonatomic) UIColor *indicatorColor; // @synthesize indicatorColor=_indicatorColor;
@property(retain, nonatomic) UIFont *selectedSegmentFont; // @synthesize selectedSegmentFont=_selectedSegmentFont;
@property(retain, nonatomic) UIFont *segmentFont; // @synthesize segmentFont=_segmentFont;
@property(copy, nonatomic) CDUnknownBlockType selectedBlock; // @synthesize selectedBlock=_selectedBlock;
@property(nonatomic) unsigned long long numberOfSegments; // @synthesize numberOfSegments=_numberOfSegments;
@property(nonatomic) unsigned long long selectedSegmentIndex; // @synthesize selectedSegmentIndex=_selectedSegmentIndex;
@property(copy, nonatomic) NSArray *titles; // @synthesize titles=_titles;
- (void).cxx_destruct;	// IMP=0x000000010081e1b8
- (void)setSelectedSegmentIndex:(unsigned long long)arg1 animated:(_Bool)arg2 notify:(_Bool)arg3;	// IMP=0x000000010081d944
- (void)setSelectedSegmentIndex:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000010081d934
- (struct CGRect)indicatorLayerRectAtIndex:(long long)arg1;	// IMP=0x000000010081d7c0
- (void)indicatorAnimationToIndex:(long long)arg1;	// IMP=0x000000010081d52c
- (void)labelAnimationFrom:(long long)arg1 toIndex:(long long)arg2;	// IMP=0x000000010081d100
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x000000010081d06c
- (void)pagingScrollViewDidEndDecelerating:(id)arg1;	// IMP=0x000000010081cfd8
- (void)scrollToSelectedSegmentedIndexAnimated:(_Bool)arg1;	// IMP=0x000000010081cedc
- (double)appropriateContentOffsetXValueAtIndex:(long long)arg1;	// IMP=0x000000010081cd1c
- (void)scrollToIndex:(long long)arg1 progress:(double)arg2 animated:(_Bool)arg3;	// IMP=0x000000010081cbf0
- (void)updateIndicatorLayerFrameWithProgress:(double)arg1 targetIndex:(long long)arg2;	// IMP=0x000000010081c8f4
- (void)setSegmentOffset:(double)arg1 targetIndex:(long long)arg2;	// IMP=0x000000010081c868
- (void)pagingScrollViewDidScroll:(id)arg1;	// IMP=0x000000010081c70c
- (void)titleLabelTouched:(id)arg1;	// IMP=0x000000010081c514
- (void)fittingLabelsAttributes;	// IMP=0x000000010081bbe0
- (void)fittingSubViewsAttributes;	// IMP=0x000000010081b8b8
- (void)layoutSubviews;	// IMP=0x000000010081b844
- (void)commonInit;	// IMP=0x000000010081b48c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010081b434
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010081b3dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETileAdapterFloor.h"

#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSString, UIImageView, UIPageControl, UIScrollView;

@interface AE329TitleAndScrollPhotoFloor : AETileAdapterFloor <UIScrollViewDelegate>
{
    struct CGSize _backImageSize;	// 8 = 0x8
    struct CGSize _foreImageSize;	// 24 = 0x18
    double _paddingOffset;	// 40 = 0x28
    double _imageMargin;	// 48 = 0x30
    double _imageScaleRatio;	// 56 = 0x38
    double _imageAlphaRatio;	// 64 = 0x40
    double _foregroundImageWidth;	// 72 = 0x48
    double _foregroundImageHeight;	// 80 = 0x50
    unsigned long long _currentPhotoIndex;	// 88 = 0x58
    unsigned long long _countOfPhotosDisplay;	// 96 = 0x60
    int _autoScrollTime;	// 104 = 0x68
    NSMutableArray *_imageViews;	// 112 = 0x70
    NSMutableArray *_frontViews;	// 120 = 0x78
    UIImageView *_header;	// 128 = 0x80
    UIScrollView *_scrollView;	// 136 = 0x88
    UIPageControl *_pageControl;	// 144 = 0x90
}

+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x00000001002de53c
+ (double)quadraticMappingWithFixedRatio:(double)arg1 ratio:(double)arg2;	// IMP=0x00000001002ddde0
+ (Class)modelClass;	// IMP=0x00000001002db97c
+ (id)identifier;	// IMP=0x00000001002db950
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIImageView *header; // @synthesize header=_header;
@property(retain, nonatomic) NSMutableArray *frontViews; // @synthesize frontViews=_frontViews;
@property(retain, nonatomic) NSMutableArray *imageViews; // @synthesize imageViews=_imageViews;
- (void).cxx_destruct;	// IMP=0x00000001002dea88
- (void)dealloc;	// IMP=0x00000001002de7f4
- (void)tickTock;	// IMP=0x00000001002de56c
- (void)vcDisappear;	// IMP=0x00000001002de558
- (void)vcAppear;	// IMP=0x00000001002de544
- (void)forwardTargetPage;	// IMP=0x00000001002de474
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x00000001002de418
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x00000001002de3c4
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x00000001002dde90
- (double)scaleQuadraticMapping:(double)arg1;	// IMP=0x00000001002dde44
- (double)alphaQuadraticMapping:(double)arg1;	// IMP=0x00000001002dddf8
- (double)linearMapping:(double)arg1;	// IMP=0x00000001002dddc0
- (void)scrollChange:(id)arg1;	// IMP=0x00000001002dd990
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000001002dd698
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x00000001002dc910
- (double)offsetXForFloatIndex:(double)arg1;	// IMP=0x00000001002dc854
- (double)currentFloatIndex;	// IMP=0x00000001002dc788
- (double)eachImageUnitWidth;	// IMP=0x00000001002dc750
- (void)configConstraints;	// IMP=0x00000001002dbf5c
- (void)layoutSubviews;	// IMP=0x00000001002dbf00
- (void)configComponents;	// IMP=0x00000001002dbb9c
- (id)initFloor;	// IMP=0x00000001002db990

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

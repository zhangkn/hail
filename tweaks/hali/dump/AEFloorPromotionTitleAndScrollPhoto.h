//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETileAdapterFloor.h"

#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSString, UIImageView, UIPageControl, UIScrollView;

@interface AEFloorPromotionTitleAndScrollPhoto : AETileAdapterFloor <UIScrollViewDelegate>
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
    UIImageView *_header;	// 120 = 0x78
    UIScrollView *_scrollView;	// 128 = 0x80
    UIPageControl *_pageControl;	// 136 = 0x88
}

+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x0000000100374d58
+ (double)quadraticMappingWithFixedRatio:(double)arg1 ratio:(double)arg2;	// IMP=0x00000001003745fc
+ (Class)modelClass;	// IMP=0x0000000100372af0
+ (id)additionalIdentifiers;	// IMP=0x0000000100372a88
+ (id)identifier;	// IMP=0x0000000100372a5c
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIImageView *header; // @synthesize header=_header;
@property(retain, nonatomic) NSMutableArray *imageViews; // @synthesize imageViews=_imageViews;
- (void).cxx_destruct;	// IMP=0x00000001003751ac
- (void)dealloc;	// IMP=0x0000000100374fe8
- (void)tickTock;	// IMP=0x0000000100374d60
- (void)forwardTargetPage;	// IMP=0x0000000100374c90
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x0000000100374c34
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x0000000100374be0
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x00000001003746ac
- (double)scaleQuadraticMapping:(double)arg1;	// IMP=0x0000000100374660
- (double)alphaQuadraticMapping:(double)arg1;	// IMP=0x0000000100374614
- (double)linearMapping:(double)arg1;	// IMP=0x00000001003745dc
- (void)scrollChange:(id)arg1;	// IMP=0x00000001003741ac
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000100374188
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x0000000100373874
- (double)offsetXForFloatIndex:(double)arg1;	// IMP=0x00000001003737b8
- (double)currentFloatIndex;	// IMP=0x00000001003736ec
- (double)eachImageUnitWidth;	// IMP=0x00000001003736b4
- (id)initFloor;	// IMP=0x0000000100372b04

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


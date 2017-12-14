//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray, NSTimer, UIPageControl, UIScrollView;

@interface AEUGCScrollBanner : UIView
{
    _Bool _bAutoScroll;	// 8 = 0x8
    _Bool _bLoop;	// 9 = 0x9
    NSArray *_dataSource;	// 16 = 0x10
    double _autoScrollTime;	// 24 = 0x18
    id <AEUGCScrollBannerDelegate> _delegate;	// 32 = 0x20
    UIScrollView *_scrollView;	// 40 = 0x28
    NSTimer *_timer;	// 48 = 0x30
    NSMutableArray *_arraySource;	// 56 = 0x38
    UIPageControl *_pageControl;	// 64 = 0x40
}

@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) NSMutableArray *arraySource; // @synthesize arraySource=_arraySource;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <AEUGCScrollBannerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double autoScrollTime; // @synthesize autoScrollTime=_autoScrollTime;
@property(nonatomic) _Bool bLoop; // @synthesize bLoop=_bLoop;
@property(nonatomic) _Bool bAutoScroll; // @synthesize bAutoScroll=_bAutoScroll;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;	// IMP=0x00000001007bb3a0
- (void)startScroll;	// IMP=0x00000001007bb02c
- (void)setPageIndex:(id)arg1;	// IMP=0x00000001007ba0c4
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x00000001007ba0b8
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x00000001007ba0ac
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x00000001007ba0a0
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000001007b9ef4
- (void)clickItem:(id)arg1;	// IMP=0x00000001007b9e2c
- (void)dealloc;	// IMP=0x00000001007b9dc4
- (void)removeScollSubViews;	// IMP=0x00000001007b9d0c
- (void)nextPage;	// IMP=0x00000001007b9c20
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001007b9628

@end


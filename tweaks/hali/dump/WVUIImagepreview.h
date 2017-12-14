//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WVDynamicHandler.h"

#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSOperationQueue, NSString, UIPageControl, UIScrollView, UIView, WVImagePreviewLongPress;

@interface WVUIImagepreview : WVDynamicHandler <UIScrollViewDelegate>
{
    UIView *_targetView;	// 8 = 0x8
    WVImagePreviewLongPress *_longPressImageHandler;	// 16 = 0x10
    NSMutableArray *_imageURLArray;	// 24 = 0x18
    NSMutableArray *_imageArray;	// 32 = 0x20
    UIView *_previewView;	// 40 = 0x28
    UIScrollView *_contentView;	// 48 = 0x30
    UIPageControl *_pageControl;	// 56 = 0x38
    NSMutableArray *_activityLoadingBoxArray;	// 64 = 0x40
    NSOperationQueue *_requestQueue;	// 72 = 0x48
}

@property(retain, nonatomic) NSOperationQueue *requestQueue; // @synthesize requestQueue=_requestQueue;
@property(retain, nonatomic) NSMutableArray *activityLoadingBoxArray; // @synthesize activityLoadingBoxArray=_activityLoadingBoxArray;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIScrollView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *previewView; // @synthesize previewView=_previewView;
@property(retain, nonatomic) NSMutableArray *imageArray; // @synthesize imageArray=_imageArray;
@property(retain, nonatomic) NSMutableArray *imageURLArray; // @synthesize imageURLArray=_imageURLArray;
@property(retain, nonatomic) WVImagePreviewLongPress *longPressImageHandler; // @synthesize longPressImageHandler=_longPressImageHandler;
@property(retain, nonatomic) UIView *targetView; // @synthesize targetView=_targetView;
- (void).cxx_destruct;	// IMP=0x0000000101b1ef68
- (void)removeImagePreviewWidget;	// IMP=0x0000000101b1eac0
- (void)dealloc;	// IMP=0x0000000101b1ea70
- (void)releaseInstance;	// IMP=0x0000000101b1ea20
- (void)pageTurn:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000101b1e9b8
- (void)pageTurn:(id)arg1;	// IMP=0x0000000101b1e978
- (void)scrollViewDidZoom:(id)arg1;	// IMP=0x0000000101b1e884
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;	// IMP=0x0000000101b1e834
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x0000000101b1e828
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x0000000101b1e784
- (id)viewForZoomingInScrollView:(id)arg1;	// IMP=0x0000000101b1e5ec
- (long long)currentPageIndex;	// IMP=0x0000000101b1e594
- (void)hideImagePreview:(id)arg1;	// IMP=0x0000000101b1e454
- (struct CGRect)zoomRectForScale:(float)arg1 withCenter:(struct CGPoint)arg2 withScrollView:(id)arg3 withImageView:(id)arg4;	// IMP=0x0000000101b1e370
- (id)subViewInIndex:(long long)arg1;	// IMP=0x0000000101b1e24c
- (void)zoomInImage:(id)arg1;	// IMP=0x0000000101b1e140
- (void)hiddenActivityWithIndex:(long long)arg1;	// IMP=0x0000000101b1e0a8
- (void)addImg:(long long)arg1 withData:(id)arg2;	// IMP=0x0000000101b1db04
- (void)lazyLoadImageWithIndex:(long long)arg1;	// IMP=0x0000000101b1d62c
- (void)initPageControlWithIndex:(unsigned long long)arg1;	// IMP=0x0000000101b1d4bc
- (void)bindTapGestureViewAction:(id)arg1;	// IMP=0x0000000101b1d378
- (void)initContentView;	// IMP=0x0000000101b1d1c4
- (void)initPreviewView;	// IMP=0x0000000101b1ce08
- (void)showImagePreviewWidget:(id)arg1 withIndex:(long long)arg2 toSourceView:(id)arg3;	// IMP=0x0000000101b1c9d0
- (void)showImagepreview:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;	// IMP=0x0000000101b1c740

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


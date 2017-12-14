//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AIFUIViewController.h"

#import "UIScrollViewDelegate.h"

@class NSArray, NSString, UIScrollView, UIView;

@interface AECollectionVC : AIFUIViewController <UIScrollViewDelegate>
{
    _Bool _onScreen;	// 8 = 0x8
    NSArray *_contentViewControllers;	// 16 = 0x10
    CDUnknownBlockType _didScroll;	// 24 = 0x18
    CDUnknownBlockType _didEndScroll;	// 32 = 0x20
    UIScrollView *_containerScrollView;	// 40 = 0x28
    UIView *_headerView;	// 48 = 0x30
    double _headerViewHeight;	// 56 = 0x38
    long long _currentIndex;	// 64 = 0x40
}

@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) double headerViewHeight; // @synthesize headerViewHeight=_headerViewHeight;
@property(nonatomic, getter=isOnScreen) _Bool onScreen; // @synthesize onScreen=_onScreen;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIScrollView *containerScrollView; // @synthesize containerScrollView=_containerScrollView;
@property(copy, nonatomic) CDUnknownBlockType didEndScroll; // @synthesize didEndScroll=_didEndScroll;
@property(copy, nonatomic) CDUnknownBlockType didScroll; // @synthesize didScroll=_didScroll;
@property(copy, nonatomic) NSArray *contentViewControllers; // @synthesize contentViewControllers=_contentViewControllers;
- (void).cxx_destruct;	// IMP=0x000000010003c6cc
- (void)addChildViewControllerViewToContainerScrollViewIfNeed:(long long)arg1;	// IMP=0x000000010003c35c
- (void)doAfterScrollViewEndScroll:(long long)arg1;	// IMP=0x000000010003c348
- (void)switchToSelectedIndexPage:(long long)arg1 duration:(double)arg2;	// IMP=0x000000010003bd94
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x000000010003bc48
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x000000010003bb04
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000010003b954
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000010003b448
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010003b320
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010003b200
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010003b0cc
- (void)viewDidLoad;	// IMP=0x000000010003b064
- (void)loadView;	// IMP=0x000000010003aeb0
- (id)initWithHeaderViewHeight:(double)arg1;	// IMP=0x000000010003adf8
- (void)dealloc;	// IMP=0x000000010003ad98

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

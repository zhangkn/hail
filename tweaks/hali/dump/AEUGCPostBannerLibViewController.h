//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUIViewController.h"

#import "AEUGCPostBannerListViewControllerDelegate.h"
#import "UIPageViewControllerDataSource.h"
#import "UIPageViewControllerDelegate.h"

@class AEUGCPostBannerLibViewModel, HMSegmentedControl, NSArray, NSString, UIPageViewController;

@interface AEUGCPostBannerLibViewController : AEUIViewController <UIPageViewControllerDelegate, UIPageViewControllerDataSource, AEUGCPostBannerListViewControllerDelegate>
{
    CDUnknownBlockType _selectedBannerPicCompletion;	// 8 = 0x8
    HMSegmentedControl *_segmentedControl;	// 16 = 0x10
    UIPageViewController *_pageViewController;	// 24 = 0x18
    NSArray *_bannerListViewControllers;	// 32 = 0x20
    AEUGCPostBannerLibViewModel *_viewModel;	// 40 = 0x28
}

@property(retain, nonatomic) AEUGCPostBannerLibViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) NSArray *bannerListViewControllers; // @synthesize bannerListViewControllers=_bannerListViewControllers;
@property(retain, nonatomic) UIPageViewController *pageViewController; // @synthesize pageViewController=_pageViewController;
@property(retain, nonatomic) HMSegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(copy, nonatomic) CDUnknownBlockType selectedBannerPicCompletion; // @synthesize selectedBannerPicCompletion=_selectedBannerPicCompletion;
- (void).cxx_destruct;	// IMP=0x0000000100e4a300
- (void)bannerListViewController:(id)arg1 didSelectedMaterial:(id)arg2;	// IMP=0x0000000100e4a044
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;	// IMP=0x0000000100e49fc0
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;	// IMP=0x0000000100e49f5c
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;	// IMP=0x0000000100e49e9c
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;	// IMP=0x0000000100e49e98
- (void)doneAction:(id)arg1;	// IMP=0x0000000100e49e2c
- (void)loadData;	// IMP=0x0000000100e497d0
- (void)configAutoLayout;	// IMP=0x0000000100e49288
- (void)configUI;	// IMP=0x0000000100e490ac
- (void)viewDidLoad;	// IMP=0x0000000100e4897c
- (id)initWithDate:(id)arg1 selectedMaterialDto:(id)arg2;	// IMP=0x0000000100e488e0
- (id)init;	// IMP=0x0000000100e48858
- (void)dealloc;	// IMP=0x0000000100e48824

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


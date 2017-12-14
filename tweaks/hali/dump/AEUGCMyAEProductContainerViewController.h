//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUGCAdapterViewController.h"

#import "AEUGCProductAdditionProtocol.h"
#import "UIPageViewControllerDataSource.h"
#import "UIPageViewControllerDelegate.h"

@class AEUGCMyOrderListViewController, AEUGCSearchResultFloattingBar, AEUGCShoppingCartListViewController, AEUGCWishListViewController, HMSegmentedControl, NSArray, NSMutableArray, NSString, UIPageViewController;

@interface AEUGCMyAEProductContainerViewController : AEUGCAdapterViewController <UIPageViewControllerDelegate, UIPageViewControllerDataSource, AEUGCProductAdditionProtocol>
{
    NSArray *_currentAddedProducts;	// 8 = 0x8
    id <AEUGCPostProductAddtionDelegate> _delegate;	// 16 = 0x10
    UIPageViewController *_pageViewController;	// 24 = 0x18
    AEUGCShoppingCartListViewController *_shoppingCardVC;	// 32 = 0x20
    AEUGCWishListViewController *_wishlistVC;	// 40 = 0x28
    AEUGCMyOrderListViewController *_myorderListVC;	// 48 = 0x30
    HMSegmentedControl *_topSegmentControl;	// 56 = 0x38
    NSArray *_controllers;	// 64 = 0x40
    AEUGCSearchResultFloattingBar *_floatingBottomBar;	// 72 = 0x48
    NSMutableArray *_currentSelectedProducts;	// 80 = 0x50
}

@property(retain, nonatomic) NSMutableArray *currentSelectedProducts; // @synthesize currentSelectedProducts=_currentSelectedProducts;
@property(retain, nonatomic) AEUGCSearchResultFloattingBar *floatingBottomBar; // @synthesize floatingBottomBar=_floatingBottomBar;
@property(retain, nonatomic) NSArray *controllers; // @synthesize controllers=_controllers;
@property(retain, nonatomic) HMSegmentedControl *topSegmentControl; // @synthesize topSegmentControl=_topSegmentControl;
@property(retain, nonatomic) AEUGCMyOrderListViewController *myorderListVC; // @synthesize myorderListVC=_myorderListVC;
@property(retain, nonatomic) AEUGCWishListViewController *wishlistVC; // @synthesize wishlistVC=_wishlistVC;
@property(retain, nonatomic) AEUGCShoppingCartListViewController *shoppingCardVC; // @synthesize shoppingCardVC=_shoppingCardVC;
@property(retain, nonatomic) UIPageViewController *pageViewController; // @synthesize pageViewController=_pageViewController;
@property(nonatomic) __weak id <AEUGCPostProductAddtionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *currentAddedProducts; // @synthesize currentAddedProducts=_currentAddedProducts;
- (void).cxx_destruct;	// IMP=0x0000000100e04dc4
- (id)spmB;	// IMP=0x0000000100e04b84
- (id)pageTrackName;	// IMP=0x0000000100e04b58
- (void)nextButtonAction:(id)arg1;	// IMP=0x0000000100e049d4
- (void)productItem:(id)arg1 DidDeselectedFrom:(id)arg2;	// IMP=0x0000000100e03bc4
- (void)productItem:(id)arg1 DidSelectedFrom:(id)arg2;	// IMP=0x0000000100e036f8
- (id)currentAddedProductItems;	// IMP=0x0000000100e036ec
- (id)currentSelectedProductItems;	// IMP=0x0000000100e036e0
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;	// IMP=0x0000000100e035f0
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;	// IMP=0x0000000100e034f0
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;	// IMP=0x0000000100e03424
- (void)updateViewConstraints;	// IMP=0x0000000100e033f0
- (void)didReceiveMemoryWarning;	// IMP=0x0000000100e033bc
- (void)viewDidLayoutSubviews;	// IMP=0x0000000100e03388
- (void)viewDidLoad;	// IMP=0x0000000100e02168

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

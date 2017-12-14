//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUIViewController.h"

#import "AECartBuyAllBarDelegate.h"
#import "AECartProductCellDelegate.h"
#import "AECartPromotionCellDelegate.h"
#import "AECartTitleCellDelegate.h"
#import "AEOrderSplitDelegate.h"
#import "AEShippingInfoViewControllerCallback.h"
#import "AFCommandTest.h"
#import "AIFExposureProtocol.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UIViewControllerPreviewingDelegate.h"

@class AECartBuyAllBar, AECartTableViewHeader, AECartViewModel, MASConstraint, NSNumber, NSString, UIRefreshControl, UITableView;

@interface AECartViewController : AEUIViewController <AFCommandTest, UIViewControllerPreviewingDelegate, UITableViewDataSource, UITableViewDelegate, AECartProductCellDelegate, AECartTitleCellDelegate, AEShippingInfoViewControllerCallback, AECartPromotionCellDelegate, AECartBuyAllBarDelegate, AEOrderSplitDelegate, AIFExposureProtocol>
{
    AECartViewModel *_viewModel;	// 8 = 0x8
    UITableView *_tableView;	// 16 = 0x10
    AECartTableViewHeader *_tableHeaderView;	// 24 = 0x18
    UIRefreshControl *_refreshControl;	// 32 = 0x20
    AECartBuyAllBar *_bottomBar;	// 40 = 0x28
    MASConstraint *_bottomConstraint;	// 48 = 0x30
    MASConstraint *_topConstraint;	// 56 = 0x38
}

+ (id)paramsToTest;	// IMP=0x00000001004c080c
@property(retain, nonatomic) MASConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(retain, nonatomic) MASConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(retain, nonatomic) AECartBuyAllBar *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) UIRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(retain, nonatomic) AECartTableViewHeader *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) AECartViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;	// IMP=0x00000001004c0768
- (id)exposureType;	// IMP=0x00000001004c0558
- (id)sceneId;	// IMP=0x00000001004c052c
- (void)orderSplitViewController:(id)arg1 buyItems:(id)arg2;	// IMP=0x00000001004c03b0
- (void)popoverWillDismiss:(id)arg1;	// IMP=0x00000001004c032c
- (void)popoverWillPresent:(id)arg1;	// IMP=0x00000001004c02e4
- (void)cartBuyAllBarShowBillDetails:(id)arg1;	// IMP=0x00000001004bfde4
- (void)cartBuyAllBarBuyAll:(id)arg1;	// IMP=0x00000001004bf970
- (void)cartPromotionCell:(id)arg1 getCouponOfSeller:(id)arg2 sellerName:(id)arg3 couponCount:(long long)arg4;	// IMP=0x00000001004bf918
- (void)shippingInfoViewControllerCallbackWithParameter:(id)arg1;	// IMP=0x00000001004bf6a0
- (void)cartProductCell:(id)arg1 findSimilarProducts:(id)arg2;	// IMP=0x00000001004bf690
- (void)cartProductCell:(id)arg1 removeProduct:(id)arg2;	// IMP=0x00000001004bf624
- (void)cartProductCell:(id)arg1 viewDetail:(id)arg2;	// IMP=0x00000001004bf614
- (void)cartProductCell:(id)arg1 avoidKeyboard:(double)arg2;	// IMP=0x00000001004bf464
- (void)cartProductCell:(id)arg1 selectShippingSerive:(id)arg2;	// IMP=0x00000001004bf454
- (void)cartProductCell:(id)arg1 prodcut:(id)arg2 quantityChanged:(long long)arg3;	// IMP=0x00000001004bf3d0
- (void)cartProductCell:(id)arg1 selectProduct:(id)arg2;	// IMP=0x00000001004bf33c
- (void)cartTitleCell:(id)arg1 selectProductsOfVendor:(id)arg2;	// IMP=0x00000001004bf25c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001004beb64
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000001004be84c
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000001004be768
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000001004be6b4
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000001004be600
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000001004be444
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;	// IMP=0x00000001004be3e0
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x00000001004be3d8
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000001004be114
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x00000001004bdf50
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000001004bdda4
- (void)updateTableHeaderView;	// IMP=0x00000001004bd9f8
- (void)hideBottomBuyAllBarIfNeeded;	// IMP=0x00000001004bd6cc
- (void)deleteProductsSelected:(id)arg1;	// IMP=0x00000001004bd3ac
- (void)endRefreshing;	// IMP=0x00000001004bd318
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001004bd0f0
- (void)dealloc;	// IMP=0x00000001004bcf50
- (void)observeViewModel;	// IMP=0x00000001004bcdfc
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000001004bcd80
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001004bcd30
- (void)viewDidLoad;	// IMP=0x00000001004bbe60
- (id)showMode;	// IMP=0x00000001004bbe34
- (void)commonInit;	// IMP=0x00000001004bbd90
- (id)initWithParam:(id)arg1;	// IMP=0x00000001004bbd38
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001004bbcb0
- (void)handleError:(id)arg1;	// IMP=0x00000001004b93f0
- (void)showToast:(id)arg1;	// IMP=0x00000001004b93a8
- (void)showAlert:(id)arg1 msg:(id)arg2 cancelTitle:(id)arg3 okTitle:(id)arg4 cancelAction:(CDUnknownBlockType)arg5 okAction:(CDUnknownBlockType)arg6;	// IMP=0x00000001004b90e4
- (double)tabbarHeight;	// IMP=0x00000001004b9be8
- (_Bool)inTabBarController;	// IMP=0x00000001004b9b10
- (void)close;	// IMP=0x00000001004b9ab8
- (void)setupTitle;	// IMP=0x00000001004b98d0
- (void)setupRightNavigationItem;	// IMP=0x00000001004b96dc
- (void)setupLeftNavigationItem;	// IMP=0x00000001004b95f0
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;	// IMP=0x00000001004bb590
- (id)previewingController:(id)arg1;	// IMP=0x00000001004bb504
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;	// IMP=0x00000001004bb104
- (struct CGSize)preferredPreviewingControllerSize;	// IMP=0x00000001004bb09c
- (void)registerForImagePreviewing;	// IMP=0x00000001004bafa8
- (void)redirectToPlaceOrder:(id)arg1 splitOrder:(_Bool)arg2;	// IMP=0x00000001004bad7c
- (void)redirectToGetSellerCoupon:(id)arg1 sellerName:(id)arg2 couponCount:(long long)arg3;	// IMP=0x00000001004babd0
- (void)redirectToSimilarProductList:(id)arg1;	// IMP=0x00000001004baa44
- (void)redirectToProductDetail:(id)arg1;	// IMP=0x00000001004ba92c
- (void)redirectToShippingServiceSelection:(id)arg1;	// IMP=0x00000001004b9e50
- (void)redirectToStore:(id)arg1;	// IMP=0x00000001004b9cb4
@property(retain, nonatomic) NSNumber *networkRequestTrackingStart; // @dynamic networkRequestTrackingStart;
@property(retain, nonatomic) NSNumber *pageRenderTrackingStart; // @dynamic pageRenderTrackingStart;
- (void)trackCartClosed;	// IMP=0x00000001004bbc84
- (void)trackCartBuyAllSelected;	// IMP=0x00000001004bbb50
- (void)trackCartChangeProductCount;	// IMP=0x00000001004bbb30
- (void)trackCartSelectItem;	// IMP=0x00000001004bbb10
- (void)trackCartSelectVendor;	// IMP=0x00000001004bbaf0
- (void)trackCartSelectAll;	// IMP=0x00000001004bbad0
- (void)trackCartGotoProductDetail;	// IMP=0x00000001004bbab0
- (void)trackCartGotoStore;	// IMP=0x00000001004bba90
- (void)trackCartGetSellerCoupon;	// IMP=0x00000001004bba70
- (void)trackCartSelectShippingService;	// IMP=0x00000001004bba20
- (void)trackCartRemoveSelectedItem;	// IMP=0x00000001004bba00
- (void)trackCartFindSimilar;	// IMP=0x00000001004bb9e0
- (void)trackCartRemoveItem;	// IMP=0x00000001004bb9c0
- (void)trackCartDataLoadSuccess;	// IMP=0x00000001004bb9a0
- (void)finishPerformanceTracking;	// IMP=0x00000001004bb708
- (void)startNetworkRenderTracking;	// IMP=0x00000001004bb6ac
- (void)startPageRenderTracking;	// IMP=0x00000001004bb650
- (id)pageTrackName;	// IMP=0x00000001004bb624

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUIViewController.h"

#import "AFCommandTest.h"
#import "MPTableViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MPTableView, NSMutableArray, NSString, WishListService;

@interface AEWishStoreListVC : AEUIViewController <AFCommandTest, UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate, MPTableViewDelegate>
{
    int _storeListCurrentPage;	// 8 = 0x8
    int _storeListTotalPage;	// 12 = 0xc
    NSMutableArray *_storeArray;	// 16 = 0x10
    _Bool _loading;	// 24 = 0x18
    WishListService *_wishListService;	// 32 = 0x20
    MPTableView *_wishStoreTableView;	// 40 = 0x28
}

+ (id)paramsToTest;	// IMP=0x0000000100cc2838
@property(retain, nonatomic) MPTableView *wishStoreTableView; // @synthesize wishStoreTableView=_wishStoreTableView;
@property(retain, nonatomic) WishListService *wishListService; // @synthesize wishListService=_wishListService;
- (void).cxx_destruct;	// IMP=0x0000000100cc27e4
- (void)reloadTableView;	// IMP=0x0000000100cc2610
- (id)pageTrackName;	// IMP=0x0000000100cc25e4
- (_Bool)isNeedAuthCheck;	// IMP=0x0000000100cc25dc
- (void)tableViewWillLoadNextPage:(id)arg1;	// IMP=0x0000000100cc2554
- (void)tableViewWillRefresh:(id)arg1;	// IMP=0x0000000100cc2548
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000100cc23a8
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100cc2268
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000100cc2260
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100cc2248
- (void)startRequestForStoreWishList;	// IMP=0x0000000100cc1f2c
- (void)refreshData;	// IMP=0x0000000100cc1eb0
- (void)setupTableView;	// IMP=0x0000000100cc1bc8
- (void)viewDidLoad;	// IMP=0x0000000100cc1a5c
- (void)dealloc;	// IMP=0x0000000100cc19e8
- (id)init;	// IMP=0x0000000100cc190c
- (id)initWithParam:(id)arg1;	// IMP=0x0000000100cc1900

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


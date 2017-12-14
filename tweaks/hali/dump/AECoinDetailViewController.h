//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUIViewController.h"

#import "CoinDetailCellDelegate.h"
#import "CoinDetailDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CoinDetailService, NSMutableArray, NSString, UIButton, UILabel, UITableView, UIView, coinProductDTO;

@interface AECoinDetailViewController : AEUIViewController <UITableViewDelegate, UITableViewDataSource, CoinDetailDelegate, CoinDetailCellDelegate>
{
    UIView *_headerView;	// 8 = 0x8
    CoinDetailService *_coinService;	// 16 = 0x10
    coinProductDTO *_coinProductDTO;	// 24 = 0x18
    NSMutableArray *_recommendedProducts;	// 32 = 0x20
    UIButton *exchange;	// 40 = 0x28
    UIView *storeInfo;	// 48 = 0x30
    UILabel *storeName;	// 56 = 0x38
    UILabel *storeDesc;	// 64 = 0x40
    float bottonMargin;	// 72 = 0x48
    UITableView *_tableView;	// 80 = 0x50
    NSString *_productId;	// 88 = 0x58
    NSString *_promotionId;	// 96 = 0x60
}

@property(retain, nonatomic) NSString *promotionId; // @synthesize promotionId=_promotionId;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;	// IMP=0x00000001004da22c
- (void)suitIPadStyleForProductOnSale;	// IMP=0x00000001004d93b0
- (long long)numberOfRowsOfRecommendedProducts;	// IMP=0x00000001004d9340
- (_Bool)hasRCoinProducts;	// IMP=0x00000001004d9304
- (void)configRecommendedProductCell:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000001004d91a4
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000001004d90b8
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001004d9010
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000001004d8fdc
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000001004d8fc4
- (void)storeTap:(id)arg1;	// IMP=0x00000001004d8edc
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x00000001004d6b38
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x00000001004d6b20
- (void)coinDetailInfoLoaded:(id)arg1 isSuccess:(_Bool)arg2 result:(id)arg3 error:(id)arg4;	// IMP=0x00000001004d67dc
- (id)convert2ProductItemViewModel:(id)arg1;	// IMP=0x00000001004d6628
- (void)loadCoinProductRequest;	// IMP=0x00000001004d6530
- (id)pageTrackName;	// IMP=0x00000001004d6504
- (void)setupExchange;	// IMP=0x00000001004d5be8
- (void)hiddenLoadingIndicator;	// IMP=0x00000001004d5b90
- (void)orderConfirmAction;	// IMP=0x00000001004d5874
- (void)exchangeAction;	// IMP=0x00000001004d5678
- (void)countdown:(long long)arg1 withText:(id)arg2;	// IMP=0x00000001004d55b4
- (void)setupTableHeaderView;	// IMP=0x00000001004d5394
- (void)setupTableView;	// IMP=0x00000001004d4c0c
- (void)viewDidLoad;	// IMP=0x00000001004d4ae8
- (id)init;	// IMP=0x00000001004d4a28
- (id)initWithParam:(id)arg1;	// IMP=0x00000001004d4814

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


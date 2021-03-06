//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUIViewController.h"

#import "AIFExposureProtocol.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class AECartService, AEProductDetailRecommendedItemDTOList, NSMutableArray, NSString, UIRefreshControl, UITableView;

@interface AECartSimilarProductListViewController : AEUIViewController <UITableViewDelegate, UITableViewDataSource, AIFExposureProtocol>
{
    NSString *_productID;	// 8 = 0x8
    UITableView *_mainTableView;	// 16 = 0x10
    UIRefreshControl *_refreshControl;	// 24 = 0x18
    AECartService *_service;	// 32 = 0x20
    NSMutableArray *_viewModels;	// 40 = 0x28
    AEProductDetailRecommendedItemDTOList *_data;	// 48 = 0x30
}

@property(retain, nonatomic) AEProductDetailRecommendedItemDTOList *data; // @synthesize data=_data;
@property(retain, nonatomic) NSMutableArray *viewModels; // @synthesize viewModels=_viewModels;
@property(retain, nonatomic) AECartService *service; // @synthesize service=_service;
@property(retain, nonatomic) UIRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(retain, nonatomic) UITableView *mainTableView; // @synthesize mainTableView=_mainTableView;
@property(retain, nonatomic) NSString *productID; // @synthesize productID=_productID;
- (void).cxx_destruct;	// IMP=0x00000001004b4234
- (id)sceneId;	// IMP=0x00000001004b4058
- (id)exposureType;	// IMP=0x00000001004b4040
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001004b3ef0
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000001004b3ea4
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000001004b3cd0
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000001004b3afc
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000001004b38a0
- (void)getCartSimilarProducts;	// IMP=0x00000001004b31e0
- (void)dealloc;	// IMP=0x00000001004b3130
- (void)viewDidLoad;	// IMP=0x00000001004b2cb8
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001004b2bc4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


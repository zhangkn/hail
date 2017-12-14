//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUIViewController.h"

@class AEMobileRechargePhoneHistoryView, AEMobileRechargeViewManager, AEMobileRechargeViewModel, NSString, UICollectionView, UIRefreshControl;

@interface AEMobileRechargeViewController : AEUIViewController
{
    AEMobileRechargeViewModel *_viewModel;	// 8 = 0x8
    UICollectionView *_collectionView;	// 16 = 0x10
    AEMobileRechargeViewManager *_viewManager;	// 24 = 0x18
    AEMobileRechargePhoneHistoryView *_historyListView;	// 32 = 0x20
    NSString *_countryCode;	// 40 = 0x28
    UIRefreshControl *_refreshControl;	// 48 = 0x30
}

@property(retain, nonatomic) UIRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) AEMobileRechargePhoneHistoryView *historyListView; // @synthesize historyListView=_historyListView;
@property(retain, nonatomic) AEMobileRechargeViewManager *viewManager; // @synthesize viewManager=_viewManager;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) AEMobileRechargeViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;	// IMP=0x000000010051e780
- (void)showHistoryListView:(id)arg1;	// IMP=0x000000010051e43c
- (void)checkHistoryListWithPrefix:(id)arg1;	// IMP=0x000000010051e0e8
- (void)refreshView:(id)arg1;	// IMP=0x000000010051e0d0
- (void)setupCollectionView;	// IMP=0x000000010051d9f8
- (id)pageTrackName;	// IMP=0x000000010051d9cc
- (void)viewDidLoad;	// IMP=0x000000010051d47c
- (id)initWithParam:(id)arg1;	// IMP=0x000000010051d3a0

@end

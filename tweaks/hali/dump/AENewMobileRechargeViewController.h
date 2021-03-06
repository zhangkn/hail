//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUIViewController.h"

#import "AENewMobileRechargeViewModelDelegate.h"

@class AEMobileRechargeCollectionView, AEMobileRechargePhoneHistoryView, AENewMobileRechargeViewModel, NSString, UIRefreshControl;

@interface AENewMobileRechargeViewController : AEUIViewController <AENewMobileRechargeViewModelDelegate>
{
    AEMobileRechargeCollectionView *_collectionView;	// 8 = 0x8
    AENewMobileRechargeViewModel *_viewModel;	// 16 = 0x10
    NSString *_aliMemberId;	// 24 = 0x18
    NSString *_country;	// 32 = 0x20
    AEMobileRechargePhoneHistoryView *_historyListView;	// 40 = 0x28
    UIRefreshControl *_refreshControl;	// 48 = 0x30
}

@property(retain, nonatomic) UIRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(retain, nonatomic) AEMobileRechargePhoneHistoryView *historyListView; // @synthesize historyListView=_historyListView;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(retain, nonatomic) NSString *aliMemberId; // @synthesize aliMemberId=_aliMemberId;
@property(retain, nonatomic) AENewMobileRechargeViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) AEMobileRechargeCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;	// IMP=0x00000001005282a0
- (void)mobileRechargeViewModel:(id)arg1 endEditing:(_Bool)arg2;	// IMP=0x00000001005280a8
- (void)mobileRechargeViewModel:(id)arg1 removeHistoryViewUnderTextField:(id)arg2;	// IMP=0x0000000100528068
- (void)mobileRechargeViewModel:(id)arg1 showHistoryViewUnderRect:(struct CGRect)arg2 withData:(id)arg3 countryCode:(id)arg4;	// IMP=0x0000000100527acc
- (void)mobileRechargeViewModel:(id)arg1 dataLoadedError:(id)arg2;	// IMP=0x0000000100527a8c
- (void)mobileRechargeViewModel:(id)arg1 sectionDidChanged:(id)arg2;	// IMP=0x00000001005279c0
- (void)refreshView:(id)arg1;	// IMP=0x0000000100527980
- (void)registerFooterView;	// IMP=0x0000000100527900
- (void)registerHeaderView;	// IMP=0x0000000100527814
- (void)registerCellModels;	// IMP=0x00000001005276d0
- (id)pageTrackParams;	// IMP=0x00000001005275d0
- (id)pageTrackName;	// IMP=0x00000001005275a4
- (void)viewDidLoad;	// IMP=0x0000000100526fa4
- (id)initWithParam:(id)arg1;	// IMP=0x0000000100526eac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


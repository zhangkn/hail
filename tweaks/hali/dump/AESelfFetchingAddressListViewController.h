//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUIViewController.h"

#import "AESelfFetchingAddressCellDelegate.h"
#import "MailingAddressServiceDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class AEAddressTipView, AEMailingAddressListDTO, MailingAddressService, NSArray, NSString, UITableView;

@interface AESelfFetchingAddressListViewController : AEUIViewController <UITableViewDelegate, UITableViewDataSource, AESelfFetchingAddressCellDelegate, MailingAddressServiceDelegate>
{
    NSString *_houseAddressID;	// 8 = 0x8
    id <AEMailingAddressListViewControllerDelegate> _delegate;	// 16 = 0x10
    UITableView *_tableView;	// 24 = 0x18
    AEAddressTipView *_tipsView;	// 32 = 0x20
    AEMailingAddressListDTO *_addressListDTO;	// 40 = 0x28
    NSArray *_cellModels;	// 48 = 0x30
    MailingAddressService *_service;	// 56 = 0x38
}

@property(retain, nonatomic) MailingAddressService *service; // @synthesize service=_service;
@property(retain, nonatomic) NSArray *cellModels; // @synthesize cellModels=_cellModels;
@property(retain, nonatomic) AEMailingAddressListDTO *addressListDTO; // @synthesize addressListDTO=_addressListDTO;
@property(retain, nonatomic) AEAddressTipView *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <AEMailingAddressListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *houseAddressID; // @synthesize houseAddressID=_houseAddressID;
- (void).cxx_destruct;	// IMP=0x00000001005f5abc
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001005f5748
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000001005f56fc
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000001005f5548
- (void)selfFetchingAddressCellDidSelectLocation:(id)arg1;	// IMP=0x00000001005f54a0
- (void)mailingAddressBindResultLoaded:(id)arg1 isSuccess:(_Bool)arg2 result:(id)arg3 error:(id)arg4;	// IMP=0x00000001005f537c
- (void)mailingSelfFetchingAddressLoaded:(id)arg1 isSuccess:(_Bool)arg2 result:(id)arg3 error:(id)arg4;	// IMP=0x00000001005f4f2c
- (void)showMapWithIndex:(unsigned long long)arg1;	// IMP=0x00000001005f4950
- (void)viewDidLayoutSubviews;	// IMP=0x00000001005f48b4
- (void)viewDidLoad;	// IMP=0x00000001005f406c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

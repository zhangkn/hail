//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUIViewController.h"

#import "AENotificastionServiceFromServerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class AENotificastionServiceFromServer, NSMutableArray, NSString, NotificationFromServerDTO, UIButton, UIImageView, UILabel, UIRefreshControl, UITableView, UIView;

@interface AENotificationSubListViewController : AEUIViewController <UIAlertViewDelegate, UITableViewDelegate, UITableViewDataSource, AENotificastionServiceFromServerDelegate>
{
    UIButton *delButton;	// 8 = 0x8
    UIView *line;	// 16 = 0x10
    int page;	// 24 = 0x18
    UIRefreshControl *_refreshControl;	// 32 = 0x20
    NotificationFromServerDTO *channelDTO;	// 40 = 0x28
    _Bool isRemoveAll;	// 48 = 0x30
    NSString *_channelId;	// 56 = 0x38
    NSMutableArray *_dataArray;	// 64 = 0x40
    AENotificastionServiceFromServer *_notificationService;	// 72 = 0x48
    UITableView *_tableView;	// 80 = 0x50
    UIView *_deleteContainerView;	// 88 = 0x58
    UIView *_emptyNotificationView;	// 96 = 0x60
    UIImageView *_emptyNotifiIcoView;	// 104 = 0x68
    UILabel *_emptyNotifiLb;	// 112 = 0x70
}

@property(retain, nonatomic) UILabel *emptyNotifiLb; // @synthesize emptyNotifiLb=_emptyNotifiLb;
@property(retain, nonatomic) UIImageView *emptyNotifiIcoView; // @synthesize emptyNotifiIcoView=_emptyNotifiIcoView;
@property(retain, nonatomic) UIView *emptyNotificationView; // @synthesize emptyNotificationView=_emptyNotificationView;
@property(retain, nonatomic) UIView *deleteContainerView; // @synthesize deleteContainerView=_deleteContainerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) AENotificastionServiceFromServer *notificationService; // @synthesize notificationService=_notificationService;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
- (void).cxx_destruct;	// IMP=0x00000001001cf9c4
- (void)getAPIResponse:(id)arg1 isSuccess:(_Bool)arg2 result:(id)arg3 error:(id)arg4;	// IMP=0x00000001001cf270
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001001cf1fc
- (_Bool)isNeedAuthCheck;	// IMP=0x00000001001cf1f4
- (id)pageTrackName;	// IMP=0x00000001001cf1c8
- (id)pageTrackParams;	// IMP=0x00000001001cf154
- (void)refreshView:(id)arg1;	// IMP=0x00000001001cefa4
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000001001ceee4
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;	// IMP=0x00000001001cee80
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;	// IMP=0x00000001001cee74
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;	// IMP=0x00000001001ced28
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000001001cea9c
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x00000001001cea94
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x00000001001cea8c
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x00000001001cea84
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000001001cea78
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000001001cea60
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000001001cea58
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000001001ce538
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001001ce3b0
- (void)dealloc;	// IMP=0x00000001001ce33c
- (void)closeEdit;	// IMP=0x00000001001ce2d8
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;	// IMP=0x00000001001ce2c0
- (void)removeAll;	// IMP=0x00000001001ce0e4
- (void)removeAllConfirm;	// IMP=0x00000001001cdf68
- (void)viewDidLoad;	// IMP=0x00000001001cc0ec
- (id)initWithParam:(id)arg1;	// IMP=0x00000001001cc0c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


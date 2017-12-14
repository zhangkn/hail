//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUIViewController.h"

#import "AFCommandViewController.h"
#import "TTTAttributedLabelDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class LogisticInfo, NSMutableArray, NSString, UITableView;

@interface AELogisticsInfoVIewController : AEUIViewController <UITableViewDataSource, UITableViewDelegate, TTTAttributedLabelDelegate, AFCommandViewController>
{
    UITableView *_tableView;	// 8 = 0x8
    NSString *_orderId;	// 16 = 0x10
    LogisticInfo *_logisticInfo;	// 24 = 0x18
    NSMutableArray *_collapseStatus;	// 32 = 0x20
}

@property(retain, nonatomic) NSMutableArray *collapseStatus; // @synthesize collapseStatus=_collapseStatus;
@property(retain, nonatomic) LogisticInfo *logisticInfo; // @synthesize logisticInfo=_logisticInfo;
@property(retain, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;	// IMP=0x0000000100126624
- (id)filterParam:(id)arg1 withCommandAlias:(id)arg2 isSelf:(_Bool)arg3;	// IMP=0x00000001001263e4
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;	// IMP=0x0000000100126338
- (id)noticeAndAddress:(CDUnknownBlockType)arg1 indexPath:(id)arg2;	// IMP=0x0000000100126200
- (long long)packageSectionIndex:(id)arg1;	// IMP=0x0000000100126174
- (void)configPackageCell:(id)arg1 withPackageIndex:(long long)arg2;	// IMP=0x0000000100125f64
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100125928
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000001001255a0
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x0000000100125598
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100125590
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000001001254c4
- (id)pageTrackParams;	// IMP=0x000000010012540c
- (id)pageTrackName;	// IMP=0x00000001001253e0
- (void)setupUI;	// IMP=0x00000001001250a8
- (void)switchCollapse:(id)arg1;	// IMP=0x0000000100124f48
- (void)viewDidLoad;	// IMP=0x0000000100124b44
- (void)dealloc;	// IMP=0x0000000100124a94
- (id)initWithParam:(id)arg1;	// IMP=0x00000001001249f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


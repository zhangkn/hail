//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEModuleGoldBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class AEModuleTreeRankViewModel, NSString, UITableView;

@interface AEModuleTreeRankListVCtr : AEModuleGoldBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;	// 8 = 0x8
    AEModuleTreeRankViewModel *_viewModel;	// 16 = 0x10
}

@property(retain, nonatomic) AEModuleTreeRankViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;	// IMP=0x0000000100b0e61c
- (void)didReceiveMemoryWarning;	// IMP=0x0000000100b0e3b0
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000100b0dfac
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000100b0dfa4
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100b0dedc
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100b0decc
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100b0dc24
- (id)pageTrackName;	// IMP=0x0000000100b0dbf8
- (void)loadData;	// IMP=0x0000000100b0da04
- (void)viewDidLoad;	// IMP=0x0000000100b0d4c0
- (id)initWithParam:(id)arg1;	// IMP=0x0000000100b0d464

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


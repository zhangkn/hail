//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, UITableView;

@interface AEMemberPrivilegeDetailVC : AEUIViewController <UITableViewDelegate, UITableViewDataSource>
{
    NSArray *_items;	// 8 = 0x8
    UITableView *_tableView;	// 16 = 0x10
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;	// IMP=0x0000000100150420
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000010014ffac
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x000000010014ffa0
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x000000010014ff94
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000010014fe6c
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x000000010014fe48
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x000000010014fe24
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000010014fcb0
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000010014fc64
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000010014fc5c
- (void)viewDidLoad;	// IMP=0x000000010014fc28
- (void)loadView;	// IMP=0x000000010014f870
- (id)initWithLevelPrivileges:(id)arg1;	// IMP=0x000000010014f7f8
- (void)dealloc;	// IMP=0x000000010014f784

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


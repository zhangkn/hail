//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class AEModuleUGCUserProfileModel, NSMutableDictionary, NSString, UITableView;

@interface AEUGCProfilePersonInfoVCtr : AEUIViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;	// 8 = 0x8
    NSMutableDictionary *_cellCacheHeights;	// 16 = 0x10
    AEModuleUGCUserProfileModel *_model;	// 24 = 0x18
}

@property(retain, nonatomic) AEModuleUGCUserProfileModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSMutableDictionary *cellCacheHeights; // @synthesize cellCacheHeights=_cellCacheHeights;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;	// IMP=0x0000000100ebe598
- (id)footView;	// IMP=0x0000000100ebe40c
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000100ebe24c
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000100ebe244
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100ebe23c
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000100ebe068
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100ebde90
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100ebd47c
- (void)didReceiveMemoryWarning;	// IMP=0x0000000100ebd448
- (void)viewDidLoad;	// IMP=0x0000000100ebd018
- (id)initWithParam:(id)arg1;	// IMP=0x0000000100ebcf40

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

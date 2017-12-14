//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class AECategorySelectDataController, NSString, UITableView;

@interface AECategorySelectViewController : AEUIViewController <UITableViewDataSource, UITableViewDelegate>
{
    id <AECategorySelectVCDelegate> _delegate;	// 8 = 0x8
    UITableView *_tableView;	// 16 = 0x10
    AECategorySelectDataController *_dataController;	// 24 = 0x18
}

@property(retain, nonatomic) AECategorySelectDataController *dataController; // @synthesize dataController=_dataController;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <AECategorySelectVCDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100bea2dc
- (_Bool)needTrackPage;	// IMP=0x0000000100bea220
- (id)pageTrackName;	// IMP=0x0000000100bea1f4
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x0000000100bea108
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000100be9d4c
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100be9d40
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100be9ac8
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100be99b0
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000100be993c
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x0000000100be9928
- (void)loadView;	// IMP=0x0000000100be9330
- (id)initWithCategoryRefineDto:(id)arg1 searchQuery:(id)arg2;	// IMP=0x0000000100be9264
- (void)dealloc;	// IMP=0x0000000100be91f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

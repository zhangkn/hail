//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, UITableView;

@interface AVFSDetailView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_tableView;	// 8 = 0x8
    NSMutableArray *_tableData;	// 16 = 0x10
    long long _sortType;	// 24 = 0x18
}

@property(nonatomic) long long sortType; // @synthesize sortType=_sortType;
@property(retain, nonatomic) NSMutableArray *tableData; // @synthesize tableData=_tableData;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;	// IMP=0x00000001011ab65c
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000001011ab430
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001011ab11c
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000001011ab0d0
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000001011ab0c8
- (void)refreshBtnClick;	// IMP=0x00000001011ab074
- (void)cancelBtnClick;	// IMP=0x00000001011ab068
- (void)segmentValueChanged:(id)arg1;	// IMP=0x00000001011aafec
- (void)sortData;	// IMP=0x00000001011aad20
- (void)genTableData:(id)arg1;	// IMP=0x00000001011aabc8
- (void)loadData;	// IMP=0x00000001011aaaa0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001011aa28c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


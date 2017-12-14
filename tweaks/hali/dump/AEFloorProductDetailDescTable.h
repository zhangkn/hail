//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETileAdapterFloor.h"

#import "AEMultiTableViewDataSource.h"
#import "AEMultiTableViewDelegate.h"

@class AEFloorProductDetailDescTableViewModel, AEMultiTableView, NSString;

@interface AEFloorProductDetailDescTable : AETileAdapterFloor <AEMultiTableViewDataSource, AEMultiTableViewDelegate>
{
    AEFloorProductDetailDescTableViewModel *_tableViewModel;	// 8 = 0x8
    AEMultiTableView *_tableView;	// 16 = 0x10
}

+ (Class)modelClass;	// IMP=0x00000001004f99cc
+ (id)identifier;	// IMP=0x00000001004f99a0
@property(retain, nonatomic) AEMultiTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;	// IMP=0x00000001004faf18
- (void)tableViewWithType:(unsigned long long)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000001004faecc
- (id)tableView:(id)arg1 bgColorInSection:(unsigned long long)arg2 inRow:(unsigned long long)arg3 inColumn:(unsigned long long)arg4;	// IMP=0x00000001004fad9c
- (double)tableView:(id)arg1 cellHeightInSection:(unsigned long long)arg2 inRow:(unsigned long long)arg3;	// IMP=0x00000001004fa94c
- (double)tableView:(id)arg1 contentTableCellWidth:(unsigned long long)arg2;	// IMP=0x00000001004fa614
- (_Bool)tableViewHasTopHeader:(id)arg1;	// IMP=0x00000001004fa5fc
- (_Bool)tableViewHasLeftHeader:(id)arg1;	// IMP=0x00000001004fa5e4
- (long long)tableView:(id)arg1 textAlignmentInColumn:(long long)arg2;	// IMP=0x00000001004fa5dc
- (unsigned long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000001004fa5c4
- (id)arraySectionDataForContentInTableView:(id)arg1 inSection:(unsigned long long)arg2;	// IMP=0x00000001004fa5bc
- (id)arrayDataForContentInTableView:(id)arg1 inSection:(unsigned long long)arg2;	// IMP=0x00000001004fa5a4
- (id)arrayDataForLeftHeaderInTableView:(id)arg1 inSection:(unsigned long long)arg2;	// IMP=0x00000001004fa58c
- (id)arrayDataForTopHeaderInTableView:(id)arg1;	// IMP=0x00000001004fa574
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x00000001004fa484
- (Class)viewModelClass;	// IMP=0x00000001004fa470
- (id)initFloor;	// IMP=0x00000001004f99e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


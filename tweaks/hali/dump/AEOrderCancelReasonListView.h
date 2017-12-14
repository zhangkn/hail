//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, UITableView;

@interface AEOrderCancelReasonListView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    NSArray *_dataArray;	// 8 = 0x8
    UITableView *_tableView;	// 16 = 0x10
    id <AEOrderCancelReasonListViewDelegate> _delegate;	// 24 = 0x18
}

@property(nonatomic) __weak id <AEOrderCancelReasonListViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
- (void).cxx_destruct;	// IMP=0x00000001001d0124
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000001001cfe84
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001001cfd88
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000001001cfd70
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000001001cfd64
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x00000001001cfd5c
- (void)layoutSubviews;	// IMP=0x00000001001cfd28
- (void)dealloc;	// IMP=0x00000001001cfcb4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001001cfacc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

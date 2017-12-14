//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, UIButton, UITableView;

@interface AEUGCPopListView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    id <AEUGCPopListViewDelegate> _delegate;	// 8 = 0x8
    NSArray *_listItems;	// 16 = 0x10
    UITableView *_tableView;	// 24 = 0x18
    UIButton *_backgroundButton;	// 32 = 0x20
}

@property(retain, nonatomic) UIButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *listItems; // @synthesize listItems=_listItems;
@property(nonatomic) __weak id <AEUGCPopListViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100e4fa24
- (void)backgroundButtonAction:(id)arg1;	// IMP=0x0000000100e4f7fc
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000100e4f630
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100e4f624
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100e4f438
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100e4f3ec
- (id)initWithItems:(id)arg1 Frame:(struct CGRect)arg2;	// IMP=0x0000000100e4eaf8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, UIButton, UITableView;

@interface AEUGCPopoverListView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    id <AEUGCPopoverListViewDelegate> _delegate;	// 8 = 0x8
    NSArray *_listItems;	// 16 = 0x10
    UITableView *_tableView;	// 24 = 0x18
    UIButton *_backgroundButton;	// 32 = 0x20
}

@property(retain, nonatomic) UIButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *listItems; // @synthesize listItems=_listItems;
@property(nonatomic) __weak id <AEUGCPopoverListViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001007a652c
- (void)dissmiss;	// IMP=0x00000001007a63bc
- (void)showInView:(id)arg1 inRect:(struct CGRect)arg2;	// IMP=0x00000001007a628c
- (void)backgroundButtonAction:(id)arg1;	// IMP=0x00000001007a6108
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000001007a5ea4
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000001007a5e98
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001007a5cac
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000001007a5c60
- (id)initWithItems:(id)arg1 Frame:(struct CGRect)arg2;	// IMP=0x00000001007a57dc
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001007a575c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001007a56dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


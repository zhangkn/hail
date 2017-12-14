//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "AEUGCMaskControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class AEUGCMaskController, NSArray, NSString, UIButton, UILabel, UITableView;

@interface AEUGCPullListView : UIView <AEUGCMaskControllerDelegate, UITableViewDelegate, UITableViewDataSource>
{
    NSArray *_itemImageArray;	// 8 = 0x8
    NSArray *_itemTitleArray;	// 16 = 0x10
    UIView *_separatorLine;	// 24 = 0x18
    UITableView *_tableView;	// 32 = 0x20
    UIButton *_closeButton;	// 40 = 0x28
    UILabel *_titleLabel;	// 48 = 0x30
    CDUnknownBlockType _selectedHandler;	// 56 = 0x38
}

+ (id)ShowPullListViewWithTitle:(id)arg1 itemImageArray:(id)arg2 itemTitleArray:(id)arg3 selectedHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001007b6fb8
@property(copy, nonatomic) CDUnknownBlockType selectedHandler; // @synthesize selectedHandler=_selectedHandler;
@property(readonly, copy, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, copy, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
- (void).cxx_destruct;	// IMP=0x00000001007b6f14
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001007b6bf8
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000001007b6be0
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000001007b6b90
- (double)calculateHeight;	// IMP=0x00000001007b6af4
- (void)configAutoLayout;	// IMP=0x00000001007b5f18
- (id)initWithTitle:(id)arg1 itemImageArray:(id)arg2 itemTitleArray:(id)arg3;	// IMP=0x00000001007b595c
- (void)dealloc;	// IMP=0x00000001007b5928
@property(retain, nonatomic) AEUGCMaskController *maskController;
- (void)maskControllerDidDismiss:(id)arg1;	// IMP=0x00000001007b75b0
- (void)closeAction:(id)arg1;	// IMP=0x00000001007b7568

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

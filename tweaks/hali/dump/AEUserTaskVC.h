//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUIViewController.h"

#import "AFCommandTest.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "cellDelegate.h"

@class AETaskDetailDTO, AETaskDetailHeadView, AEUserTaskService, NSString, UILabel, UIRefreshControl, UITableView;

@interface AEUserTaskVC : AEUIViewController <AFCommandTest, cellDelegate, UITableViewDelegate, UITableViewDataSource>
{
    struct CGRect bounds;	// 8 = 0x8
    UITableView *tableView;	// 40 = 0x28
    NSString *errType;	// 48 = 0x30
    NSString *trackProductId;	// 56 = 0x38
    AEUserTaskService *requestService;	// 64 = 0x40
    NSString *titleTxt;	// 72 = 0x48
    AETaskDetailHeadView *headerView;	// 80 = 0x50
    UIRefreshControl *refreshControl;	// 88 = 0x58
    UILabel *bottomTxt;	// 96 = 0x60
    _Bool presentMode;	// 104 = 0x68
    long long cellHeight;	// 112 = 0x70
    long long headHeight;	// 120 = 0x78
    _Bool _isDidFinish;	// 128 = 0x80
    NSString *_from;	// 136 = 0x88
    AETaskDetailDTO *_resultDTO;	// 144 = 0x90
}

+ (id)paramsToTest;	// IMP=0x000000010029fddc
@property(retain, nonatomic) AETaskDetailDTO *resultDTO; // @synthesize resultDTO=_resultDTO;
@property(retain, nonatomic) NSString *from; // @synthesize from=_from;
@property(nonatomic) _Bool isDidFinish; // @synthesize isDidFinish=_isDidFinish;
- (void).cxx_destruct;	// IMP=0x000000010029fcfc
- (void)dealloc;	// IMP=0x000000010029fbec
- (void)didReceiveMemoryWarning;	// IMP=0x000000010029fbb8
- (void)close;	// IMP=0x000000010029f980
- (void)setupLeftButton;	// IMP=0x000000010029f81c
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000010029f818
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x000000010029f73c
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000010029f6a4
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000010029f4a8
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000010029f4a0
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x000000010029f498
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x000000010029f478
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000010029f3cc
- (void)setFinishValue:(_Bool)arg1;	// IMP=0x000000010029f3bc
- (void)reloadCell;	// IMP=0x000000010029f3b0
- (id)getinvitTxt:(id)arg1;	// IMP=0x000000010029f04c
- (id)configBottomCell:(id)arg1 section:(long long)arg2;	// IMP=0x000000010029e940
- (id)configSimpleCell:(id)arg1 section:(long long)arg2;	// IMP=0x000000010029e790
- (void)showEmptyViewIfNeeded:(_Bool)arg1;	// IMP=0x000000010029e5bc
- (id)pageTrackParams;	// IMP=0x000000010029e190
- (id)pageTrackName;	// IMP=0x000000010029e164
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010029e130
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010029e0e0
- (void)doRequest4FeedbackTaskDetail;	// IMP=0x000000010029da98
- (void)doRequest4TaskDetail;	// IMP=0x000000010029d534
- (void)requestResult;	// IMP=0x000000010029d4b0
- (void)refreshView:(id)arg1;	// IMP=0x000000010029d444
- (void)viewDidLoad;	// IMP=0x000000010029cd6c
- (id)initWithParam:(id)arg1;	// IMP=0x000000010029cb50
- (id)init;	// IMP=0x000000010029ca94

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


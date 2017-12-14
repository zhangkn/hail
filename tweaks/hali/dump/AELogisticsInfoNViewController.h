//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUIViewController.h"

#import "AFCommandTest.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class LogisticInfo, NSArray, NSString, UITableView;

@interface AELogisticsInfoNViewController : AEUIViewController <AFCommandTest, UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_tableView;	// 8 = 0x8
    NSString *_orderId;	// 16 = 0x10
    LogisticInfo *_logisticInfo;	// 24 = 0x18
    NSArray *_logisticsData;	// 32 = 0x20
}

+ (id)paramsToTest;	// IMP=0x0000000100124974
@property(retain, nonatomic) NSArray *logisticsData; // @synthesize logisticsData=_logisticsData;
@property(retain, nonatomic) LogisticInfo *logisticInfo; // @synthesize logisticInfo=_logisticInfo;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;	// IMP=0x000000010012490c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000010012435c
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100124310
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000100124308
- (id)pageTrackParams;	// IMP=0x0000000100124250
- (id)pageTrackName;	// IMP=0x0000000100124224
- (void)didReceiveMemoryWarning;	// IMP=0x00000001001241f0
- (void)dealRequestData:(id)arg1;	// IMP=0x0000000100123d68
- (void)doRequest;	// IMP=0x0000000100123ad8
- (void)viewDidLoad;	// IMP=0x0000000100123844
- (id)initWithParam:(id)arg1;	// IMP=0x00000001001234d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


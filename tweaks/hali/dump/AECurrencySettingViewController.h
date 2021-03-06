//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUIViewController.h"

#import "AFCommandTest.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextViewDelegate.h"

@class AECurrencyListDTO, AECurrencyService, NSArray, NSIndexPath, NSString, UITableView;

@interface AECurrencySettingViewController : AEUIViewController <AFCommandTest, UITableViewDataSource, UITableViewDelegate, UITextViewDelegate>
{
    NSIndexPath *_lastSelectedRow;	// 8 = 0x8
    AECurrencyService *_currencyService;	// 16 = 0x10
    AECurrencyListDTO *_supportCurrencies;	// 24 = 0x18
    NSArray *_previewCurrencies;	// 32 = 0x20
    NSArray *_sectionIndexes;	// 40 = 0x28
    UITableView *_currencyTableView;	// 48 = 0x30
}

+ (id)paramsToTest;	// IMP=0x0000000100ac8c90
@property(retain, nonatomic) UITableView *currencyTableView; // @synthesize currencyTableView=_currencyTableView;
@property(retain, nonatomic) NSArray *sectionIndexes; // @synthesize sectionIndexes=_sectionIndexes;
@property(retain, nonatomic) NSArray *previewCurrencies; // @synthesize previewCurrencies=_previewCurrencies;
@property(retain, nonatomic) AECurrencyListDTO *supportCurrencies; // @synthesize supportCurrencies=_supportCurrencies;
- (void).cxx_destruct;	// IMP=0x0000000100ac8c00
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;	// IMP=0x0000000100ac8ad8
- (id)sectionIndexTitlesForTableView:(id)arg1;	// IMP=0x0000000100ac8ac8
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000100ac8654
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100ac8290
- (id)previewCurrencyTipCell:(id)arg1;	// IMP=0x0000000100ac7a58
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x0000000100ac74c4
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;	// IMP=0x0000000100ac7318
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100ac7308
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x0000000100ac72f0
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100ac7260
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000100ac7200
- (id)pageTrackName;	// IMP=0x0000000100ac71d4
- (void)dealloc;	// IMP=0x0000000100ac7160
- (void)loadCurrencyList;	// IMP=0x0000000100ac68a8
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100ac6858
- (void)viewDidLoad;	// IMP=0x0000000100ac64e8
- (id)initWithParam:(id)arg1;	// IMP=0x0000000100ac6468

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


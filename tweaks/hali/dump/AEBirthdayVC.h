//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUIViewController.h"

#import "AFCommandTest.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class AEUserProfileDTO, AEUserProfileService, NSDateFormatter, NSString, UIButton, UIDatePicker, UILabel, UITableView, UIView, _AEBirthdayUTF;

@interface AEBirthdayVC : AEUIViewController <AFCommandTest, UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;	// 8 = 0x8
    UIDatePicker *_datePicker;	// 16 = 0x10
    UIButton *_sumbitBtn;	// 24 = 0x18
    UIButton *_bottomSumbitBtn;	// 32 = 0x20
    UIView *_footerView;	// 40 = 0x28
    UILabel *_footerLabel;	// 48 = 0x30
    NSString *_birthday;	// 56 = 0x38
    NSDateFormatter *_dateFormatter;	// 64 = 0x40
    _AEBirthdayUTF *_textField;	// 72 = 0x48
    UILabel *_titleLab;	// 80 = 0x50
    AEUserProfileService *_userProfileService;	// 88 = 0x58
    AEUserProfileDTO *_userProfileDTO;	// 96 = 0x60
}

+ (id)paramsToTest;	// IMP=0x0000000100025b5c
@property(retain, nonatomic) AEUserProfileDTO *userProfileDTO; // @synthesize userProfileDTO=_userProfileDTO;
@property(retain, nonatomic) AEUserProfileService *userProfileService; // @synthesize userProfileService=_userProfileService;
@property(nonatomic) __weak UILabel *titleLab; // @synthesize titleLab=_titleLab;
@property(nonatomic) __weak _AEBirthdayUTF *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(copy, nonatomic) NSString *birthday; // @synthesize birthday=_birthday;
@property(retain, nonatomic) UILabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIButton *bottomSumbitBtn; // @synthesize bottomSumbitBtn=_bottomSumbitBtn;
@property(retain, nonatomic) UIButton *sumbitBtn; // @synthesize sumbitBtn=_sumbitBtn;
@property(retain, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;	// IMP=0x0000000100025a5c
- (void)refreshUI;	// IMP=0x000000010002548c
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x0000000100025420
- (void)keyboardWillBeHidden:(id)arg1;	// IMP=0x00000001000251c4
- (void)keyboardWillBeShown:(id)arg1;	// IMP=0x0000000100024e60
- (void)removeForKeyboardNotifications;	// IMP=0x0000000100024dac
- (void)registerForKeyboardNotifications;	// IMP=0x0000000100024ce8
- (void)datePickerChanged;	// IMP=0x0000000100024b5c
- (void)trackEventWithEvent:(id)arg1 andParams:(id)arg2;	// IMP=0x00000001000248c0
- (void)sumbitTapped;	// IMP=0x000000010002407c
- (id)buildButton;	// IMP=0x0000000100023c7c
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000001000233b4
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x00000001000233a8
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x000000010002339c
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100023390
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x000000010002336c
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x0000000100023348
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100022c28
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100022c20
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000100022c18
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100022b68
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100022b18
- (void)viewDidLoad;	// IMP=0x00000001000227f8
- (void)loadView;	// IMP=0x0000000100022080
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100021fc8
- (void)dealloc;	// IMP=0x0000000100021f54

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUIViewController.h"

#import "PreferenceSettingServiceDelegate.h"
#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class AEPreferenceSettingService, NSString, UIButton, UILabel, UIPickerView, UIScrollView, UITapGestureRecognizer, UIView;

@interface AEPreferenceProfileViewController : AEUIViewController <UIPickerViewDataSource, UIPickerViewDelegate, PreferenceSettingServiceDelegate>
{
    _Bool _isInitedConstraints;	// 8 = 0x8
    long long _currentYear;	// 16 = 0x10
    long long _gender;	// 24 = 0x18
    long long _birthYear;	// 32 = 0x20
    AEPreferenceSettingService *_service;	// 40 = 0x28
    UIView *_splitView1;	// 48 = 0x30
    UIView *_splitView2;	// 56 = 0x38
    CDUnknownBlockType _skipAction;	// 64 = 0x40
    UIScrollView *_wrapper;	// 72 = 0x48
    UIView *_genderWrapper;	// 80 = 0x50
    UILabel *_genderHint;	// 88 = 0x58
    UIButton *_skipButton;	// 96 = 0x60
    UIButton *_maleButton;	// 104 = 0x68
    UIButton *_maleLabelButton;	// 112 = 0x70
    UIButton *_femaleButton;	// 120 = 0x78
    UIButton *_femaleLabelButton;	// 128 = 0x80
    UITapGestureRecognizer *_tap;	// 136 = 0x88
    UIView *_dateWrapper;	// 144 = 0x90
    UILabel *_dateHint;	// 152 = 0x98
    UILabel *_dateLabel;	// 160 = 0xa0
    UIPickerView *_datePicker;	// 168 = 0xa8
    UIView *_buttonBar;	// 176 = 0xb0
    UIButton *_previousButton;	// 184 = 0xb8
    UIButton *_okButton;	// 192 = 0xc0
}

@property(retain, nonatomic) UIButton *okButton; // @synthesize okButton=_okButton;
@property(retain, nonatomic) UIButton *previousButton; // @synthesize previousButton=_previousButton;
@property(retain, nonatomic) UIView *buttonBar; // @synthesize buttonBar=_buttonBar;
@property(retain, nonatomic) UIPickerView *datePicker; // @synthesize datePicker=_datePicker;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) UILabel *dateHint; // @synthesize dateHint=_dateHint;
@property(retain, nonatomic) UIView *dateWrapper; // @synthesize dateWrapper=_dateWrapper;
@property(retain, nonatomic) UITapGestureRecognizer *tap; // @synthesize tap=_tap;
@property(retain, nonatomic) UIButton *femaleLabelButton; // @synthesize femaleLabelButton=_femaleLabelButton;
@property(retain, nonatomic) UIButton *femaleButton; // @synthesize femaleButton=_femaleButton;
@property(retain, nonatomic) UIButton *maleLabelButton; // @synthesize maleLabelButton=_maleLabelButton;
@property(retain, nonatomic) UIButton *maleButton; // @synthesize maleButton=_maleButton;
@property(retain, nonatomic) UIButton *skipButton; // @synthesize skipButton=_skipButton;
@property(retain, nonatomic) UILabel *genderHint; // @synthesize genderHint=_genderHint;
@property(retain, nonatomic) UIView *genderWrapper; // @synthesize genderWrapper=_genderWrapper;
@property(retain, nonatomic) UIScrollView *wrapper; // @synthesize wrapper=_wrapper;
@property(copy, nonatomic) CDUnknownBlockType skipAction; // @synthesize skipAction=_skipAction;
- (void).cxx_destruct;	// IMP=0x0000000100228d28
- (void)didReceiveMemoryWarning;	// IMP=0x0000000100228858
- (id)pageTrackParams;	// IMP=0x000000010022868c
- (id)pageTrackName;	// IMP=0x0000000100228660
- (void)trackEventWithEvent:(id)arg1 andParams:(id)arg2;	// IMP=0x0000000100228388
- (void)aeService:(id)arg1 didSetPreference:(id)arg2 withStatus:(_Bool)arg3;	// IMP=0x000000010022818c
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;	// IMP=0x0000000100227fb4
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;	// IMP=0x0000000100227ea0
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;	// IMP=0x0000000100227e94
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;	// IMP=0x0000000100227e8c
- (long long)numberOfComponentsInPickerView:(id)arg1;	// IMP=0x0000000100227e84
- (void)skipAction:(id)arg1;	// IMP=0x0000000100227e28
- (void)genderTap:(id)arg1;	// IMP=0x0000000100227cd4
- (void)previousAction:(id)arg1;	// IMP=0x0000000100227c44
- (void)okAction:(id)arg1;	// IMP=0x0000000100227994
- (void)updateViewConstraints;	// IMP=0x000000010022522c
- (void)configButtonBar;	// IMP=0x0000000100224668
- (void)configDateWrapper;	// IMP=0x00000001002242ac
- (void)configGenderWrapper;	// IMP=0x00000001002238a4
- (void)viewDidLoad;	// IMP=0x00000001002232bc
- (void)dealloc;	// IMP=0x0000000100223248
- (id)init;	// IMP=0x00000001002231b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

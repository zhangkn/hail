//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIActionSheetDelegate.h"
#import "VSRecorderDelegate.h"

@class NSDictionary, NSMutableArray, NSString, UIButton, UIImage, UILabel, UIView, VSProgressView, VSRecorder;

@interface VSRecorderViewController : UIViewController <VSRecorderDelegate, UIActionSheetDelegate>
{
    double _minDuration;	// 8 = 0x8
    double _maxDuration;	// 16 = 0x10
    unsigned long long _bitRate;	// 24 = 0x18
    long long _languageType;	// 32 = 0x20
    double _timeLabelOffset;	// 40 = 0x28
    UIImage *_outsideFocusTargetImage;	// 48 = 0x30
    UIView *_customView;	// 56 = 0x38
    VSRecorder *_recorder;	// 64 = 0x40
    id <VSRecorderViewControllerDelegate> _delegate;	// 72 = 0x48
    VSProgressView *_recordProgress;	// 80 = 0x50
    UIImage *_insideFocusTargetImage;	// 88 = 0x58
    UIView *_preview;	// 96 = 0x60
    UIView *_closeBtn;	// 104 = 0x68
    UIView *_cameraSwitchBtn;	// 112 = 0x70
    UIButton *_recordBtn;	// 120 = 0x78
    UIButton *_removeBtn;	// 128 = 0x80
    UIButton *_completeBtn;	// 136 = 0x88
    UIView *_processBar;	// 144 = 0x90
    UILabel *_timeLabel;	// 152 = 0x98
    NSString *_timeLabelFormat;	// 160 = 0xa0
    NSMutableArray *_keyViews;	// 168 = 0xa8
    NSDictionary *_languageInfo;	// 176 = 0xb0
    UIView *_tooShortTip;	// 184 = 0xb8
    UIView *_tooLongTip;	// 192 = 0xc0
    UIImage *_coverImage;	// 200 = 0xc8
    struct CGSize _videoSize;	// 208 = 0xd0
}

@property(retain, nonatomic) UIImage *coverImage; // @synthesize coverImage=_coverImage;
@property(retain, nonatomic) UIView *tooLongTip; // @synthesize tooLongTip=_tooLongTip;
@property(retain, nonatomic) UIView *tooShortTip; // @synthesize tooShortTip=_tooShortTip;
@property(retain, nonatomic) NSDictionary *languageInfo; // @synthesize languageInfo=_languageInfo;
@property(retain, nonatomic) NSMutableArray *keyViews; // @synthesize keyViews=_keyViews;
@property(retain, nonatomic) NSString *timeLabelFormat; // @synthesize timeLabelFormat=_timeLabelFormat;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIView *processBar; // @synthesize processBar=_processBar;
@property(retain, nonatomic) UIButton *completeBtn; // @synthesize completeBtn=_completeBtn;
@property(retain, nonatomic) UIButton *removeBtn; // @synthesize removeBtn=_removeBtn;
@property(retain, nonatomic) UIButton *recordBtn; // @synthesize recordBtn=_recordBtn;
@property(retain, nonatomic) UIView *cameraSwitchBtn; // @synthesize cameraSwitchBtn=_cameraSwitchBtn;
@property(retain, nonatomic) UIView *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIView *preview; // @synthesize preview=_preview;
@property(retain, nonatomic) UIImage *insideFocusTargetImage; // @synthesize insideFocusTargetImage=_insideFocusTargetImage;
@property(retain, nonatomic) VSProgressView *recordProgress; // @synthesize recordProgress=_recordProgress;
@property(nonatomic) __weak id <VSRecorderViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) VSRecorder *recorder; // @synthesize recorder=_recorder;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(retain, nonatomic) UIImage *outsideFocusTargetImage; // @synthesize outsideFocusTargetImage=_outsideFocusTargetImage;
@property(nonatomic) double timeLabelOffset; // @synthesize timeLabelOffset=_timeLabelOffset;
@property(nonatomic) long long languageType; // @synthesize languageType=_languageType;
@property(nonatomic) unsigned long long bitRate; // @synthesize bitRate=_bitRate;
@property(nonatomic) double maxDuration; // @synthesize maxDuration=_maxDuration;
@property(nonatomic) double minDuration; // @synthesize minDuration=_minDuration;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
- (void).cxx_destruct;	// IMP=0x0000000101b0e5e4
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;	// IMP=0x0000000101b0deb4
- (void)recorder:(id)arg1 didBeginSegmentInSession:(id)arg2 error:(id)arg3;	// IMP=0x0000000101b0de74
- (void)recorder:(id)arg1 didCompleteSegment:(id)arg2 inSession:(id)arg3 error:(id)arg4;	// IMP=0x0000000101b0de08
- (void)recorder:(id)arg1 didCompleteSession:(id)arg2;	// IMP=0x0000000101b0dca4
- (void)recorder:(id)arg1 didAppendVideoSampleBufferInSession:(id)arg2;	// IMP=0x0000000101b0dc5c
- (void)closeViewControl:(id)arg1;	// IMP=0x0000000101b0db30
- (long long)fileSizeAtPath:(id)arg1;	// IMP=0x0000000101b0da78
- (void)identifyView:(id)arg1;	// IMP=0x0000000101b0d90c
- (void)updateRecordRogressWithAnimated:(_Bool)arg1;	// IMP=0x0000000101b0d728
- (void)handleCompleteBtnClick:(id)arg1;	// IMP=0x0000000101b0c8b0
- (void)handleRecordTouchUp;	// IMP=0x0000000101b0c898
- (void)handleRecordTouchDown;	// IMP=0x0000000101b0c830
- (void)handleDeleteBtnTapped:(id)arg1;	// IMP=0x0000000101b0c608
- (void)handleCloseBtnTapped;	// IMP=0x0000000101b0c388
- (id)createCustomView;	// IMP=0x0000000101b0b1e0
- (void)resetLayout;	// IMP=0x0000000101b0b0ac
- (void)viewDidLoad;	// IMP=0x0000000101b0a344
- (_Bool)prefersStatusBarHidden;	// IMP=0x0000000101b0a33c
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000101b0a2cc
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000101b0a25c
- (void)dealloc;	// IMP=0x0000000101b0a1c4
- (id)init;	// IMP=0x0000000101b0a0ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSDate, NSTimer, UIButton, UILabel;

@interface AEUGCCountDownView : UIView
{
    _Bool _subscribed;	// 8 = 0x8
    _Bool _shouldResponseTimer;	// 9 = 0x9
    _Bool _didFinishCountDownInBackgroud;	// 10 = 0xa
    CDUnknownBlockType _remindmeBtnClickBlock;	// 16 = 0x10
    CDUnknownBlockType _liveStartBlock;	// 24 = 0x18
    double _startTime;	// 32 = 0x20
    double _endTime;	// 40 = 0x28
    double _serverTime;	// 48 = 0x30
    double _deadline;	// 56 = 0x38
    UIView *_containerView;	// 64 = 0x40
    UILabel *_titleLabel;	// 72 = 0x48
    UILabel *_countDownLabel1;	// 80 = 0x50
    UIView *_countDownLabel2Container;	// 88 = 0x58
    UILabel *_hourValueLabel;	// 96 = 0x60
    UILabel *_hourLabel;	// 104 = 0x68
    UILabel *_minitueValueLabel;	// 112 = 0x70
    UILabel *_minitueLabel;	// 120 = 0x78
    UILabel *_secValueLabel;	// 128 = 0x80
    UILabel *_secLabel;	// 136 = 0x88
    UIButton *_remindmeButton;	// 144 = 0x90
    NSTimer *_timer;	// 152 = 0x98
    NSDate *_resignDate;	// 160 = 0xa0
    double _resignDeadline;	// 168 = 0xa8
    NSDate *_activeDate;	// 176 = 0xb0
}

@property(retain, nonatomic) NSDate *activeDate; // @synthesize activeDate=_activeDate;
@property(nonatomic) double resignDeadline; // @synthesize resignDeadline=_resignDeadline;
@property(retain, nonatomic) NSDate *resignDate; // @synthesize resignDate=_resignDate;
@property(nonatomic) _Bool didFinishCountDownInBackgroud; // @synthesize didFinishCountDownInBackgroud=_didFinishCountDownInBackgroud;
@property(nonatomic) __weak NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool shouldResponseTimer; // @synthesize shouldResponseTimer=_shouldResponseTimer;
@property(retain, nonatomic) UIButton *remindmeButton; // @synthesize remindmeButton=_remindmeButton;
@property(retain, nonatomic) UILabel *secLabel; // @synthesize secLabel=_secLabel;
@property(retain, nonatomic) UILabel *secValueLabel; // @synthesize secValueLabel=_secValueLabel;
@property(retain, nonatomic) UILabel *minitueLabel; // @synthesize minitueLabel=_minitueLabel;
@property(retain, nonatomic) UILabel *minitueValueLabel; // @synthesize minitueValueLabel=_minitueValueLabel;
@property(retain, nonatomic) UILabel *hourLabel; // @synthesize hourLabel=_hourLabel;
@property(retain, nonatomic) UILabel *hourValueLabel; // @synthesize hourValueLabel=_hourValueLabel;
@property(retain, nonatomic) UIView *countDownLabel2Container; // @synthesize countDownLabel2Container=_countDownLabel2Container;
@property(retain, nonatomic) UILabel *countDownLabel1; // @synthesize countDownLabel1=_countDownLabel1;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) double deadline; // @synthesize deadline=_deadline;
@property(nonatomic) double serverTime; // @synthesize serverTime=_serverTime;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool subscribed; // @synthesize subscribed=_subscribed;
@property(copy, nonatomic) CDUnknownBlockType liveStartBlock; // @synthesize liveStartBlock=_liveStartBlock;
@property(copy, nonatomic) CDUnknownBlockType remindmeBtnClickBlock; // @synthesize remindmeBtnClickBlock=_remindmeBtnClickBlock;
- (void).cxx_destruct;	// IMP=0x0000000100f4f8c4
- (void)handleResignActive:(id)arg1;	// IMP=0x0000000100f4e868
- (void)handleBecomeActive:(id)arg1;	// IMP=0x0000000100f4e67c
- (void)dealloc;	// IMP=0x0000000100f4e600
- (void)invalidateTimer;	// IMP=0x0000000100f4e594
- (void)remindMeBtnClicked:(id)arg1;	// IMP=0x0000000100f4e4e0
- (void)updateReminder:(double)arg1;	// IMP=0x0000000100f4dcd8
- (void)timerFired;	// IMP=0x0000000100f4db74
- (_Bool)shouldShowCountDown;	// IMP=0x0000000100f4db5c
- (void)setupConstraint;	// IMP=0x0000000100f4c4dc
- (void)updateCountDownViewStartTime:(double)arg1 endTime:(double)arg2 serverTime:(double)arg3 liveRoomName:(id)arg4;	// IMP=0x0000000100f4c010
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100f4bb80

@end


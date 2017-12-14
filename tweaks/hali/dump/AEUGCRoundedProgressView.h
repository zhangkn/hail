//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface AEUGCRoundedProgressView : UIView
{
    double _startDegree;	// 8 = 0x8
    double _endDegree;	// 16 = 0x10
    double _progress;	// 24 = 0x18
    double _progressWidth;	// 32 = 0x20
    UIColor *_trackColor;	// 40 = 0x28
    UIColor *_progressColor;	// 48 = 0x30
}

@property(copy, nonatomic) UIColor *progressColor; // @synthesize progressColor=_progressColor;
@property(retain, nonatomic) UIColor *trackColor; // @synthesize trackColor=_trackColor;
@property(nonatomic) double progressWidth; // @synthesize progressWidth=_progressWidth;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;	// IMP=0x00000001007b95dc
- (struct CGRect)rectForCircle:(struct CGRect)arg1;	// IMP=0x00000001007b9480
- (void)drawProgressCircleInRect:(struct CGRect)arg1;	// IMP=0x00000001007b9260
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00000001007b9140
- (void)rotate;	// IMP=0x00000001007b9000
- (void)commonInit;	// IMP=0x00000001007b8f50
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001007b8ef8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001007b8ea0

@end

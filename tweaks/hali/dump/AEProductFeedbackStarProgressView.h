//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AERatingView, UILabel, UIProgressView;

@interface AEProductFeedbackStarProgressView : UIView
{
    long long _starCount;	// 8 = 0x8
    double _progress;	// 16 = 0x10
    long long _ratingCount;	// 24 = 0x18
    AERatingView *_starsView;	// 32 = 0x20
    UIProgressView *_progressView;	// 40 = 0x28
    UILabel *_ratingCountLabel;	// 48 = 0x30
}

@property(retain, nonatomic) UILabel *ratingCountLabel; // @synthesize ratingCountLabel=_ratingCountLabel;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) AERatingView *starsView; // @synthesize starsView=_starsView;
@property(nonatomic) long long ratingCount; // @synthesize ratingCount=_ratingCount;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) long long starCount; // @synthesize starCount=_starCount;
- (void).cxx_destruct;	// IMP=0x00000001005dc14c
- (void)configUIComponents;	// IMP=0x00000001005db338
- (void)bindStarCount:(long long)arg1 progress:(double)arg2 ratingCount:(long long)arg3;	// IMP=0x00000001005db2dc
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001005db284

@end


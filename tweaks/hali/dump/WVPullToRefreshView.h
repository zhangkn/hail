//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UIColor, UIImageView, UILabel, UIScrollView, WVActivityIndicatorView;

@interface WVPullToRefreshView : UIView
{
    _Bool _wasTriggeredByUser;	// 8 = 0x8
    _Bool _isObserving;	// 9 = 0x9
    UIColor *_textColor;	// 16 = 0x10
    unsigned long long _state;	// 24 = 0x18
    CDUnknownBlockType _actionHandler;	// 32 = 0x20
    UIScrollView *_scrollView;	// 40 = 0x28
    WVActivityIndicatorView *_activityIndicatorView;	// 48 = 0x30
    UILabel *_titleLabel;	// 56 = 0x38
    UILabel *_subtitleLabel;	// 64 = 0x40
    UILabel *_bottomLabel;	// 72 = 0x48
    UIImageView *_arrow;	// 80 = 0x50
    NSMutableArray *_titles;	// 88 = 0x58
    NSMutableArray *_subtitles;	// 96 = 0x60
    NSMutableArray *_viewForState;	// 104 = 0x68
    double _originalTopInset;	// 112 = 0x70
    double _maxLabelWidth;	// 120 = 0x78
}

@property(nonatomic) double maxLabelWidth; // @synthesize maxLabelWidth=_maxLabelWidth;
@property(nonatomic) _Bool isObserving; // @synthesize isObserving=_isObserving;
@property(nonatomic) _Bool wasTriggeredByUser; // @synthesize wasTriggeredByUser=_wasTriggeredByUser;
@property(nonatomic) double originalTopInset; // @synthesize originalTopInset=_originalTopInset;
@property(retain, nonatomic) NSMutableArray *viewForState; // @synthesize viewForState=_viewForState;
@property(retain, nonatomic) NSMutableArray *subtitles; // @synthesize subtitles=_subtitles;
@property(retain, nonatomic) NSMutableArray *titles; // @synthesize titles=_titles;
@property(retain, nonatomic) UIImageView *arrow; // @synthesize arrow=_arrow;
@property(retain, nonatomic) UILabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WVActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
- (void).cxx_destruct;	// IMP=0x0000000101b35ea8
- (void)rotateArrow:(float)arg1 hide:(_Bool)arg2;	// IMP=0x0000000101b35a30
- (void)stopAnimating;	// IMP=0x0000000101b35874
- (void)startAnimating;	// IMP=0x0000000101b35774
- (void)scrollViewDidScroll:(struct CGPoint)arg1;	// IMP=0x0000000101b35504
- (void)setScrollViewContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x0000000101b353f4
- (void)setScrollViewContentInsetForLoading;	// IMP=0x0000000101b35314
- (void)resetScrollViewContentInset;	// IMP=0x0000000101b35290
- (_Bool)isArrowValid;	// IMP=0x0000000101b3523c
- (struct CGSize)measureLabelSize:(id)arg1 maxWidth:(double)arg2;	// IMP=0x0000000101b3505c
- (void)layoutSubviews;	// IMP=0x0000000101b347c0
- (void)resize;	// IMP=0x0000000101b3475c
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000101b345a0
- (void)willMoveToSuperview:(id)arg1;	// IMP=0x0000000101b34504
- (void)removeObserving:(id)arg1;	// IMP=0x0000000101b3445c
- (void)hide;	// IMP=0x0000000101b343d8
- (void)show;	// IMP=0x0000000101b342c0
- (void)setCustomView:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000101b341bc
- (void)setSubtitle:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000101b340c8
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000101b33fd4
@property(nonatomic) long long activityIndicatorViewStyle;
- (id)initWithScrollView:(id)arg1 withActionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000101b3342c

@end

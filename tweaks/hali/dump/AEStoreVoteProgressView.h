//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UILabel, UIProgressView;

@interface AEStoreVoteProgressView : UIView
{
    UILabel *_titleLabel;	// 8 = 0x8
    UIProgressView *_progressView;	// 16 = 0x10
    NSMutableArray *_couponsViews;	// 24 = 0x18
    NSMutableArray *_progressDotViews;	// 32 = 0x20
}

@property(retain, nonatomic) NSMutableArray *progressDotViews; // @synthesize progressDotViews=_progressDotViews;
@property(retain, nonatomic) NSMutableArray *couponsViews; // @synthesize couponsViews=_couponsViews;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;	// IMP=0x0000000100d39210
- (void)bindProgressInnerView:(id)arg1;	// IMP=0x0000000100d38bd8
- (void)setupConstraints;	// IMP=0x0000000100d380e4
- (void)setupDotsView;	// IMP=0x0000000100d37f28
- (void)setupVoteCouponView;	// IMP=0x0000000100d37e18
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100d37b10

@end

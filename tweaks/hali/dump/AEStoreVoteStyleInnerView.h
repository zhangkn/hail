//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface AEStoreVoteStyleInnerView : UIView
{
    UIImageView *_iconImageView;	// 8 = 0x8
    UILabel *_trendingLabel;	// 16 = 0x10
}

@property(retain, nonatomic) UILabel *trendingLabel; // @synthesize trendingLabel=_trendingLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;	// IMP=0x0000000100d6eecc
- (void)setupConstraints;	// IMP=0x0000000100d6e790
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100d6e57c

@end


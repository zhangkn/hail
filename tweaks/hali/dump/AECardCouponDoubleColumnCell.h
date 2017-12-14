//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class AEDoubleColumnLabel, UIImageView, UIView;

@interface AECardCouponDoubleColumnCell : UITableViewCell
{
    UIView *lineViewTop;	// 8 = 0x8
    UIView *lineViewBottom;	// 16 = 0x10
    UIImageView *arrowImageView;	// 24 = 0x18
    double separatorLeftMargin;	// 32 = 0x20
    double separatorRightMargin;	// 40 = 0x28
    AEDoubleColumnLabel *_contentLabel;	// 48 = 0x30
    long long _style;	// 56 = 0x38
}

@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) AEDoubleColumnLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
- (void).cxx_destruct;	// IMP=0x000000010002cb90
- (double)measureCellHeightWithLimitedWith:(double)arg1;	// IMP=0x000000010002cabc
- (void)layoutSubviews;	// IMP=0x000000010002c840
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000010002c518

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface AEUGCProfilePersonImageTextTableViewCell : UITableViewCell
{
    UILabel *_titleLabel;	// 8 = 0x8
    UIImageView *_imageViewTitle;	// 16 = 0x10
    UILabel *_contentLabel;	// 24 = 0x18
    UIView *_viewLine;	// 32 = 0x20
}

@property(retain, nonatomic) UIView *viewLine; // @synthesize viewLine=_viewLine;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIImageView *imageViewTitle; // @synthesize imageViewTitle=_imageViewTitle;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;	// IMP=0x0000000100e9465c
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100e941c4
- (void)awakeFromNib;	// IMP=0x0000000100e94190
- (void)setImageViewWidth:(double)arg1 Height:(double)arg2;	// IMP=0x0000000100e93f38
- (void)configConstraints;	// IMP=0x0000000100e92ad8
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000100e928b0

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class AEBadge, UIImageView, UILabel, UIView;

@interface AENotificationListTableViewCell : UITableViewCell
{
    UIView *line;	// 8 = 0x8
    AEBadge *badge;	// 16 = 0x10
    UIImageView *_typeImageView;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    UILabel *_summaryLabel;	// 40 = 0x28
    UILabel *_timeLabel;	// 48 = 0x30
}

@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *summaryLabel; // @synthesize summaryLabel=_summaryLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *typeImageView; // @synthesize typeImageView=_typeImageView;
- (void).cxx_destruct;	// IMP=0x00000001001c6f04
- (void)bindData:(id)arg1;	// IMP=0x00000001001c6a0c
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000001001c4e74

@end


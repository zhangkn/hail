//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface AEUGCReportOthersViewCell : UITableViewCell
{
    _Bool _didSetupConstraints;	// 8 = 0x8
    UIImageView *_accessoryImageView;	// 16 = 0x10
    UILabel *_mainTextLabel;	// 24 = 0x18
    UIView *_lineView;	// 32 = 0x20
}

@property(nonatomic) _Bool didSetupConstraints; // @synthesize didSetupConstraints=_didSetupConstraints;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *mainTextLabel; // @synthesize mainTextLabel=_mainTextLabel;
@property(retain, nonatomic) UIImageView *accessoryImageView; // @synthesize accessoryImageView=_accessoryImageView;
- (void).cxx_destruct;	// IMP=0x0000000100e318ac
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100e31560
- (void)updateConstraints;	// IMP=0x0000000100e31354
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000100e311f0
- (void)awakeFromNib;	// IMP=0x0000000100e311bc

@end


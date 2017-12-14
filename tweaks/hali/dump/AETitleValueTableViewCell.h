//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class MASConstraint, UIImageView, UILabel, UIView;

@interface AETitleValueTableViewCell : UITableViewCell
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_valueLabel;	// 16 = 0x10
    UIView *_redPointView;	// 24 = 0x18
    UIImageView *_indicatorImageView;	// 32 = 0x20
    MASConstraint *_titleLabelLeadingConstraint;	// 40 = 0x28
    MASConstraint *_indicatorImgTrailingConstraint;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100884a7c
- (void)bindTitle:(id)arg1 value:(id)arg2 showIndicator:(_Bool)arg3 showRedPoint:(_Bool)arg4 margin:(struct UIEdgeInsets)arg5;	// IMP=0x000000010088497c
- (void)bindTitle:(id)arg1 value:(id)arg2 showIndicator:(_Bool)arg3 margin:(struct UIEdgeInsets)arg4;	// IMP=0x00000001008848f0
- (void)bindTitle:(id)arg1 value:(id)arg2 margin:(struct UIEdgeInsets)arg3;	// IMP=0x000000010088486c
- (void)bindTitle:(id)arg1 margin:(struct UIEdgeInsets)arg2;	// IMP=0x000000010088485c
- (void)bindTitle:(id)arg1 value:(id)arg2 showIndicator:(_Bool)arg3 showRedPoint:(_Bool)arg4;	// IMP=0x0000000100883f04
- (void)bindTitle:(id)arg1 value:(id)arg2 showIndicator:(_Bool)arg3;	// IMP=0x0000000100883ea8
- (void)bindTitle:(id)arg1 value:(id)arg2;	// IMP=0x0000000100883e54
- (void)bindTitle:(id)arg1;	// IMP=0x0000000100883e44
- (void)setAppearance:(id)arg1;	// IMP=0x0000000100883cdc
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000100882eb8

@end

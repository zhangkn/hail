//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class AEMyAccountAllOrderCellVM, UIImageView, UILabel;

@interface AEMyAccountAllOrderCell : UITableViewCell
{
    AEMyAccountAllOrderCellVM *_vm;	// 8 = 0x8
    UILabel *_leftTitle;	// 16 = 0x10
    UILabel *_rightTitle;	// 24 = 0x18
    UIImageView *_leftImageView;	// 32 = 0x20
}

@property(retain, nonatomic) UIImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
@property(retain, nonatomic) UILabel *rightTitle; // @synthesize rightTitle=_rightTitle;
@property(retain, nonatomic) UILabel *leftTitle; // @synthesize leftTitle=_leftTitle;
@property(retain, nonatomic) AEMyAccountAllOrderCellVM *vm; // @synthesize vm=_vm;
- (void).cxx_destruct;	// IMP=0x000000010015e618
- (void)bindVM:(id)arg1;	// IMP=0x000000010015deb0
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000010015de7c
- (void)awakeFromNib;	// IMP=0x000000010015de48
- (void)setupUI;	// IMP=0x000000010015cee8
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000010015ce90

@end

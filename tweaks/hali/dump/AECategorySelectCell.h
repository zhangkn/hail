//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UILabel, UIView;

@interface AECategorySelectCell : UITableViewCell
{
    UILabel *_titleLabel;	// 8 = 0x8
    UIView *_seperateLine;	// 16 = 0x10
}

+ (double)heightWithModel:(id)arg1 displayWidth:(double)arg2;	// IMP=0x0000000100bc66f4
@property(retain, nonatomic) UIView *seperateLine; // @synthesize seperateLine=_seperateLine;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;	// IMP=0x0000000100bc761c
- (void)bindDataWithModel:(id)arg1;	// IMP=0x0000000100bc6ec8
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000100bc6700

@end


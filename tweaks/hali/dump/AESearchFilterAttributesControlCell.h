//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel;

@interface AESearchFilterAttributesControlCell : UITableViewCell
{
    UILabel *_titleLabel;	// 8 = 0x8
    UIImageView *_rightImageView;	// 16 = 0x10
}

+ (double)heightWithViewModel:(id)arg1 displayWidth:(double)arg2;	// IMP=0x0000000100cc8a48
@property(retain, nonatomic) UIImageView *rightImageView; // @synthesize rightImageView=_rightImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;	// IMP=0x0000000100cc9ad8
- (void)bindDataWithViewModel:(id)arg1;	// IMP=0x0000000100cc978c
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000100cc8a54

@end


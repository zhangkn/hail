//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UILabel;

@interface AERefundAmountCell : UITableViewCell
{
    UILabel *_amountTitle;	// 8 = 0x8
    UILabel *_amount;	// 16 = 0x10
}

+ (double)cellHeight;	// IMP=0x000000010025b828
@property(retain, nonatomic) UILabel *amount; // @synthesize amount=_amount;
@property(retain, nonatomic) UILabel *amountTitle; // @synthesize amountTitle=_amountTitle;
- (void).cxx_destruct;	// IMP=0x000000010025ba8c
- (void)bindData:(id)arg1 amount:(id)arg2;	// IMP=0x000000010025b768
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000010025add8
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000010025ada4
- (void)awakeFromNib;	// IMP=0x000000010025ad70

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class AEMailingAddressSectionTitleCellModel, UIImageView, UILabel;

@interface AEMailingAddressSectionTitleCell : UITableViewCell
{
    AEMailingAddressSectionTitleCellModel *_viewModel;	// 8 = 0x8
    UILabel *_sectionTitleLabel;	// 16 = 0x10
    UILabel *_subTitleLabel;	// 24 = 0x18
    UIImageView *_tipsImageView;	// 32 = 0x20
}

@property(retain, nonatomic) UIImageView *tipsImageView; // @synthesize tipsImageView=_tipsImageView;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *sectionTitleLabel; // @synthesize sectionTitleLabel=_sectionTitleLabel;
@property(retain, nonatomic) AEMailingAddressSectionTitleCellModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;	// IMP=0x0000000100831aa4
- (void)showTips:(id)arg1;	// IMP=0x00000001008315d4
- (void)prepareForReuse;	// IMP=0x0000000100830868
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000100830748
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000010082fb58

@end

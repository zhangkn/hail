//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIButton;

@interface AEClearCategoryViewedHistoryCell : UITableViewCell
{
    id <AEClearCategoryViewedHistoryCellDelegate> _delegate;	// 8 = 0x8
    UIButton *_clearButton;	// 16 = 0x10
}

@property(retain, nonatomic) UIButton *clearButton; // @synthesize clearButton=_clearButton;
@property(nonatomic) __weak id <AEClearCategoryViewedHistoryCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100ca085c
- (void)clearButtonClicked:(id)arg1;	// IMP=0x0000000100ca0708
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000100ca00e8

@end


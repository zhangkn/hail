//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class AEAddressAutoCompleteCellModel, AEAddressAutoCompleteItemView;

@interface AEAddressAutoCompleteCell : UITableViewCell
{
    AEAddressAutoCompleteCellModel *_model;	// 8 = 0x8
    AEAddressAutoCompleteItemView *_itemView;	// 16 = 0x10
}

@property(retain, nonatomic) AEAddressAutoCompleteItemView *itemView; // @synthesize itemView=_itemView;
@property(retain, nonatomic) AEAddressAutoCompleteCellModel *model; // @synthesize model=_model;
- (void).cxx_destruct;	// IMP=0x000000010045bfac
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000010045bc54

@end


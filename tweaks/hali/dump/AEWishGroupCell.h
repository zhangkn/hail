//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIButton, UIImageView, UILabel, UIView;

@interface AEWishGroupCell : UITableViewCell
{
    UIButton *_moreAction;	// 8 = 0x8
    UIImageView *_permissionImageView;	// 16 = 0x10
    UILabel *_groupNameLabel;	// 24 = 0x18
    UIImageView *_checkedImageView;	// 32 = 0x20
    UIView *_splitView;	// 40 = 0x28
    UIImageView *_moreActionImageView;	// 48 = 0x30
}

@property(retain, nonatomic) UIImageView *moreActionImageView; // @synthesize moreActionImageView=_moreActionImageView;
@property(retain, nonatomic) UIView *splitView; // @synthesize splitView=_splitView;
@property(retain, nonatomic) UIImageView *checkedImageView; // @synthesize checkedImageView=_checkedImageView;
@property(retain, nonatomic) UILabel *groupNameLabel; // @synthesize groupNameLabel=_groupNameLabel;
@property(retain, nonatomic) UIImageView *permissionImageView; // @synthesize permissionImageView=_permissionImageView;
@property(readonly, nonatomic) UIButton *moreAction; // @synthesize moreAction=_moreAction;
- (void).cxx_destruct;	// IMP=0x0000000100c8ddb4
- (void)bind:(id)arg1 checked:(_Bool)arg2;	// IMP=0x0000000100c8db18
- (void)bind:(id)arg1;	// IMP=0x0000000100c8db08
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000100c8d564
- (void)private_layoutSplitView;	// IMP=0x0000000100c8d164
- (void)private_layoutCheckedImageView;	// IMP=0x0000000100c8cddc
- (void)private_layoutGroupNameLabel;	// IMP=0x0000000100c8c9a4
- (void)private_layoutMoreAction;	// IMP=0x0000000100c8c2d8
- (void)private_layoutPermissionImageView;	// IMP=0x0000000100c8bf50

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class AEModuleRecomTitleView, AEModuleTreeReCommedView, NSArray;

@interface AEModuleTreeRecomPlantCell : UITableViewCell
{
    NSArray *_arrayUsers;	// 8 = 0x8
    AEModuleRecomTitleView *_titleView;	// 16 = 0x10
    AEModuleTreeReCommedView *_recommendView;	// 24 = 0x18
}

@property(retain, nonatomic) AEModuleTreeReCommedView *recommendView; // @synthesize recommendView=_recommendView;
@property(retain, nonatomic) AEModuleRecomTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) NSArray *arrayUsers; // @synthesize arrayUsers=_arrayUsers;
- (void).cxx_destruct;	// IMP=0x0000000100b48564
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100b483f0
- (void)awakeFromNib;	// IMP=0x0000000100b483bc
- (void)initView;	// IMP=0x0000000100b47cb0
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000100b47c58

@end


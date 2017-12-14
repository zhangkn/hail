//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "AESearchPanelCellProtocol.h"

@class NSString, UIButton, UILabel;

@interface AESearchPanelHeaderCell : UITableViewCell <AESearchPanelCellProtocol>
{
    CDUnknownBlockType eventCallBlock;	// 8 = 0x8
    UILabel *_titleLable;	// 16 = 0x10
    UIButton *_clearBtn;	// 24 = 0x18
}

@property(retain, nonatomic) UIButton *clearBtn; // @synthesize clearBtn=_clearBtn;
@property(retain, nonatomic) UILabel *titleLable; // @synthesize titleLable=_titleLable;
@property(copy, nonatomic) CDUnknownBlockType eventCallBlock; // @synthesize eventCallBlock;
- (void).cxx_destruct;	// IMP=0x0000000100cdd8b4
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100cdd550
- (void)awakeFromNib;	// IMP=0x0000000100cdd51c
- (void)doClearBtn:(id)arg1;	// IMP=0x0000000100cdd18c
- (void)eventCallBack:(CDUnknownBlockType)arg1;	// IMP=0x0000000100cdd180
- (void)p_layout;	// IMP=0x0000000100cdc81c
- (void)bindData:(id)arg1;	// IMP=0x0000000100cdc730
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000100cdc6d8

// Remaining properties
@property(nonatomic) _Bool canEdit;
@property(retain, nonatomic) Class clz;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id model;
@property(readonly) Class superclass;

@end


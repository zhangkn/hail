//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "AESearchPanelCellProtocol.h"

@class NSString;

@interface AESearchPanelAllCategoryCell : UITableViewCell <AESearchPanelCellProtocol>
{
}

- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100c01bd0
- (void)awakeFromNib;	// IMP=0x0000000100c01b9c
- (void)p_layout;	// IMP=0x0000000100c008c8
- (void)bindData:(id)arg1;	// IMP=0x0000000100c008c4
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000100c0086c

// Remaining properties
@property(nonatomic) _Bool canEdit;
@property(retain, nonatomic) Class clz;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) CDUnknownBlockType eventCallBlock;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id model;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "AETableViewCellProtocol.h"

@class NSString, UILabel;

@interface AEMemberPrivilegesHeaderCell : UITableViewCell <AETableViewCellProtocol>
{
    UILabel *_privilegesHeaderLabel;	// 8 = 0x8
}

@property(retain, nonatomic) UILabel *privilegesHeaderLabel; // @synthesize privilegesHeaderLabel=_privilegesHeaderLabel;
- (void).cxx_destruct;	// IMP=0x0000000100155b5c
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000001001559d8
- (void)awakeFromNib;	// IMP=0x00000001001559a4
- (void)bindData:(id)arg1;	// IMP=0x0000000100155938
- (void)p_setupUI;	// IMP=0x0000000100155408
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000001001553b0

// Remaining properties
@property(copy, nonatomic) NSString *action;
@property(nonatomic) _Bool canEdit;
@property(retain, nonatomic) Class clz;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) CDUnknownBlockType eventCallBlock;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id model;
@property(readonly) Class superclass;

@end

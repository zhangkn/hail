//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "AETableViewCellProtocol.h"

@class AEMemberRecommandProductItem, NSString;

@interface AEMemberRecommandProductCell : UITableViewCell <AETableViewCellProtocol>
{
    AEMemberRecommandProductItem *_leftItem;	// 8 = 0x8
    AEMemberRecommandProductItem *_rightItem;	// 16 = 0x10
}

@property(retain, nonatomic) AEMemberRecommandProductItem *rightItem; // @synthesize rightItem=_rightItem;
@property(retain, nonatomic) AEMemberRecommandProductItem *leftItem; // @synthesize leftItem=_leftItem;
- (void).cxx_destruct;	// IMP=0x0000000100157df4
- (void)bindData:(id)arg1;	// IMP=0x0000000100157b8c
- (void)p_setupUI;	// IMP=0x000000010015734c
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000001001572f4

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


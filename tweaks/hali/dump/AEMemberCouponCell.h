//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "AETableViewCellProtocol.h"

@class NSString, UIImageView, UILabel;

@interface AEMemberCouponCell : UITableViewCell <AETableViewCellProtocol>
{
    UIImageView *_bgImageView;	// 8 = 0x8
    UILabel *_contentLabel;	// 16 = 0x10
}

@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
- (void).cxx_destruct;	// IMP=0x0000000100149224
- (void)bindData:(id)arg1;	// IMP=0x0000000100148fbc
- (void)p_setupUI;	// IMP=0x00000001001483c8
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000100148370

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


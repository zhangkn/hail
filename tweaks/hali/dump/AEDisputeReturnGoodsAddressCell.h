//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "AEDisputeTableViewCellProtocol.h"

@class AEDisputeReturnGoodAddressView, NSString, UIButton, UILabel;

@interface AEDisputeReturnGoodsAddressCell : UITableViewCell <AEDisputeTableViewCellProtocol>
{
    AEDisputeReturnGoodAddressView *_returnGoodAddressView;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UIButton *_saveAsPhoto;	// 24 = 0x18
    CDUnknownBlockType _block;	// 32 = 0x20
}

@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) UIButton *saveAsPhoto; // @synthesize saveAsPhoto=_saveAsPhoto;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) AEDisputeReturnGoodAddressView *returnGoodAddressView; // @synthesize returnGoodAddressView=_returnGoodAddressView;
- (void).cxx_destruct;	// IMP=0x00000001000a5534
- (void)doSaveAsPhoto:(id)arg1;	// IMP=0x00000001000a4fe0
- (void)handlerSaveReturnAddressWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000a4fd4
- (double)getButtonWidthWord:(id)arg1;	// IMP=0x00000001000a4e64
- (void)bindData:(id)arg1;	// IMP=0x00000001000a4d2c
- (void)privateLayoutSaveAsPhoto;	// IMP=0x00000001000a489c
- (void)privateLayoutAddress;	// IMP=0x00000001000a44b0
- (void)privateLayoutTitle;	// IMP=0x00000001000a3c3c
- (void)privateLayoutSubViews;	// IMP=0x00000001000a3bf8
- (void)addSubViews;	// IMP=0x00000001000a3ac8
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000001000a39ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


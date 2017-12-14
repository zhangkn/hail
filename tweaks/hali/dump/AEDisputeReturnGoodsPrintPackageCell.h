//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "AEDisputeTableViewCellProtocol.h"

@class AEDisputeReturnGoodsPrintPackageView, NSString, UIButton, UILabel;

@interface AEDisputeReturnGoodsPrintPackageCell : UITableViewCell <AEDisputeTableViewCellProtocol>
{
    UILabel *_titleLabel;	// 8 = 0x8
    CDUnknownBlockType _block;	// 16 = 0x10
    AEDisputeReturnGoodsPrintPackageView *_disputeReturnGoodsPrintPackageView;	// 24 = 0x18
    UIButton *_saveAsPhoto;	// 32 = 0x20
}

@property(retain, nonatomic) UIButton *saveAsPhoto; // @synthesize saveAsPhoto=_saveAsPhoto;
@property(retain, nonatomic) AEDisputeReturnGoodsPrintPackageView *disputeReturnGoodsPrintPackageView; // @synthesize disputeReturnGoodsPrintPackageView=_disputeReturnGoodsPrintPackageView;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;	// IMP=0x00000001000a7950
- (double)getButtonWidthWord:(id)arg1;	// IMP=0x00000001000a771c
- (void)doSaveAsPhoto:(id)arg1;	// IMP=0x00000001000a71f4
- (void)handlerSaveAsPhotoWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000a71e8
- (void)privateLayoutTitle;	// IMP=0x00000001000a6d04
- (void)privateLayoutSaveAsPhoto;	// IMP=0x00000001000a67f0
- (void)privateLayoutDisputePrintPackageView;	// IMP=0x00000001000a5f60
- (void)privateLayoutSubviews;	// IMP=0x00000001000a5f1c
- (void)addSubViews;	// IMP=0x00000001000a5dec
- (void)bindData:(id)arg1;	// IMP=0x00000001000a5d80
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000001000a5ca4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

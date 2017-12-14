//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AEStoreVoteSelectCouponInnerView, AEStoreVoteShareSucessDTO, UIButton, UILabel;

@interface AEStoreVoteShareSucessView : UIView
{
    UIView *_containerView;	// 8 = 0x8
    AEStoreVoteSelectCouponInnerView *_innerCouponView;	// 16 = 0x10
    UILabel *_voteSuccessLabel;	// 24 = 0x18
    UILabel *_voteDesLabel;	// 32 = 0x20
    UIButton *_checkCoupons;	// 40 = 0x28
    UIButton *_visitStore;	// 48 = 0x30
    AEStoreVoteShareSucessDTO *_dto;	// 56 = 0x38
    UIView *_hLine1;	// 64 = 0x40
    UIView *_hLine2;	// 72 = 0x48
}

@property(retain, nonatomic) UIView *hLine2; // @synthesize hLine2=_hLine2;
@property(retain, nonatomic) UIView *hLine1; // @synthesize hLine1=_hLine1;
@property(retain, nonatomic) AEStoreVoteShareSucessDTO *dto; // @synthesize dto=_dto;
@property(retain, nonatomic) UIButton *visitStore; // @synthesize visitStore=_visitStore;
@property(retain, nonatomic) UIButton *checkCoupons; // @synthesize checkCoupons=_checkCoupons;
@property(retain, nonatomic) UILabel *voteDesLabel; // @synthesize voteDesLabel=_voteDesLabel;
@property(retain, nonatomic) UILabel *voteSuccessLabel; // @synthesize voteSuccessLabel=_voteSuccessLabel;
@property(retain, nonatomic) AEStoreVoteSelectCouponInnerView *innerCouponView; // @synthesize innerCouponView=_innerCouponView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;	// IMP=0x0000000100cf9830
- (void)checkCouponsAction:(id)arg1;	// IMP=0x0000000100cf9674
- (void)closeAction:(id)arg1;	// IMP=0x0000000100cf957c
- (void)dismiss;	// IMP=0x0000000100cf9570
- (id)dateLocale:(id)arg1;	// IMP=0x0000000100cf9428
- (void)bindData;	// IMP=0x0000000100cf8c58
- (void)setupConstraints;	// IMP=0x0000000100cf6d68
- (void)buildUI;	// IMP=0x0000000100cf6a28
- (void)show;	// IMP=0x0000000100cf687c
- (id)initWithDTO:(id)arg1;	// IMP=0x0000000100cf6020

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AECoinTaskDTO, UIButton, UIImageView, UILabel, UIScrollView;

@interface AECouponCommonToastView : UIView
{
    AECoinTaskDTO *_dto;	// 8 = 0x8
    UIView *_containerView;	// 16 = 0x10
    UIView *_contentView;	// 24 = 0x18
    UIImageView *_headImageView;	// 32 = 0x20
    UIButton *_viewDetailButton;	// 40 = 0x28
    UIButton *_closeButton;	// 48 = 0x30
    UILabel *_titleLabel;	// 56 = 0x38
    UIScrollView *_couponsScrollView;	// 64 = 0x40
    UIView *_hLine;	// 72 = 0x48
    UIView *_vLine;	// 80 = 0x50
}

@property(retain, nonatomic) UIView *vLine; // @synthesize vLine=_vLine;
@property(retain, nonatomic) UIView *hLine; // @synthesize hLine=_hLine;
@property(retain, nonatomic) UIScrollView *couponsScrollView; // @synthesize couponsScrollView=_couponsScrollView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIButton *viewDetailButton; // @synthesize viewDetailButton=_viewDetailButton;
@property(retain, nonatomic) UIImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) AECoinTaskDTO *dto; // @synthesize dto=_dto;
- (void).cxx_destruct;	// IMP=0x000000010080aecc
- (void)buildCouponsView;	// IMP=0x0000000100809f48
- (void)buildContentUI;	// IMP=0x00000001008098e8
- (void)buildUI;	// IMP=0x0000000100807f38
- (void)viewDetailAction:(id)arg1;	// IMP=0x0000000100807e40
- (void)closeAction:(id)arg1;	// IMP=0x0000000100807e34
- (void)dismiss;	// IMP=0x0000000100807e28
- (void)show;	// IMP=0x0000000100807c7c
- (id)initWithCoinTaskDTO:(id)arg1;	// IMP=0x000000010080741c

@end


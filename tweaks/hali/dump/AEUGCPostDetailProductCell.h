//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class AERatingView, AEUGCPostDetailProduct, NSLayoutConstraint, UIButton, UIImageView, UILabel, UIView;

@interface AEUGCPostDetailProductCell : UITableViewCell
{
    _Bool _didSetupConstraints;	// 8 = 0x8
    UIView *_bgview;	// 16 = 0x10
    UIView *_topLine;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    UIView *_linkContainerView;	// 40 = 0x28
    UIImageView *_headImgview;	// 48 = 0x30
    UILabel *_priceLabel;	// 56 = 0x38
    AERatingView *_ratingView;	// 64 = 0x40
    UILabel *_orderLabel;	// 72 = 0x48
    AEUGCPostDetailProduct *_product;	// 80 = 0x50
    UILabel *_orignalPriceLabel;	// 88 = 0x58
    UIButton *_purchasedMarkView;	// 96 = 0x60
    NSLayoutConstraint *_markViewHeightConstraint;	// 104 = 0x68
    UILabel *_statusLabel;	// 112 = 0x70
}

@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) NSLayoutConstraint *markViewHeightConstraint; // @synthesize markViewHeightConstraint=_markViewHeightConstraint;
@property(retain, nonatomic) UIButton *purchasedMarkView; // @synthesize purchasedMarkView=_purchasedMarkView;
@property(retain, nonatomic) UILabel *orignalPriceLabel; // @synthesize orignalPriceLabel=_orignalPriceLabel;
@property(retain, nonatomic) AEUGCPostDetailProduct *product; // @synthesize product=_product;
@property(retain, nonatomic) UILabel *orderLabel; // @synthesize orderLabel=_orderLabel;
@property(retain, nonatomic) AERatingView *ratingView; // @synthesize ratingView=_ratingView;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UIImageView *headImgview; // @synthesize headImgview=_headImgview;
@property(retain, nonatomic) UIView *linkContainerView; // @synthesize linkContainerView=_linkContainerView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UIView *bgview; // @synthesize bgview=_bgview;
@property(nonatomic) _Bool didSetupConstraints; // @synthesize didSetupConstraints=_didSetupConstraints;
- (void).cxx_destruct;	// IMP=0x00000001006eeb38
- (void)configConstraints;	// IMP=0x00000001006ed294
- (void)bindData:(id)arg1;	// IMP=0x00000001006ecc5c
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000001006ec794

@end

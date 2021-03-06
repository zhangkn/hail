//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class AEModuleTreeRankingListDTO, UIButton, UIImage, UIImageView, UILabel, UIView;

@interface AEModuleRankListCell : UITableViewCell
{
    _Bool _isChangeBgColor;	// 8 = 0x8
    AEModuleTreeRankingListDTO *_model;	// 16 = 0x10
    UIView *_viewCellBg;	// 24 = 0x18
    UIImageView *_imageViewTitle;	// 32 = 0x20
    UILabel *_labelRankNum;	// 40 = 0x28
    UILabel *_labelName;	// 48 = 0x30
    UILabel *_labelRankValue;	// 56 = 0x38
    UIButton *_buttonInvite;	// 64 = 0x40
    UIButton *_treeNumButton;	// 72 = 0x48
    UIImageView *_waterImageView;	// 80 = 0x50
    UIImageView *_imageMask;	// 88 = 0x58
    UIImage *_imageSelfMask;	// 96 = 0x60
    UIImage *_imageOtherMask;	// 104 = 0x68
    UIImage *_imageInviteMask;	// 112 = 0x70
}

@property(retain, nonatomic) UIImage *imageInviteMask; // @synthesize imageInviteMask=_imageInviteMask;
@property(retain, nonatomic) UIImage *imageOtherMask; // @synthesize imageOtherMask=_imageOtherMask;
@property(retain, nonatomic) UIImage *imageSelfMask; // @synthesize imageSelfMask=_imageSelfMask;
@property(retain, nonatomic) UIImageView *imageMask; // @synthesize imageMask=_imageMask;
@property(retain, nonatomic) UIImageView *waterImageView; // @synthesize waterImageView=_waterImageView;
@property(retain, nonatomic) UIButton *treeNumButton; // @synthesize treeNumButton=_treeNumButton;
@property(retain, nonatomic) UIButton *buttonInvite; // @synthesize buttonInvite=_buttonInvite;
@property(retain, nonatomic) UILabel *labelRankValue; // @synthesize labelRankValue=_labelRankValue;
@property(retain, nonatomic) UILabel *labelName; // @synthesize labelName=_labelName;
@property(retain, nonatomic) UILabel *labelRankNum; // @synthesize labelRankNum=_labelRankNum;
@property(retain, nonatomic) UIImageView *imageViewTitle; // @synthesize imageViewTitle=_imageViewTitle;
@property(retain, nonatomic) UIView *viewCellBg; // @synthesize viewCellBg=_viewCellBg;
@property(nonatomic) _Bool isChangeBgColor; // @synthesize isChangeBgColor=_isChangeBgColor;
@property(retain, nonatomic) AEModuleTreeRankingListDTO *model; // @synthesize model=_model;
- (void).cxx_destruct;	// IMP=0x0000000100b13acc
- (void)onBtnPlantTouched:(id)arg1;	// IMP=0x0000000100b12684
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100b12650
- (void)awakeFromNib;	// IMP=0x0000000100b1261c
- (void)initView;	// IMP=0x0000000100b0ef4c
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000100b0ed74

@end


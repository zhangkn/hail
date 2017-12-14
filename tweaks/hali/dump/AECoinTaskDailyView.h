//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AECoinTaskDTO, UIImageView, UILabel;

@interface AECoinTaskDailyView : UIView
{
    AECoinTaskDTO *_dto;	// 8 = 0x8
    UIView *_containerView;	// 16 = 0x10
    UILabel *_titleLbl;	// 24 = 0x18
    UILabel *_orginAlertContentLbl;	// 32 = 0x20
    UIView *_sepratorView;	// 40 = 0x28
    UIView *_coinInfoView;	// 48 = 0x30
    UIImageView *_coinImageView;	// 56 = 0x38
    UILabel *_coinNumLbl;	// 64 = 0x40
    UILabel *_coinExplainLbl;	// 72 = 0x48
    UIView *_aboveView;	// 80 = 0x50
    UILabel *_actionLbl1;	// 88 = 0x58
    UILabel *_actionLbl2;	// 96 = 0x60
}

@property(retain, nonatomic) UILabel *actionLbl2; // @synthesize actionLbl2=_actionLbl2;
@property(retain, nonatomic) UILabel *actionLbl1; // @synthesize actionLbl1=_actionLbl1;
@property(retain, nonatomic) UIView *aboveView; // @synthesize aboveView=_aboveView;
@property(retain, nonatomic) UILabel *coinExplainLbl; // @synthesize coinExplainLbl=_coinExplainLbl;
@property(retain, nonatomic) UILabel *coinNumLbl; // @synthesize coinNumLbl=_coinNumLbl;
@property(retain, nonatomic) UIImageView *coinImageView; // @synthesize coinImageView=_coinImageView;
@property(retain, nonatomic) UIView *coinInfoView; // @synthesize coinInfoView=_coinInfoView;
@property(retain, nonatomic) UIView *sepratorView; // @synthesize sepratorView=_sepratorView;
@property(retain, nonatomic) UILabel *orginAlertContentLbl; // @synthesize orginAlertContentLbl=_orginAlertContentLbl;
@property(retain, nonatomic) UILabel *titleLbl; // @synthesize titleLbl=_titleLbl;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) AECoinTaskDTO *dto; // @synthesize dto=_dto;
- (void).cxx_destruct;	// IMP=0x00000001007fedf8
- (void)dealloc;	// IMP=0x00000001007fea64
- (void)buildAnimation;	// IMP=0x00000001007fe98c
- (void)buildActionView;	// IMP=0x00000001007fe008
- (void)buildCoinExplainLbl;	// IMP=0x00000001007fdba8
- (void)buildCoinInfoView;	// IMP=0x00000001007fd0e8
- (void)buildSepratorView;	// IMP=0x00000001007fcc48
- (void)buildOriginAlertContent;	// IMP=0x00000001007fc764
- (void)buildTitleLbl;	// IMP=0x00000001007fc40c
- (void)buildContainerView;	// IMP=0x00000001007fc0d0
- (void)buildUI;	// IMP=0x00000001007fbf74
- (void)dismiss;	// IMP=0x00000001007fbf68
- (void)show;	// IMP=0x00000001007fbdd4
- (id)initWithCoinTaskDTO:(id)arg1;	// IMP=0x00000001007fbd48

@end

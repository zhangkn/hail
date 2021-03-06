//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AEModuleTreeDTO, UIImageView, UILabel;

@interface AEModuleTreeProgressBarView : UIView
{
    AEModuleTreeDTO *_model;	// 8 = 0x8
    UIImageView *_progressImageView;	// 16 = 0x10
    UIView *_progressViewBg;	// 24 = 0x18
    UIView *_progressCurrent;	// 32 = 0x20
    UIImageView *_redPacket;	// 40 = 0x28
    UIView *_redPacketBg;	// 48 = 0x30
    UIView *_line;	// 56 = 0x38
    UILabel *_labelProgress;	// 64 = 0x40
}

@property(retain, nonatomic) UILabel *labelProgress; // @synthesize labelProgress=_labelProgress;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UIView *redPacketBg; // @synthesize redPacketBg=_redPacketBg;
@property(retain, nonatomic) UIImageView *redPacket; // @synthesize redPacket=_redPacket;
@property(retain, nonatomic) UIView *progressCurrent; // @synthesize progressCurrent=_progressCurrent;
@property(retain, nonatomic) UIView *progressViewBg; // @synthesize progressViewBg=_progressViewBg;
@property(retain, nonatomic) UIImageView *progressImageView; // @synthesize progressImageView=_progressImageView;
@property(retain, nonatomic) AEModuleTreeDTO *model; // @synthesize model=_model;
- (void).cxx_destruct;	// IMP=0x0000000100b34f9c
- (double)getRedPacketBgLeftOffetScale;	// IMP=0x0000000100b34154
- (void)initView;	// IMP=0x0000000100b31e90
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100b31e38

@end


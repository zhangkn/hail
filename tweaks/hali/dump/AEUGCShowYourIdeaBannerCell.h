//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class AEUGCLabel, NSString, UIButton, UIImageView, UILabel, UIView;

@interface AEUGCShowYourIdeaBannerCell : UICollectionViewCell
{
    UIImageView *_bgImageView;	// 8 = 0x8
    AEUGCLabel *_label;	// 16 = 0x10
    UIButton *_rulesButton;	// 24 = 0x18
    CDUnknownBlockType _postHandler;	// 32 = 0x20
    CDUnknownBlockType _rulesHandler;	// 40 = 0x28
    UILabel *_smallLabel;	// 48 = 0x30
    UIButton *_postButton;	// 56 = 0x38
    UIView *_maskView;	// 64 = 0x40
    NSString *_ruleLink;	// 72 = 0x48
    NSString *_cmdUrl;	// 80 = 0x50
}

@property(copy, nonatomic) NSString *cmdUrl; // @synthesize cmdUrl=_cmdUrl;
@property(copy, nonatomic) NSString *ruleLink; // @synthesize ruleLink=_ruleLink;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIButton *postButton; // @synthesize postButton=_postButton;
@property(retain, nonatomic) UILabel *smallLabel; // @synthesize smallLabel=_smallLabel;
@property(copy, nonatomic) CDUnknownBlockType rulesHandler; // @synthesize rulesHandler=_rulesHandler;
@property(copy, nonatomic) CDUnknownBlockType postHandler; // @synthesize postHandler=_postHandler;
@property(retain, nonatomic) UIButton *rulesButton; // @synthesize rulesButton=_rulesButton;
@property(retain, nonatomic) AEUGCLabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
- (void).cxx_destruct;	// IMP=0x0000000100dc95d0
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000100dc93ac
- (void)setSelected:(_Bool)arg1;	// IMP=0x0000000100dc93a8
- (void)setupImgUrl:(id)arg1;	// IMP=0x0000000100dc9300
- (void)setupCmdUrl:(id)arg1;	// IMP=0x0000000100dc92f4
- (void)setupRuleLink:(id)arg1;	// IMP=0x0000000100dc924c
- (void)setupJoinCnt:(id)arg1;	// IMP=0x0000000100dc9248
- (void)setupTitle:(id)arg1;	// IMP=0x0000000100dc91e8
- (void)rulesAction:(id)arg1;	// IMP=0x0000000100dc9158
- (void)postAction:(id)arg1;	// IMP=0x0000000100dc90c8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100dc7974

@end

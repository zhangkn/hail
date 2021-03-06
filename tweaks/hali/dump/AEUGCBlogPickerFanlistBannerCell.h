//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIButton, UIImageView, UILabel;

@interface AEUGCBlogPickerFanlistBannerCell : UICollectionViewCell
{
    UIImageView *_bgImageView;	// 8 = 0x8
    UILabel *_label;	// 16 = 0x10
    UILabel *_descriptionLabel;	// 24 = 0x18
    UIButton *_rulesButton;	// 32 = 0x20
    CDUnknownBlockType _postHandler;	// 40 = 0x28
    CDUnknownBlockType _rulesHandler;	// 48 = 0x30
    UIButton *_postButton;	// 56 = 0x38
}

@property(retain, nonatomic) UIButton *postButton; // @synthesize postButton=_postButton;
@property(copy, nonatomic) CDUnknownBlockType rulesHandler; // @synthesize rulesHandler=_rulesHandler;
@property(copy, nonatomic) CDUnknownBlockType postHandler; // @synthesize postHandler=_postHandler;
@property(readonly, nonatomic) UIButton *rulesButton; // @synthesize rulesButton=_rulesButton;
@property(readonly, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
- (void).cxx_destruct;	// IMP=0x000000010065e724
- (void)postAction:(id)arg1;	// IMP=0x000000010065e644
- (void)rulesAction:(id)arg1;	// IMP=0x000000010065e624
- (void)configAutoLayout;	// IMP=0x000000010065e0c4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010065ce28

@end


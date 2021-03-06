//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class AEUGCVideoLiveNoticeDTO, AEUGCVideoLiveRoomSubPostView, UIButton, UIImageView, UILabel, UIView;

@interface AEUGCVideoLiveRoomHostCollectionCell : UICollectionViewCell
{
    _Bool _hideReplyButton;	// 8 = 0x8
    AEUGCVideoLiveNoticeDTO *_comment;	// 16 = 0x10
    double _preferredMaxLayoutWidth;	// 24 = 0x18
    CDUnknownBlockType _commentBtnClickBlock;	// 32 = 0x20
    CDUnknownBlockType _viewDetailLableClickBlock;	// 40 = 0x28
    CDUnknownBlockType _productInfoViewClickBlock;	// 48 = 0x30
    CDUnknownBlockType _hostImageViewClickBlock;	// 56 = 0x38
    UIView *_containerView;	// 64 = 0x40
    UIView *_headerContainerView;	// 72 = 0x48
    UIImageView *_headImgView;	// 80 = 0x50
    UILabel *_nicknameLabel;	// 88 = 0x58
    UIView *_lineView;	// 96 = 0x60
    UILabel *_timeLabel;	// 104 = 0x68
    UIButton *_commentBtn;	// 112 = 0x70
    UILabel *_contentLabel;	// 120 = 0x78
    UIImageView *_picImgview;	// 128 = 0x80
    UILabel *_linkLabel;	// 136 = 0x88
    UIView *_productInfoContainerView;	// 144 = 0x90
    UIImageView *_productImgView;	// 152 = 0x98
    UILabel *_productDescLabel;	// 160 = 0xa0
    UILabel *_priceLabel;	// 168 = 0xa8
    AEUGCVideoLiveRoomSubPostView *_subPostView;	// 176 = 0xb0
    double _contentLabelTopOffset;	// 184 = 0xb8
    double _picImgviewTopOffset;	// 192 = 0xc0
    double _linkLabelTopOffset;	// 200 = 0xc8
    double _productInfoContainerViewTopOffset;	// 208 = 0xd0
    double _subPostViewTopOffset;	// 216 = 0xd8
}

+ (struct CGSize)calculateHostCellSizeWithModel:(id)arg1 withpreferredMaxLayoutWidth:(double)arg2;	// IMP=0x0000000100f85fc0
@property(nonatomic) double subPostViewTopOffset; // @synthesize subPostViewTopOffset=_subPostViewTopOffset;
@property(nonatomic) double productInfoContainerViewTopOffset; // @synthesize productInfoContainerViewTopOffset=_productInfoContainerViewTopOffset;
@property(nonatomic) double linkLabelTopOffset; // @synthesize linkLabelTopOffset=_linkLabelTopOffset;
@property(nonatomic) double picImgviewTopOffset; // @synthesize picImgviewTopOffset=_picImgviewTopOffset;
@property(nonatomic) double contentLabelTopOffset; // @synthesize contentLabelTopOffset=_contentLabelTopOffset;
@property(retain, nonatomic) AEUGCVideoLiveRoomSubPostView *subPostView; // @synthesize subPostView=_subPostView;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *productDescLabel; // @synthesize productDescLabel=_productDescLabel;
@property(retain, nonatomic) UIImageView *productImgView; // @synthesize productImgView=_productImgView;
@property(retain, nonatomic) UIView *productInfoContainerView; // @synthesize productInfoContainerView=_productInfoContainerView;
@property(retain, nonatomic) UILabel *linkLabel; // @synthesize linkLabel=_linkLabel;
@property(retain, nonatomic) UIImageView *picImgview; // @synthesize picImgview=_picImgview;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIButton *commentBtn; // @synthesize commentBtn=_commentBtn;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) UIImageView *headImgView; // @synthesize headImgView=_headImgView;
@property(retain, nonatomic) UIView *headerContainerView; // @synthesize headerContainerView=_headerContainerView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) CDUnknownBlockType hostImageViewClickBlock; // @synthesize hostImageViewClickBlock=_hostImageViewClickBlock;
@property(copy, nonatomic) CDUnknownBlockType productInfoViewClickBlock; // @synthesize productInfoViewClickBlock=_productInfoViewClickBlock;
@property(copy, nonatomic) CDUnknownBlockType viewDetailLableClickBlock; // @synthesize viewDetailLableClickBlock=_viewDetailLableClickBlock;
@property(copy, nonatomic) CDUnknownBlockType commentBtnClickBlock; // @synthesize commentBtnClickBlock=_commentBtnClickBlock;
@property(nonatomic) double preferredMaxLayoutWidth; // @synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth;
@property(nonatomic) _Bool hideReplyButton; // @synthesize hideReplyButton=_hideReplyButton;
@property(retain, nonatomic) AEUGCVideoLiveNoticeDTO *comment; // @synthesize comment=_comment;
- (void).cxx_destruct;	// IMP=0x0000000100f8658c
- (void)handleTapOnImageView:(id)arg1;	// IMP=0x0000000100f85f18
- (void)handleTapOnProcut:(id)arg1;	// IMP=0x0000000100f85e70
- (void)handleTapOnLinkLabel:(id)arg1;	// IMP=0x0000000100f85dc8
- (void)handleCommentBtnClicked:(id)arg1;	// IMP=0x0000000100f85d20
- (void)setupConstraint;	// IMP=0x0000000100f81cfc
- (void)baseConstraint;	// IMP=0x0000000100f80898
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100f8032c

@end


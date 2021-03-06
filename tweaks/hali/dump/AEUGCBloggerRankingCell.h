//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "AEUGCComponentProxy.h"

@class AEUGCAvatarView, NSString, UILabel, UIView;

@interface AEUGCBloggerRankingCell : UICollectionViewCell <AEUGCComponentProxy>
{
    id <AEUGCBloggerRankingCellViewModel> _viewModel;	// 8 = 0x8
    UILabel *_leftRankingTitleLabel;	// 16 = 0x10
    UILabel *_midRankingTitleLabel;	// 24 = 0x18
    UILabel *_rightRankingTitleLabel;	// 32 = 0x20
    AEUGCAvatarView *_leftUserAvatar;	// 40 = 0x28
    AEUGCAvatarView *_midUserAvatar;	// 48 = 0x30
    AEUGCAvatarView *_rightUserAvatar;	// 56 = 0x38
    UILabel *_leftNickNameLabel;	// 64 = 0x40
    UILabel *_midNickNameLabel;	// 72 = 0x48
    UILabel *_rightNickNameLabel;	// 80 = 0x50
    UIView *_leftVIew;	// 88 = 0x58
    UIView *_rightView;	// 96 = 0x60
    UIView *_midView;	// 104 = 0x68
    UILabel *_TopTitleLabel;	// 112 = 0x70
}

@property(retain, nonatomic) UILabel *TopTitleLabel; // @synthesize TopTitleLabel=_TopTitleLabel;
@property(retain, nonatomic) UIView *midView; // @synthesize midView=_midView;
@property(retain, nonatomic) UIView *rightView; // @synthesize rightView=_rightView;
@property(retain, nonatomic) UIView *leftVIew; // @synthesize leftVIew=_leftVIew;
@property(retain, nonatomic) UILabel *rightNickNameLabel; // @synthesize rightNickNameLabel=_rightNickNameLabel;
@property(retain, nonatomic) UILabel *midNickNameLabel; // @synthesize midNickNameLabel=_midNickNameLabel;
@property(retain, nonatomic) UILabel *leftNickNameLabel; // @synthesize leftNickNameLabel=_leftNickNameLabel;
@property(retain, nonatomic) AEUGCAvatarView *rightUserAvatar; // @synthesize rightUserAvatar=_rightUserAvatar;
@property(retain, nonatomic) AEUGCAvatarView *midUserAvatar; // @synthesize midUserAvatar=_midUserAvatar;
@property(retain, nonatomic) AEUGCAvatarView *leftUserAvatar; // @synthesize leftUserAvatar=_leftUserAvatar;
@property(retain, nonatomic) UILabel *rightRankingTitleLabel; // @synthesize rightRankingTitleLabel=_rightRankingTitleLabel;
@property(retain, nonatomic) UILabel *midRankingTitleLabel; // @synthesize midRankingTitleLabel=_midRankingTitleLabel;
@property(retain, nonatomic) UILabel *leftRankingTitleLabel; // @synthesize leftRankingTitleLabel=_leftRankingTitleLabel;
- (void).cxx_destruct;	// IMP=0x000000010065c9dc
- (void)bindModel:(id)arg1;	// IMP=0x000000010065b9b8
- (void)awakeFromNib;	// IMP=0x000000010065b8e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


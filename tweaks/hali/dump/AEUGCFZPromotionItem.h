//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUGCSliderElement.h"

@class AEUGCAvatarView, UIImageView, UILabel, UIView;

@interface AEUGCFZPromotionItem : AEUGCSliderElement
{
    UIImageView *_imageView;	// 8 = 0x8
    UIImageView *_iconImgView;	// 16 = 0x10
    UILabel *_contentLabel;	// 24 = 0x18
    UIView *_maskView;	// 32 = 0x20
    AEUGCAvatarView *_avatarImageView;	// 40 = 0x28
}

@property(retain, nonatomic) AEUGCAvatarView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;	// IMP=0x000000010069eeac
- (void)setupConstraints;	// IMP=0x000000010069d980
- (void)bindData:(id)arg1 currentIndex:(long long)arg2 totalCount:(long long)arg3;	// IMP=0x000000010069d5ec
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010069d414

@end


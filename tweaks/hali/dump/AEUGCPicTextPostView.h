//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSLayoutConstraint, UIImageView, UILabel;

@interface AEUGCPicTextPostView : UIView
{
    UIImageView *_imageView;	// 8 = 0x8
    UIImageView *_videoIconImgView;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UILabel *_descLabel;	// 32 = 0x20
    NSLayoutConstraint *_heightConstraint;	// 40 = 0x28
}

@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *videoIconImgView; // @synthesize videoIconImgView=_videoIconImgView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;	// IMP=0x00000001007a5654
- (void)configLayoutConstraint;	// IMP=0x00000001007a4b7c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001007a49d4

@end


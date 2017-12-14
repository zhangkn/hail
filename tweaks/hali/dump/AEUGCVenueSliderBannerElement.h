//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEUGCSliderElement.h"

@class UIImageView, UILabel, UIView;

@interface AEUGCVenueSliderBannerElement : AEUGCSliderElement
{
    UIImageView *_backgroundImageView;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UIView *_maskView;	// 24 = 0x18
}

@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void).cxx_destruct;	// IMP=0x00000001006cd69c
- (void)setupConstraints;	// IMP=0x00000001006ccdec
- (void)bindData:(id)arg1 currentIndex:(long long)arg2 totalCount:(long long)arg3;	// IMP=0x00000001006ccc4c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001006ccb10

@end


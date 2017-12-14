//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETileAdapterView.h"

@class MASConstraint, UIImageView, UILabel;

@interface AEVenueCategoryComponent : AETileAdapterView
{
    UIImageView *_imageView;	// 8 = 0x8
    UILabel *_fieldArea;	// 16 = 0x10
    UIImageView *_backgroundImageView;	// 24 = 0x18
    double _hRatio;	// 32 = 0x20
    MASConstraint *_ratioConstraint;	// 40 = 0x28
    double _imageViewMargin;	// 48 = 0x30
}

@property(nonatomic) double imageViewMargin; // @synthesize imageViewMargin=_imageViewMargin;
@property(retain, nonatomic) MASConstraint *ratioConstraint; // @synthesize ratioConstraint=_ratioConstraint;
@property(nonatomic) double hRatio; // @synthesize hRatio=_hRatio;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UILabel *fieldArea; // @synthesize fieldArea=_fieldArea;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;	// IMP=0x000000010042b7ac
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x000000010042b268
- (Class)viewModelClass;	// IMP=0x000000010042b254
- (void)layoutSubviews;	// IMP=0x000000010042b104
- (void)prepareForReuse;	// IMP=0x000000010042b014
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010042ac54

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImage;

@interface AEUserMedalSubview : UIView
{
    long long _numberOfMedal;	// 8 = 0x8
    double _imageGap;	// 16 = 0x10
    UIImage *_image;	// 24 = 0x18
}

@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) double imageGap; // @synthesize imageGap=_imageGap;
@property(nonatomic) long long numberOfMedal; // @synthesize numberOfMedal=_numberOfMedal;
- (void).cxx_destruct;	// IMP=0x000000010027f78c
- (void)setMedalFrame;	// IMP=0x000000010027f3f0
- (id)initWithPoint:(struct CGPoint)arg1 numberMedal:(long long)arg2;	// IMP=0x000000010027f224
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010027f1f0

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSString, UIImageView, UILabel;

@interface AEUGCFloatingLabel : UIView
{
    long long _direction;	// 8 = 0x8
    long long _style;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    UIImageView *_backgroundImage;	// 32 = 0x20
    UILabel *_nameLabel;	// 40 = 0x28
    NSArray *_nameLabelDynamicLayoutConstraints;	// 48 = 0x30
    NSArray *_cachedBackgroundImages;	// 56 = 0x38
}

@property(retain, nonatomic) NSArray *cachedBackgroundImages; // @synthesize cachedBackgroundImages=_cachedBackgroundImages;
@property(retain, nonatomic) NSArray *nameLabelDynamicLayoutConstraints; // @synthesize nameLabelDynamicLayoutConstraints=_nameLabelDynamicLayoutConstraints;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
- (void).cxx_destruct;	// IMP=0x00000001007712e0
- (double)measureFitableWidth;	// IMP=0x0000000100771014
- (void)configLayoutConstraint;	// IMP=0x00000001007707ec
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100770470

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class NSLayoutConstraint, NSString, UILabel, UIView;

@interface AEUGCSpotLightHeader : UICollectionReusableView
{
    _Bool _didSetupConstraints;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UIView *_splitViewLeft;	// 32 = 0x20
    UIView *_splitViewRight;	// 40 = 0x28
    NSLayoutConstraint *_labelWidthConstraint;	// 48 = 0x30
    UIView *_grayView;	// 56 = 0x38
}

@property(nonatomic) _Bool didSetupConstraints; // @synthesize didSetupConstraints=_didSetupConstraints;
@property(retain, nonatomic) UIView *grayView; // @synthesize grayView=_grayView;
@property(retain, nonatomic) NSLayoutConstraint *labelWidthConstraint; // @synthesize labelWidthConstraint=_labelWidthConstraint;
@property(retain, nonatomic) UIView *splitViewRight; // @synthesize splitViewRight=_splitViewRight;
@property(retain, nonatomic) UIView *splitViewLeft; // @synthesize splitViewLeft=_splitViewLeft;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;	// IMP=0x000000010064f2c0
- (void)updateConstraints;	// IMP=0x000000010064ef30
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010064e990

@end


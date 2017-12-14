//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AEUGCFloatingLabelsView, NSLayoutConstraint, UIImageView, UILabel;

@interface AEUGCFloatingLabelsContentView : UIView
{
    _Bool isUpdateConstraints;	// 8 = 0x8
    AEUGCFloatingLabelsView *_labelsView;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UILabel *_descLabel;	// 32 = 0x20
    NSLayoutConstraint *_heightConstraint;	// 40 = 0x28
    UIImageView *_imageVideo;	// 48 = 0x30
}

@property(retain, nonatomic) UIImageView *imageVideo; // @synthesize imageVideo=_imageVideo;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) AEUGCFloatingLabelsView *labelsView; // @synthesize labelsView=_labelsView;
- (void).cxx_destruct;	// IMP=0x0000000100772418
- (void)configLayoutConstraint;	// IMP=0x0000000100771a20
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100771878

@end

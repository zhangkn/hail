//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface AEStoreVoteProgressInnerView : UIView
{
    UILabel *_nameLabel;	// 8 = 0x8
    UILabel *_numberLabel;	// 16 = 0x10
    UIImageView *_couponImageView;	// 24 = 0x18
}

@property(retain, nonatomic) UIImageView *couponImageView; // @synthesize couponImageView=_couponImageView;
@property(retain, nonatomic) UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void).cxx_destruct;	// IMP=0x0000000100d37abc
- (void)bindModel:(id)arg1;	// IMP=0x0000000100d37928
- (void)setupConstraints;	// IMP=0x0000000100d37088
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100d36cb8

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "AEUGCComponentProxy.h"

@class NSString, UIImageView, UILabel;

@interface AEUGCHFPreviousThemeCollectionViewCell : UICollectionViewCell <AEUGCComponentProxy>
{
    UIImageView *_backgroundImageView;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UILabel *_titleLabelBig;	// 24 = 0x18
    UILabel *_descLabel;	// 32 = 0x20
    UILabel *_winnerLabel;	// 40 = 0x28
}

@property(retain, nonatomic) UILabel *winnerLabel; // @synthesize winnerLabel=_winnerLabel;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabelBig; // @synthesize titleLabelBig=_titleLabelBig;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void).cxx_destruct;	// IMP=0x00000001006b00f8
- (void)bindModel:(id)arg1;	// IMP=0x00000001006afd24
- (void)awakeFromNib;	// IMP=0x00000001006afbc0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

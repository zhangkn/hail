//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEMyRewardPointsBaseSectionHeader.h"

@class UILabel;

@interface AEMyRewardPointsVarietySectionHeader : AEMyRewardPointsBaseSectionHeader
{
    UILabel *_titleLab;	// 8 = 0x8
    UILabel *_valueLab;	// 16 = 0x10
}

+ (double)heightWithViewModel:(id)arg1;	// IMP=0x00000001001c0010
@property(retain, nonatomic) UILabel *valueLab; // @synthesize valueLab=_valueLab;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
- (void).cxx_destruct;	// IMP=0x00000001001c0edc
- (void)bindDataWithViewModel:(id)arg1;	// IMP=0x00000001001c0b24
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001001c01e8

@end


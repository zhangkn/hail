//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETileAdapterView.h"

@class UILabel;

@interface AEComponentGrayHalfCircleTag : AETileAdapterView
{
    _Bool _alreadyAddCorner;	// 8 = 0x8
    UILabel *_tagLabel;	// 16 = 0x10
}

@property(nonatomic) _Bool alreadyAddCorner; // @synthesize alreadyAddCorner=_alreadyAddCorner;
@property(retain, nonatomic) UILabel *tagLabel; // @synthesize tagLabel=_tagLabel;
- (void).cxx_destruct;	// IMP=0x00000001009e1c8c
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x00000001009e1bc4
- (void)layoutSubviews;	// IMP=0x00000001009e192c
- (void)configConstraints;	// IMP=0x00000001009e1710
- (void)configSubviews;	// IMP=0x00000001009e1590
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001009e14d4

@end

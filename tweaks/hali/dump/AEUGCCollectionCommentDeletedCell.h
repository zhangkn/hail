//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class AEUGCLabel, UILabel, UIView;

@interface AEUGCCollectionCommentDeletedCell : UICollectionViewCell
{
    UILabel *_titleLabel;	// 8 = 0x8
    AEUGCLabel *_floorLabel;	// 16 = 0x10
    UIView *_topLine;	// 24 = 0x18
    UIView *_bottomLine;	// 32 = 0x20
}

+ (struct CGSize)autoLayoutCalculateSizeWithFloorIndex:(unsigned long long)arg1 preferredMaxLayoutWidth:(double)arg2;	// IMP=0x000000010073a614
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
- (void).cxx_destruct;	// IMP=0x000000010073a7b4
- (void)setFloorIndex:(long long)arg1;	// IMP=0x000000010073a5a8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100739614

@end

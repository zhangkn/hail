//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTileCell.h"

@class AEAutolayoutImageView, AEAutolayoutLabel, AECountDownView;

@interface AELifeStyleImageTitleTileCell : AEBaseTileCell
{
    AEAutolayoutLabel *_title;	// 8 = 0x8
    AEAutolayoutLabel *_subTitle;	// 16 = 0x10
    AECountDownView *_countDown;	// 24 = 0x18
    AEAutolayoutImageView *_imageView;	// 32 = 0x20
    AEAutolayoutImageView *_arrow;	// 40 = 0x28
}

@property(retain, nonatomic) AEAutolayoutImageView *arrow; // @synthesize arrow=_arrow;
@property(retain, nonatomic) AEAutolayoutImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) AECountDownView *countDown; // @synthesize countDown=_countDown;
@property(retain, nonatomic) AEAutolayoutLabel *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) AEAutolayoutLabel *title; // @synthesize title=_title;
- (void).cxx_destruct;	// IMP=0x00000001003dd4bc
- (void)prepareForReuse;	// IMP=0x00000001003dd220
- (void)renderWithTile:(id)arg1;	// IMP=0x00000001003dcf1c
- (void)setupLayout;	// IMP=0x00000001003dbf38
- (void)setupUI;	// IMP=0x00000001003db6fc
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001003db62c

@end


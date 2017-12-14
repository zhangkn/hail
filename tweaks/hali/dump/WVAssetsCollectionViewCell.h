//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class ALAsset, UIImage, UIImageView, UIView, WVCheckmarkView;

@interface WVAssetsCollectionViewCell : UICollectionViewCell
{
    _Bool _showsOverlayViewWhenSelected;	// 8 = 0x8
    ALAsset *_asset;	// 16 = 0x10
    UIImageView *_imageView;	// 24 = 0x18
    UIView *_overlayView;	// 32 = 0x20
    WVCheckmarkView *_checkmarkView;	// 40 = 0x28
    UIImage *_blankImage;	// 48 = 0x30
}

@property(retain, nonatomic) UIImage *blankImage; // @synthesize blankImage=_blankImage;
@property(retain, nonatomic) WVCheckmarkView *checkmarkView; // @synthesize checkmarkView=_checkmarkView;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool showsOverlayViewWhenSelected; // @synthesize showsOverlayViewWhenSelected=_showsOverlayViewWhenSelected;
@property(retain, nonatomic) ALAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;	// IMP=0x0000000101b23de4
- (void)hideOverlayView;	// IMP=0x0000000101b23a9c
- (void)showOverlayView;	// IMP=0x0000000101b237a4
- (void)setSelected:(_Bool)arg1;	// IMP=0x0000000101b2371c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000101b235f0

@end

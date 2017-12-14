//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APIPControl.h"

@class APIPSelector, UIImage, UIImageView;

@interface APIPSelectorItem : APIPControl
{
    _Bool _selected;	// 8 = 0x8
    APIPSelector *_selector;	// 16 = 0x10
    UIImageView *_contentImageView;	// 24 = 0x18
    UIImage *_selectImage;	// 32 = 0x20
    UIImage *_unselectImage;	// 40 = 0x28
    UIImage *_disableImage;	// 48 = 0x30
}

@property(retain, nonatomic) UIImage *disableImage; // @synthesize disableImage=_disableImage;
@property(retain, nonatomic) UIImage *unselectImage; // @synthesize unselectImage=_unselectImage;
@property(retain, nonatomic) UIImage *selectImage; // @synthesize selectImage=_selectImage;
@property(retain, nonatomic) UIImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
@property(nonatomic) __weak APIPSelector *selector; // @synthesize selector=_selector;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
- (void).cxx_destruct;	// IMP=0x0000000101133038
- (void)layoutSubviews;	// IMP=0x0000000101132e48
- (void)processActionIfNeed;	// IMP=0x0000000101132d20
- (void)click:(id)arg1;	// IMP=0x0000000101132ab8
- (id)initWithContrlFrame:(id)arg1;	// IMP=0x00000001011327d8

@end

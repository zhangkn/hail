//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETileAdapterView.h"

@class UIImageView, UILabel;

@interface AE329PreOrderMainComponent : AETileAdapterView
{
    UILabel *_title;	// 8 = 0x8
    UIImageView *_img;	// 16 = 0x10
    UILabel *_prompt;	// 24 = 0x18
}

@property(retain, nonatomic) UILabel *prompt; // @synthesize prompt=_prompt;
@property(retain, nonatomic) UIImageView *img; // @synthesize img=_img;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
- (void).cxx_destruct;	// IMP=0x00000001002d6dc8
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x00000001002d6ab8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001002d65b8

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface AEUGCMiniCardRepostContentView : UIView
{
    UILabel *_label;	// 8 = 0x8
    UIView *_line;	// 16 = 0x10
    UIImageView *_imageViewRepost;	// 24 = 0x18
    UILabel *_userName;	// 32 = 0x20
    UIImageView *_imageView;	// 40 = 0x28
    UILabel *_labelNORepost;	// 48 = 0x30
}

@property(retain, nonatomic) UILabel *labelNORepost; // @synthesize labelNORepost=_labelNORepost;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) UIImageView *imageViewRepost; // @synthesize imageViewRepost=_imageViewRepost;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;	// IMP=0x000000010078fe94
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010078dd28

@end

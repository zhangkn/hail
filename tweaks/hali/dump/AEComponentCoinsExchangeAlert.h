//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEComponentAlert.h"

@class UIImageView, UILabel;

@interface AEComponentCoinsExchangeAlert : AEComponentAlert
{
    UILabel *_title;	// 8 = 0x8
    UILabel *_content;	// 16 = 0x10
    UILabel *_ok;	// 24 = 0x18
    UIImageView *_cancel;	// 32 = 0x20
}

@property(retain, nonatomic) UIImageView *cancel; // @synthesize cancel=_cancel;
@property(retain, nonatomic) UILabel *ok; // @synthesize ok=_ok;
@property(retain, nonatomic) UILabel *content; // @synthesize content=_content;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
- (void).cxx_destruct;	// IMP=0x00000001009b8aac
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x00000001009b8534
- (void)configConstraints;	// IMP=0x00000001009b7484
- (void)configSubviews;	// IMP=0x00000001009b6fc0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001009b6ee8

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APIPControl.h"

@class NSString, UIImageView, UILabel;

@interface APIPComboxItem : APIPControl
{
    _Bool _isChecked;	// 8 = 0x8
    NSString *_code;	// 16 = 0x10
    NSString *_comboxValue;	// 24 = 0x18
    UIImageView *_icon;	// 32 = 0x20
    UILabel *_label;	// 40 = 0x28
    UILabel *_valueLabel;	// 48 = 0x30
    UIImageView *_checkedIcon;	// 56 = 0x38
}

@property(retain, nonatomic) UIImageView *checkedIcon; // @synthesize checkedIcon=_checkedIcon;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *comboxValue; // @synthesize comboxValue=_comboxValue;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
@property(nonatomic) _Bool isChecked; // @synthesize isChecked=_isChecked;
- (void).cxx_destruct;	// IMP=0x0000000101109f5c
- (void)layoutSubviews;	// IMP=0x0000000101109c3c
- (id)initWithCode:(id)arg1 andValue:(id)arg2 withName:(id)arg3;	// IMP=0x0000000101109638
- (id)initWithContrlFrame:(id)arg1;	// IMP=0x000000010110911c

@end

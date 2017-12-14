//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor, UIFont;

@interface _aeSegmentControlItemViewModel : NSObject
{
    NSString *_title;	// 8 = 0x8
    NSString *_imageUrl;	// 16 = 0x10
    UIFont *_titleSelectedFont;	// 24 = 0x18
    UIFont *_titleDisplayFont;	// 32 = 0x20
    UIColor *_titleColor;	// 40 = 0x28
    double _imageTopGap;	// 48 = 0x30
    double _titleLabTopGap;	// 56 = 0x38
    double _titleLabBottomGap;	// 64 = 0x40
    struct CGSize _imageSize;	// 72 = 0x48
}

@property(nonatomic) double titleLabBottomGap; // @synthesize titleLabBottomGap=_titleLabBottomGap;
@property(nonatomic) double titleLabTopGap; // @synthesize titleLabTopGap=_titleLabTopGap;
@property(nonatomic) double imageTopGap; // @synthesize imageTopGap=_imageTopGap;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIFont *titleDisplayFont; // @synthesize titleDisplayFont=_titleDisplayFont;
@property(retain, nonatomic) UIFont *titleSelectedFont; // @synthesize titleSelectedFont=_titleSelectedFont;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;	// IMP=0x000000010081fcc8

@end


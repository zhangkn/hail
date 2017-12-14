//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, UIColor;

@interface TileStyle : NSObject
{
    UIColor *_backgroundColor;	// 8 = 0x8
    double _radius;	// 16 = 0x10
    double _opacity;	// 24 = 0x18
    double _borderWidth;	// 32 = 0x20
    UIColor *_borderColor;	// 40 = 0x28
    double _aspectRatio;	// 48 = 0x30
    double _absoluteWidth;	// 56 = 0x38
    double _absoluteHeight;	// 64 = 0x40
    double _relativeWidth;	// 72 = 0x48
    double _relativeHeight;	// 80 = 0x50
    NSDictionary *_otherStyles;	// 88 = 0x58
    struct UIEdgeInsets _padding;	// 96 = 0x60
    struct UIEdgeInsets _margin;	// 128 = 0x80
}

@property(retain, nonatomic) NSDictionary *otherStyles; // @synthesize otherStyles=_otherStyles;
@property(nonatomic) double relativeHeight; // @synthesize relativeHeight=_relativeHeight;
@property(nonatomic) double relativeWidth; // @synthesize relativeWidth=_relativeWidth;
@property(nonatomic) double absoluteHeight; // @synthesize absoluteHeight=_absoluteHeight;
@property(nonatomic) double absoluteWidth; // @synthesize absoluteWidth=_absoluteWidth;
@property(nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) struct UIEdgeInsets margin; // @synthesize margin=_margin;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;	// IMP=0x0000000101a3e10c
- (void)prepareForReuseInView:(id)arg1;	// IMP=0x0000000101a3dd94
- (void)renderStyleInView:(id)arg1;	// IMP=0x0000000101a3db14
- (id)init;	// IMP=0x0000000101a3da14
- (id)initWithDTO:(id)arg1;	// IMP=0x0000000100a04f18

@end


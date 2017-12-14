//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TileFlowLayoutAttributes.h"

#import "NSCopying.h"

@class UIColor;

@interface TileFlowLayoutDecorationAttributes : TileFlowLayoutAttributes <NSCopying>
{
    UIColor *_maskColor;	// 8 = 0x8
    double _radius;	// 16 = 0x10
    double _borderWidth;	// 24 = 0x18
    UIColor *_borderColor;	// 32 = 0x20
    struct UIEdgeInsets _insets;	// 40 = 0x28
}

@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(retain, nonatomic) UIColor *maskColor; // @synthesize maskColor=_maskColor;
- (void).cxx_destruct;	// IMP=0x0000000101a491f4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000101a48ff0

@end


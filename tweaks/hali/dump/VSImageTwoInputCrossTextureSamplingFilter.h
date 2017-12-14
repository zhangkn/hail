//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VSImageTwoInputFilter.h"

@interface VSImageTwoInputCrossTextureSamplingFilter : VSImageTwoInputFilter
{
    int texelWidthUniform;	// 256 = 0x100
    int texelHeightUniform;	// 260 = 0x104
    double texelWidth;	// 264 = 0x108
    double texelHeight;	// 272 = 0x110
    _Bool hasOverriddenImageSizeFactor;	// 280 = 0x118
    double _texelWidth;	// 288 = 0x120
    double _texelHeight;	// 296 = 0x128
}

@property(nonatomic) double texelHeight; // @synthesize texelHeight=_texelHeight;
@property(nonatomic) double texelWidth; // @synthesize texelWidth=_texelWidth;
- (void)setupFilterForSize:(struct CGSize)arg1;	// IMP=0x0000000101affda8
- (id)initWithFragmentShaderFromString:(id)arg1;	// IMP=0x0000000101affcd8

@end


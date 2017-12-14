//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VSImageFilterGroup.h"

@class VSImageFilter, VSImageGaussianBlurFilter;

@interface VSImageGaussianSelectiveBlurFilter : VSImageFilterGroup
{
    VSImageGaussianBlurFilter *blurFilter;	// 80 = 0x50
    VSImageFilter *selectiveFocusFilter;	// 88 = 0x58
    _Bool hasOverriddenAspectRatio;	// 96 = 0x60
    double _excludeCircleRadius;	// 104 = 0x68
    double _excludeBlurSize;	// 112 = 0x70
    double _blurRadiusInPixels;	// 120 = 0x78
    double _aspectRatio;	// 128 = 0x80
    struct CGPoint _excludeCirclePoint;	// 136 = 0x88
}

@property(nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(nonatomic) double excludeBlurSize; // @synthesize excludeBlurSize=_excludeBlurSize;
@property(nonatomic) double excludeCircleRadius; // @synthesize excludeCircleRadius=_excludeCircleRadius;
@property(nonatomic) struct CGPoint excludeCirclePoint; // @synthesize excludeCirclePoint=_excludeCirclePoint;
- (void).cxx_destruct;	// IMP=0x0000000101ad7934
@property(nonatomic) double blurRadiusInPixels; // @synthesize blurRadiusInPixels=_blurRadiusInPixels;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;	// IMP=0x0000000101ad770c
- (id)init;	// IMP=0x0000000101ad7524

@end


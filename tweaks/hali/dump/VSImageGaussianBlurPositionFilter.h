//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VSImageTwoPassTextureSamplingFilter.h"

@interface VSImageGaussianBlurPositionFilter : VSImageTwoPassTextureSamplingFilter
{
    int blurCenterUniform;	// 264 = 0x108
    int blurRadiusUniform;	// 268 = 0x10c
    int aspectRatioUniform;	// 272 = 0x110
    double _blurSize;	// 280 = 0x118
    double _aspectRatio;	// 288 = 0x120
    double _blurRadius;	// 296 = 0x128
    struct CGPoint _blurCenter;	// 304 = 0x130
}

@property(nonatomic) double blurRadius; // @synthesize blurRadius=_blurRadius;
@property(nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(nonatomic) struct CGPoint blurCenter; // @synthesize blurCenter=_blurCenter;
@property(nonatomic) double blurSize; // @synthesize blurSize=_blurSize;
- (void)setInputRotation:(unsigned long long)arg1 atIndex:(long long)arg2;	// IMP=0x0000000101af6d54
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;	// IMP=0x0000000101af6cb0
- (void)forceProcessingAtSize:(struct CGSize)arg1;	// IMP=0x0000000101af6c60
- (void)adjustAspectRatio;	// IMP=0x0000000101af6bf4
- (id)init;	// IMP=0x0000000101af6bd8
- (id)initWithFirstStageVertexShaderFromString:(id)arg1 firstStageFragmentShaderFromString:(id)arg2 secondStageVertexShaderFromString:(id)arg3 secondStageFragmentShaderFromString:(id)arg4;	// IMP=0x0000000101af6a24

@end


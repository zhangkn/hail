//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VSImageFilterGroup.h"

@class VSImageFilter, VSImageGaussianBlurFilter;

@interface VSImageUnsharpMaskFilter : VSImageFilterGroup
{
    VSImageGaussianBlurFilter *blurFilter;	// 80 = 0x50
    VSImageFilter *unsharpMaskFilter;	// 88 = 0x58
    double blurRadiusInPixels;	// 96 = 0x60
    double _intensity;	// 104 = 0x68
}

@property(nonatomic) double intensity; // @synthesize intensity=_intensity;
- (void).cxx_destruct;	// IMP=0x0000000101af3cf0
@property(nonatomic) double blurRadiusInPixels; // @synthesize blurRadiusInPixels;
- (id)init;	// IMP=0x0000000101af3ad4

@end

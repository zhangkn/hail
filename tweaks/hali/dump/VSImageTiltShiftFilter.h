//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VSImageFilterGroup.h"

@class VSImageFilter, VSImageGaussianBlurFilter;

@interface VSImageTiltShiftFilter : VSImageFilterGroup
{
    VSImageGaussianBlurFilter *blurFilter;	// 80 = 0x50
    VSImageFilter *tiltShiftFilter;	// 88 = 0x58
    double blurRadiusInPixels;	// 96 = 0x60
    double _topFocusLevel;	// 104 = 0x68
    double _bottomFocusLevel;	// 112 = 0x70
    double _focusFallOffRate;	// 120 = 0x78
}

@property(nonatomic) double focusFallOffRate; // @synthesize focusFallOffRate=_focusFallOffRate;
@property(nonatomic) double bottomFocusLevel; // @synthesize bottomFocusLevel=_bottomFocusLevel;
@property(nonatomic) double topFocusLevel; // @synthesize topFocusLevel=_topFocusLevel;
- (void).cxx_destruct;	// IMP=0x0000000101ae2dbc
@property(nonatomic) double blurRadiusInPixels; // @synthesize blurRadiusInPixels;
- (id)init;	// IMP=0x0000000101ae2aec

@end


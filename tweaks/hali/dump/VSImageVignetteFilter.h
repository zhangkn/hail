//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VSImageFilter.h"

@interface VSImageVignetteFilter : VSImageFilter
{
    int vignetteCenterUniform;	// 176 = 0xb0
    int vignetteColorUniform;	// 180 = 0xb4
    int vignetteStartUniform;	// 184 = 0xb8
    int vignetteEndUniform;	// 188 = 0xbc
    double _vignetteStart;	// 192 = 0xc0
    double _vignetteEnd;	// 200 = 0xc8
    struct VSVector3 _vignetteColor;	// 208 = 0xd0
    struct CGPoint _vignetteCenter;	// 224 = 0xe0
}

@property(nonatomic) double vignetteEnd; // @synthesize vignetteEnd=_vignetteEnd;
@property(nonatomic) double vignetteStart; // @synthesize vignetteStart=_vignetteStart;
@property(nonatomic) struct VSVector3 vignetteColor; // @synthesize vignetteColor=_vignetteColor;
@property(nonatomic) struct CGPoint vignetteCenter; // @synthesize vignetteCenter=_vignetteCenter;
- (id)init;	// IMP=0x0000000101abe190

@end


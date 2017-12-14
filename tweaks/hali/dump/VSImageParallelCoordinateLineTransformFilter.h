//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VSImageFilter.h"

@interface VSImageParallelCoordinateLineTransformFilter : VSImageFilter
{
    char *rawImagePixels;	// 176 = 0xb0
    float *lineCoordinates;	// 184 = 0xb8
    unsigned int maxLinePairsToRender;	// 192 = 0xc0
    unsigned int linePairsToRender;	// 196 = 0xc4
}

- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;	// IMP=0x0000000101aff8f0
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;	// IMP=0x0000000101aff86c
- (void)generateLineCoordinates;	// IMP=0x0000000101aff7ec
- (void)initializeAttributes;	// IMP=0x0000000101aff7c8
- (void)dealloc;	// IMP=0x0000000101aff764
- (id)init;	// IMP=0x0000000101aff67c

@end

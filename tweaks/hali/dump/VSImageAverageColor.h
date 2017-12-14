//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VSImageFilter.h"

@interface VSImageAverageColor : VSImageFilter
{
    int texelWidthUniform;	// 176 = 0xb0
    int texelHeightUniform;	// 180 = 0xb4
    unsigned long long numberOfStages;	// 184 = 0xb8
    char *rawImagePixels;	// 192 = 0xc0
    struct CGSize finalStageSize;	// 200 = 0xc8
    CDUnknownBlockType _colorAverageProcessingFinishedBlock;	// 216 = 0xd8
}

@property(copy, nonatomic) CDUnknownBlockType colorAverageProcessingFinishedBlock; // @synthesize colorAverageProcessingFinishedBlock=_colorAverageProcessingFinishedBlock;
- (void).cxx_destruct;	// IMP=0x0000000101af6a10
- (void)extractAverageColorAtFrameTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x0000000101af67dc
- (void)setInputRotation:(unsigned long long)arg1 atIndex:(long long)arg2;	// IMP=0x0000000101af67c8
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;	// IMP=0x0000000101af644c
- (void)dealloc;	// IMP=0x0000000101af63f4
- (id)init;	// IMP=0x0000000101af6288

@end

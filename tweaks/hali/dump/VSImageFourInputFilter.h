//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VSImageThreeInputFilter.h"

@class VSImageFramebuffer;

@interface VSImageFourInputFilter : VSImageThreeInputFilter
{
    VSImageFramebuffer *fourthInputFramebuffer;	// 312 = 0x138
    int filterFourthTextureCoordinateAttribute;	// 320 = 0x140
    int filterInputTextureUniform4;	// 324 = 0x144
    unsigned long long inputRotation4;	// 328 = 0x148
    unsigned int filterSourceTexture4;	// 336 = 0x150
    CDStruct_1b6d18a9 fourthFrameTime;	// 340 = 0x154
    _Bool hasSetThirdTexture;	// 364 = 0x16c
    _Bool hasReceivedFourthFrame;	// 365 = 0x16d
    _Bool fourthFrameWasVideo;	// 366 = 0x16e
    _Bool fourthFrameCheckDisabled;	// 367 = 0x16f
}

- (void).cxx_destruct;	// IMP=0x0000000101acc024
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;	// IMP=0x0000000101acbc28
- (struct CGSize)rotatedSize:(struct CGSize)arg1 forIndex:(long long)arg2;	// IMP=0x0000000101acbbc0
- (void)setInputRotation:(unsigned long long)arg1 atIndex:(long long)arg2;	// IMP=0x0000000101acbb74
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;	// IMP=0x0000000101acba90
- (void)setInputFramebuffer:(id)arg1 atIndex:(long long)arg2;	// IMP=0x0000000101acb978
- (long long)nextAvailableTextureIndex;	// IMP=0x0000000101acb934
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;	// IMP=0x0000000101acb444
- (void)disableFourthFrameCheck;	// IMP=0x0000000101acb430
- (void)initializeAttributes;	// IMP=0x0000000101acb3cc
- (id)initWithVertexShaderFromString:(id)arg1 fragmentShaderFromString:(id)arg2;	// IMP=0x0000000101acb1d8
- (id)initWithFragmentShaderFromString:(id)arg1;	// IMP=0x0000000101acb17c

@end

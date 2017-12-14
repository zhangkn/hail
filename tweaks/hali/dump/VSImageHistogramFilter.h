//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VSImageFilter.h"

@class VSImageGLProgram;

@interface VSImageHistogramFilter : VSImageFilter
{
    int histogramType;	// 176 = 0xb0
    char *vertexSamplingCoordinates;	// 184 = 0xb8
    VSImageGLProgram *secondFilterProgram;	// 192 = 0xc0
    VSImageGLProgram *thirdFilterProgram;	// 200 = 0xc8
    int secondFilterPositionAttribute;	// 208 = 0xd0
    int thirdFilterPositionAttribute;	// 212 = 0xd4
    unsigned long long _downsamplingFactor;	// 216 = 0xd8
}

@property(nonatomic) unsigned long long downsamplingFactor; // @synthesize downsamplingFactor=_downsamplingFactor;
- (void).cxx_destruct;	// IMP=0x0000000101acd884
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;	// IMP=0x0000000101acd464
- (void)setInputRotation:(unsigned long long)arg1 atIndex:(long long)arg2;	// IMP=0x0000000101acd450
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;	// IMP=0x0000000101acd400
- (struct CGSize)outputFrameSize;	// IMP=0x0000000101acd3f4
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;	// IMP=0x0000000101acd394
- (struct CGSize)sizeOfFBO;	// IMP=0x0000000101acd384
- (void)dealloc;	// IMP=0x0000000101acd310
- (void)initializeSecondaryAttributes;	// IMP=0x0000000101acd2b0
- (id)init;	// IMP=0x0000000101acd260
- (id)initWithHistogramType:(int)arg1;	// IMP=0x0000000101acccb4

@end

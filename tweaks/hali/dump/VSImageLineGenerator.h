//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VSImageFilter.h"

@interface VSImageLineGenerator : VSImageFilter
{
    int lineWidthUniform;	// 176 = 0xb0
    int lineColorUniform;	// 180 = 0xb4
    float *lineCoordinates;	// 184 = 0xb8
    double _lineWidth;	// 192 = 0xc0
}

@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
- (void)setLineColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3;	// IMP=0x0000000101acb144
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;	// IMP=0x0000000101acb0ec
- (void)renderLinesFromArray:(float *)arg1 count:(unsigned long long)arg2 frameTime:(CDStruct_1b6d18a9)arg3;	// IMP=0x0000000101acadd4
- (void)generateLineCoordinates;	// IMP=0x0000000101acada0
- (void)dealloc;	// IMP=0x0000000101acad48
- (id)init;	// IMP=0x0000000101acabc0

@end

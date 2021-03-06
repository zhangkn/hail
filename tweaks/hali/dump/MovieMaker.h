//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor;

@interface MovieMaker : NSObject
{
    long long height;	// 8 = 0x8
    long long width;	// 16 = 0x10
    unsigned long long framesPerSecond;	// 24 = 0x18
    AVAssetWriter *writer;	// 32 = 0x20
    AVAssetWriterInput *input;	// 40 = 0x28
    AVAssetWriterInputPixelBufferAdaptor *adaptor;	// 48 = 0x30
    struct __CVBuffer *bufferRef;	// 56 = 0x38
    long long frameCount;	// 64 = 0x40
}

+ (id)createMovieAtPath:(id)arg1 frameSize:(struct CGSize)arg2 fps:(unsigned long long)arg3;	// IMP=0x0000000100450a78
+ (_Bool)preparePath:(id)arg1;	// IMP=0x0000000100450458
- (void).cxx_destruct;	// IMP=0x0000000100451328
- (void)finalizeMovie;	// IMP=0x0000000100451154
- (_Bool)addDrawingToMovie:(CDUnknownBlockType)arg1;	// IMP=0x0000000100451110
- (_Bool)addImageToMovie:(id)arg1;	// IMP=0x0000000100450f30
- (_Bool)appendPixelBuffer;	// IMP=0x0000000100450e58
- (_Bool)drawToPixelBufferWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100450c70
- (_Bool)createPixelBuffer;	// IMP=0x0000000100450afc
- (id)initWithPath:(id)arg1 frameSize:(struct CGSize)arg2 fps:(unsigned long long)arg3;	// IMP=0x00000001004508f0
- (_Bool)createMovieAtPath:(id)arg1;	// IMP=0x000000010045057c

@end


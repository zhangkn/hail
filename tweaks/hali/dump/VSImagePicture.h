//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VSImageOutput.h"

@class NSObject<OS_dispatch_semaphore>;

@interface VSImagePicture : VSImageOutput
{
    struct CGSize pixelSizeOfImage;	// 80 = 0x50
    _Bool hasProcessedImage;	// 96 = 0x60
    NSObject<OS_dispatch_semaphore> *imageUpdateSemaphore;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000101aed068
- (void)addTarget:(id)arg1 atTextureLocation:(long long)arg2;	// IMP=0x0000000101aecf98
- (struct CGSize)outputImageSize;	// IMP=0x0000000101aecf84
- (void)processImageUpToFilter:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000101aece04
- (_Bool)processImageWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000101aeca40
- (void)processImage;	// IMP=0x0000000101aeca30
- (void)removeAllTargets;	// IMP=0x0000000101aec9e4
- (void)dealloc;	// IMP=0x0000000101aec974
- (id)initWithCGImage:(struct CGImage *)arg1 smoothlyScaleOutput:(_Bool)arg2 removePremultiplication:(_Bool)arg3;	// IMP=0x0000000101aec3a8
- (id)initWithImage:(id)arg1 smoothlyScaleOutput:(_Bool)arg2 removePremultiplication:(_Bool)arg3;	// IMP=0x0000000101aec32c
- (id)initWithCGImage:(struct CGImage *)arg1 removePremultiplication:(_Bool)arg2;	// IMP=0x0000000101aec314
- (id)initWithImage:(id)arg1 removePremultiplication:(_Bool)arg2;	// IMP=0x0000000101aec2a4
- (id)initWithCGImage:(struct CGImage *)arg1 smoothlyScaleOutput:(_Bool)arg2;	// IMP=0x0000000101aec294
- (id)initWithImage:(id)arg1 smoothlyScaleOutput:(_Bool)arg2;	// IMP=0x0000000101aec228
- (id)initWithCGImage:(struct CGImage *)arg1;	// IMP=0x0000000101aec218
- (id)initWithImage:(id)arg1;	// IMP=0x0000000101aec1c8
- (id)initWithData:(id)arg1;	// IMP=0x0000000101aec11c
- (id)initWithURL:(id)arg1;	// IMP=0x0000000101aec070
- (void)replaceTextureWithSubCGImage:(struct CGImage *)arg1 inRect:(struct CGRect)arg2;	// IMP=0x0000000101ae8528
- (void)replaceTextureWithSubimage:(id)arg1 inRect:(struct CGRect)arg2;	// IMP=0x0000000101ae8494
- (void)replaceTextureWithSubCGImage:(struct CGImage *)arg1;	// IMP=0x0000000101ae8424
- (void)replaceTextureWithSubimage:(id)arg1;	// IMP=0x0000000101ae83c0

@end


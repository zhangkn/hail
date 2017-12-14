//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImage.h"

#import "YYAnimatedImage.h"

@class NSArray, NSData, NSObject<OS_dispatch_semaphore>, NSString, YYImageDecoder;

@interface YYImage : UIImage <YYAnimatedImage>
{
    YYImageDecoder *_decoder;	// 8 = 0x8
    NSArray *_preloadedFrames;	// 16 = 0x10
    NSObject<OS_dispatch_semaphore> *_preloadedLock;	// 24 = 0x18
    unsigned long long _bytesPerFrame;	// 32 = 0x20
    _Bool _preloadAllAnimatedImageFrames;	// 40 = 0x28
    unsigned long long _animatedImageType;	// 48 = 0x30
    unsigned long long _animatedImageMemorySize;	// 56 = 0x38
}

+ (id)imageWithData:(id)arg1 scale:(double)arg2;	// IMP=0x0000000101bc592c
+ (id)imageWithData:(id)arg1;	// IMP=0x0000000101bc58c8
+ (id)imageWithContentsOfFile:(id)arg1;	// IMP=0x0000000101bc5864
+ (id)imageNamed:(id)arg1;	// IMP=0x0000000101bc52dc
@property(nonatomic) _Bool preloadAllAnimatedImageFrames; // @synthesize preloadAllAnimatedImageFrames=_preloadAllAnimatedImageFrames;
@property(readonly, nonatomic) unsigned long long animatedImageMemorySize; // @synthesize animatedImageMemorySize=_animatedImageMemorySize;
@property(readonly, nonatomic) unsigned long long animatedImageType; // @synthesize animatedImageType=_animatedImageType;
- (void).cxx_destruct;	// IMP=0x0000000101bc6464
- (double)animatedImageDurationAtIndex:(unsigned long long)arg1;	// IMP=0x0000000101bc63f4
- (id)animatedImageFrameAtIndex:(unsigned long long)arg1;	// IMP=0x0000000101bc62d4
- (unsigned long long)animatedImageBytesPerFrame;	// IMP=0x0000000101bc62c4
- (unsigned long long)animatedImageLoopCount;	// IMP=0x0000000101bc62ac
- (unsigned long long)animatedImageFrameCount;	// IMP=0x0000000101bc6294
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000101bc614c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000101bc6054
@property(readonly, nonatomic) NSData *animatedImageData;
- (id)initWithData:(id)arg1 scale:(double)arg2;	// IMP=0x0000000101bc5bb8
- (id)initWithData:(id)arg1;	// IMP=0x0000000101bc5ba8
- (id)initWithContentsOfFile:(id)arg1;	// IMP=0x0000000101bc59a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


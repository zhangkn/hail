//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VSImageInput.h"

@class NSString, VSImageFramebuffer, VSImageGLProgram;

@interface VSImageRawDataOutput : NSObject <VSImageInput>
{
    struct CGSize imageSize;	// 8 = 0x8
    unsigned long long inputRotation;	// 24 = 0x18
    _Bool outputBGRA;	// 32 = 0x20
    VSImageFramebuffer *firstInputFramebuffer;	// 40 = 0x28
    VSImageFramebuffer *outputFramebuffer;	// 48 = 0x30
    VSImageFramebuffer *retainedFramebuffer;	// 56 = 0x38
    _Bool hasReadFromTheCurrentFrame;	// 64 = 0x40
    VSImageGLProgram *dataProgram;	// 72 = 0x48
    int dataPositionAttribute;	// 80 = 0x50
    int dataTextureCoordinateAttribute;	// 84 = 0x54
    int dataInputTextureUniform;	// 88 = 0x58
    char *_rawBytesForImage;	// 96 = 0x60
    _Bool lockNextFramebuffer;	// 104 = 0x68
    _Bool enabled;	// 105 = 0x69
    CDUnknownBlockType _newFrameAvailableBlock;	// 112 = 0x70
}

@property(nonatomic) _Bool enabled; // @synthesize enabled;
@property(copy, nonatomic) CDUnknownBlockType newFrameAvailableBlock; // @synthesize newFrameAvailableBlock=_newFrameAvailableBlock;
- (void).cxx_destruct;	// IMP=0x0000000101ad5e20
- (void)unlockFramebufferAfterReading;	// IMP=0x0000000101ad5d98
- (void)lockFramebufferForReading;	// IMP=0x0000000101ad5d84
- (void)setImageSize:(struct CGSize)arg1;	// IMP=0x0000000101ad5d24
- (unsigned long long)bytesPerRowInOutput;	// IMP=0x0000000101ad5d0c
@property(readonly) char *rawBytesForImage; // @synthesize rawBytesForImage=_rawBytesForImage;
- (void)setCurrentlyReceivingMonochromeInput:(_Bool)arg1;	// IMP=0x0000000101ad5b3c
- (_Bool)wantsMonochromeInput;	// IMP=0x0000000101ad5b34
- (_Bool)shouldIgnoreUpdatesToThisTarget;	// IMP=0x0000000101ad5b2c
- (void)endProcessing;	// IMP=0x0000000101ad5b28
- (struct CGSize)maximumOutputSize;	// IMP=0x0000000101ad5b14
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;	// IMP=0x0000000101ad5b10
- (void)setInputRotation:(unsigned long long)arg1 atIndex:(long long)arg2;	// IMP=0x0000000101ad5b00
- (void)setInputFramebuffer:(id)arg1 atIndex:(long long)arg2;	// IMP=0x0000000101ad5aa0
- (long long)nextAvailableTextureIndex;	// IMP=0x0000000101ad5a98
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;	// IMP=0x0000000101ad5a70
- (struct VSByteColorVector)colorAtLocation:(struct CGPoint)arg1;	// IMP=0x0000000101ad59b0
- (void)renderAtInternalSize;	// IMP=0x0000000101ad57d4
- (void)dealloc;	// IMP=0x0000000101ad575c
- (id)initWithImageSize:(struct CGSize)arg1 resultsInBGRAFormat:(_Bool)arg2;	// IMP=0x0000000101ad5400

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


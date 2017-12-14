//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VSImageOutput.h"

#import "AVPlayerItemOutputPullDelegate.h"

@class AVAsset, AVAssetReader, AVPlayerItem, AVPlayerItemVideoOutput, CADisplayLink, NSString, NSURL, VSImageGLProgram, VSImageMovieWriter;

@interface VSImageMovie : VSImageOutput <AVPlayerItemOutputPullDelegate>
{
    _Bool audioEncodingIsFinished;	// 75 = 0x4b
    _Bool videoEncodingIsFinished;	// 76 = 0x4c
    VSImageMovieWriter *synchronizedMovieWriter;	// 80 = 0x50
    AVAssetReader *reader;	// 88 = 0x58
    AVPlayerItemVideoOutput *playerItemOutput;	// 96 = 0x60
    CADisplayLink *displayLink;	// 104 = 0x68
    CDStruct_1b6d18a9 previousFrameTime;	// 112 = 0x70
    CDStruct_1b6d18a9 processingFrameTime;	// 136 = 0x88
    double previousActualFrameTime;	// 160 = 0xa0
    _Bool keepLooping;	// 168 = 0xa8
    unsigned int luminanceTexture;	// 172 = 0xac
    unsigned int chrominanceTexture;	// 176 = 0xb0
    VSImageGLProgram *yuvConversionProgram;	// 184 = 0xb8
    int yuvConversionPositionAttribute;	// 192 = 0xc0
    int yuvConversionTextureCoordinateAttribute;	// 196 = 0xc4
    int yuvConversionLuminanceTextureUniform;	// 200 = 0xc8
    int yuvConversionChrominanceTextureUniform;	// 204 = 0xcc
    int yuvConversionMatrixUniform;	// 208 = 0xd0
    const float *_preferredConversion;	// 216 = 0xd8
    _Bool isFullYUVRange;	// 224 = 0xe0
    int imageBufferWidth;	// 228 = 0xe4
    int imageBufferHeight;	// 232 = 0xe8
    _Bool _runBenchmark;	// 236 = 0xec
    _Bool _playAtActualSpeed;	// 237 = 0xed
    _Bool _shouldRepeat;	// 238 = 0xee
    NSURL *_url;	// 240 = 0xf0
    AVAsset *_asset;	// 248 = 0xf8
    id <VSImageMovieDelegate> _delegate;	// 256 = 0x100
    AVPlayerItem *_playerItem;	// 264 = 0x108
    VSImageMovieWriter *_audioEncodingTarget;	// 272 = 0x110
}

@property(retain, nonatomic) VSImageMovieWriter *audioEncodingTarget; // @synthesize audioEncodingTarget=_audioEncodingTarget;
@property(retain) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(nonatomic) _Bool shouldRepeat; // @synthesize shouldRepeat=_shouldRepeat;
@property(nonatomic) id <VSImageMovieDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool playAtActualSpeed; // @synthesize playAtActualSpeed=_playAtActualSpeed;
@property(nonatomic) _Bool runBenchmark; // @synthesize runBenchmark=_runBenchmark;
@property(retain) AVAsset *asset; // @synthesize asset=_asset;
@property(retain) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;	// IMP=0x0000000101b05730
@property(readonly, nonatomic) _Bool videoEncodingIsFinished;
@property(readonly, nonatomic) _Bool audioEncodingIsFinished;
@property(readonly, nonatomic) AVAssetReader *assetReader;
- (void)convertYUVToRGBOutput;	// IMP=0x0000000101b05454
- (void)cancelProcessing;	// IMP=0x0000000101b05410
- (void)endProcessing;	// IMP=0x0000000101b051b0
- (void)processMovieFrame:(struct __CVBuffer *)arg1 withSampleTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x0000000101b04654
@property(readonly, nonatomic) float progress;
- (void)processMovieFrame:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x0000000101b04480
- (_Bool)readNextAudioSampleFromOutput:(id)arg1;	// IMP=0x0000000101b04320
- (_Bool)readNextVideoFrameFromOutput:(id)arg1;	// IMP=0x0000000101b040d8
- (void)processPixelBufferAtTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x0000000101b03fb4
- (void)displayLinkCallback:(id)arg1;	// IMP=0x0000000101b03ee8
- (void)outputMediaDataWillChange:(id)arg1;	// IMP=0x0000000101b03ecc
- (void)processPlayerItem;	// IMP=0x0000000101b03c34
- (void)processAsset;	// IMP=0x0000000101b03718
- (id)createAssetReader;	// IMP=0x0000000101b0336c
- (void)startProcessing;	// IMP=0x0000000101b02e88
- (void)enableSynchronizedEncodingUsingMovieWriter:(id)arg1;	// IMP=0x0000000101b02e2c
- (void)dealloc;	// IMP=0x0000000101b02d54
- (void)yuvConversionSetup;	// IMP=0x0000000101b029b8
- (id)initWithPlayerItem:(id)arg1;	// IMP=0x0000000101b028e4
- (id)initWithAsset:(id)arg1;	// IMP=0x0000000101b02824
- (id)initWithURL:(id)arg1;	// IMP=0x0000000101b02764

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

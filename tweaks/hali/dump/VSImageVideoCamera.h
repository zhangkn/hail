//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VSImageOutput.h"

#import "AVCaptureAudioDataOutputSampleBufferDelegate.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"

@class AVCaptureAudioDataOutput, AVCaptureDevice, AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoDataOutput, NSDate, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString, VSImageGLProgram, VSImageMovieWriter;

@interface VSImageVideoCamera : VSImageOutput <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureAudioDataOutputSampleBufferDelegate>
{
    unsigned long long numberOfFramesCaptured;	// 80 = 0x50
    double totalFrameTimeDuringCapture;	// 88 = 0x58
    AVCaptureSession *_captureSession;	// 96 = 0x60
    AVCaptureDevice *_inputCamera;	// 104 = 0x68
    AVCaptureDevice *_microphone;	// 112 = 0x70
    AVCaptureDeviceInput *videoInput;	// 120 = 0x78
    AVCaptureVideoDataOutput *videoOutput;	// 128 = 0x80
    _Bool capturePaused;	// 136 = 0x88
    unsigned long long outputRotation;	// 144 = 0x90
    unsigned long long internalRotation;	// 152 = 0x98
    NSObject<OS_dispatch_semaphore> *frameRenderingSemaphore;	// 160 = 0xa0
    _Bool captureAsYUV;	// 168 = 0xa8
    unsigned int luminanceTexture;	// 172 = 0xac
    unsigned int chrominanceTexture;	// 176 = 0xb0
    id <VSImageVideoCameraDelegate> _delegate;	// 184 = 0xb8
    AVCaptureDeviceInput *audioInput;	// 192 = 0xc0
    AVCaptureAudioDataOutput *audioOutput;	// 200 = 0xc8
    NSDate *startingCaptureTime;	// 208 = 0xd0
    NSObject<OS_dispatch_queue> *cameraProcessingQueue;	// 216 = 0xd8
    NSObject<OS_dispatch_queue> *audioProcessingQueue;	// 224 = 0xe0
    VSImageGLProgram *yuvConversionProgram;	// 232 = 0xe8
    int yuvConversionPositionAttribute;	// 240 = 0xf0
    int yuvConversionTextureCoordinateAttribute;	// 244 = 0xf4
    int yuvConversionLuminanceTextureUniform;	// 248 = 0xf8
    int yuvConversionChrominanceTextureUniform;	// 252 = 0xfc
    int yuvConversionMatrixUniform;	// 256 = 0x100
    const float *_preferredConversion;	// 264 = 0x108
    _Bool isFullYUVRange;	// 272 = 0x110
    int imageBufferWidth;	// 276 = 0x114
    int imageBufferHeight;	// 280 = 0x118
    _Bool addedAudioInputsDueToEncodingTarget;	// 284 = 0x11c
    _Bool _runBenchmark;	// 285 = 0x11d
    _Bool _horizontallyMirrorFrontFacingCamera;	// 286 = 0x11e
    _Bool _horizontallyMirrorRearFacingCamera;	// 287 = 0x11f
    int _frameRate;	// 288 = 0x120
    NSString *_captureSessionPreset;	// 296 = 0x128
    long long _outputImageOrientation;	// 304 = 0x130
    VSImageMovieWriter *_audioEncodingTarget;	// 312 = 0x138
}

+ (_Bool)isFrontFacingCameraPresent;	// IMP=0x0000000101ad2490
+ (_Bool)isBackFacingCameraPresent;	// IMP=0x0000000101ad2330
@property(retain, nonatomic) VSImageMovieWriter *audioEncodingTarget; // @synthesize audioEncodingTarget=_audioEncodingTarget;
@property(nonatomic) _Bool horizontallyMirrorRearFacingCamera; // @synthesize horizontallyMirrorRearFacingCamera=_horizontallyMirrorRearFacingCamera;
@property(nonatomic) _Bool horizontallyMirrorFrontFacingCamera; // @synthesize horizontallyMirrorFrontFacingCamera=_horizontallyMirrorFrontFacingCamera;
@property(nonatomic) id <VSImageVideoCameraDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long outputImageOrientation; // @synthesize outputImageOrientation=_outputImageOrientation;
@property(nonatomic) _Bool runBenchmark; // @synthesize runBenchmark=_runBenchmark;
@property(readonly) AVCaptureDevice *inputCamera; // @synthesize inputCamera=_inputCamera;
@property(readonly, retain, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property(copy, nonatomic) NSString *captureSessionPreset; // @synthesize captureSessionPreset=_captureSessionPreset;
- (void).cxx_destruct;	// IMP=0x0000000101ad446c
- (void)updateOrientationSendToTargets;	// IMP=0x0000000101ad3db8
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;	// IMP=0x0000000101ad3b14
- (void)resetBenchmarkAverage;	// IMP=0x0000000101ad3af8
- (double)averageFrameDurationDuringCapture;	// IMP=0x0000000101ad3ac4
- (void)convertYUVToRGBOutput;	// IMP=0x0000000101ad3868
- (void)processAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x0000000101ad3820
- (void)processVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x0000000101ad322c
- (void)updateTargetsForVideoCameraUsingCacheTextureAtWidth:(int)arg1 height:(int)arg2 time:(CDStruct_1b6d18a9)arg3;	// IMP=0x0000000101ad2d88
- (id)videoCaptureConnection;	// IMP=0x0000000101ad2b18
@property int frameRate; // @synthesize frameRate=_frameRate;
@property(readonly, getter=isFrontFacingCameraPresent) _Bool frontFacingCameraPresent;
@property(readonly, getter=isBackFacingCameraPresent) _Bool backFacingCameraPresent;
- (long long)cameraPosition;	// IMP=0x0000000101ad22d8
- (void)rotateCamera;	// IMP=0x0000000101ad1fe8
- (void)resumeCameraCapture;	// IMP=0x0000000101ad1fd8
- (void)pauseCameraCapture;	// IMP=0x0000000101ad1fc4
- (void)stopCameraCapture;	// IMP=0x0000000101ad1f74
- (void)startCameraCapture;	// IMP=0x0000000101ad1ef0
@property(readonly, nonatomic) _Bool isRunning;
- (void)addTarget:(id)arg1 atTextureLocation:(long long)arg2;	// IMP=0x0000000101ad1e4c
- (void)removeInputsAndOutputs;	// IMP=0x0000000101ad1d3c
- (_Bool)removeAudioInputsAndOutputs;	// IMP=0x0000000101ad1c78
- (_Bool)addAudioInputsAndOutputs;	// IMP=0x0000000101ad1adc
- (void)dealloc;	// IMP=0x0000000101ad1a2c
- (id)framebufferForOutput;	// IMP=0x0000000101ad1a18
- (id)initWithSessionPreset:(id)arg1 cameraPosition:(long long)arg2;	// IMP=0x0000000101ad0f3c
- (id)init;	// IMP=0x0000000101ad0ee0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "VSRecorderDelegate.h"

@class AEVideoRecordSession, NSString, UIView, VSRecorder;

@interface AEVideoRecoder : NSObject <VSRecorderDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate>
{
    UIView *_preView;	// 8 = 0x8
    AEVideoRecordSession *_session;	// 16 = 0x10
    id <AEVideoRecoderDelegate> _delegate;	// 24 = 0x18
    long long _flashMode;	// 32 = 0x20
    VSRecorder *_vsRecoder;	// 40 = 0x28
}

@property(retain, nonatomic) VSRecorder *vsRecoder; // @synthesize vsRecoder=_vsRecoder;
@property(nonatomic) long long flashMode; // @synthesize flashMode=_flashMode;
@property(nonatomic) __weak id <AEVideoRecoderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AEVideoRecordSession *session; // @synthesize session=_session;
@property(retain, nonatomic) UIView *preView; // @synthesize preView=_preView;
- (void).cxx_destruct;	// IMP=0x00000001002a5584
@property(readonly, nonatomic) _Bool videoEnabledAndReady;
@property(readonly, nonatomic) _Bool audioEnabledAndReady;
- (void)recorder:(id)arg1 didReconfigureAudioInput:(id)arg2;	// IMP=0x00000001002a535c
- (void)recorder:(id)arg1 didReconfigureVideoInput:(id)arg2;	// IMP=0x00000001002a52ac
- (void)recorder:(id)arg1 didInitializeVideoInSession:(id)arg2 error:(id)arg3;	// IMP=0x00000001002a52a8
- (void)recorder:(id)arg1 didInitializeAudioInSession:(id)arg2 error:(id)arg3;	// IMP=0x00000001002a52a4
- (void)recorder:(id)arg1 didBeginSegmentInSession:(id)arg2 error:(id)arg3;	// IMP=0x00000001002a51d0
- (void)recorder:(id)arg1 didCompleteSegment:(id)arg2 inSession:(id)arg3 error:(id)arg4;	// IMP=0x00000001002a50e0
- (void)recorder:(id)arg1 didCompleteSession:(id)arg2;	// IMP=0x00000001002a5030
- (void)recorder:(id)arg1 didAppendVideoSampleBufferInSession:(id)arg2;	// IMP=0x00000001002a4f6c
- (void)switchCaptureDevices;	// IMP=0x00000001002a4f2c
- (void)record;	// IMP=0x00000001002a4f14
- (void)pause:(CDUnknownBlockType)arg1;	// IMP=0x00000001002a4efc
- (void)pause;	// IMP=0x00000001002a4ee4
- (void)startRunning;	// IMP=0x00000001002a4ecc
@property(readonly, nonatomic) _Bool isRecording;
- (id)init;	// IMP=0x00000001002a4d18

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


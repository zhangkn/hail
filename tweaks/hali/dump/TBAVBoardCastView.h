//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TBAVStreamInfoViewDataSource.h"
#import "VCSessionDelegate.h"

@class NSString, UIImage, VCSimpleSession;

@interface TBAVBoardCastView : UIView <VCSessionDelegate, TBAVStreamInfoViewDataSource>
{
    _Bool _isTorch;	// 8 = 0x8
    _Bool _isBackCamera;	// 9 = 0x9
    _Bool _isBackground;	// 10 = 0xa
    id <TBAVBoardCastViewProtocol> _delegate;	// 16 = 0x10
    VCSimpleSession *_session;	// 24 = 0x18
    NSString *_urlString;	// 32 = 0x20
    UIImage *_tietuImage;	// 40 = 0x28
    long long _tietuMode;	// 48 = 0x30
}

@property(nonatomic) long long tietuMode; // @synthesize tietuMode=_tietuMode;
@property(retain, nonatomic) UIImage *tietuImage; // @synthesize tietuImage=_tietuImage;
@property(retain, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(retain, nonatomic) VCSimpleSession *session; // @synthesize session=_session;
@property(nonatomic) _Bool isBackground; // @synthesize isBackground=_isBackground;
@property(readonly, nonatomic) _Bool isBackCamera; // @synthesize isBackCamera=_isBackCamera;
@property(readonly, nonatomic) _Bool isTorch; // @synthesize isTorch=_isTorch;
@property(nonatomic) __weak id <TBAVBoardCastViewProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001016f020c
- (void)checkGestureDetectionResult:(int)arg1 gestureZone:(struct CGRect)arg2;	// IMP=0x00000001016eff98
- (void)checkFacialExpressionResult:(int)arg1;	// IMP=0x00000001016efe98
- (void)didAddCameraSource:(id)arg1;	// IMP=0x00000001016efdb4
- (void)connectionStatusChanged:(long long)arg1;	// IMP=0x00000001016efcc4
- (id)streamInfoForStreamInfoView:(id)arg1;	// IMP=0x00000001016efca0
- (id)streamInfoView;	// IMP=0x00000001016efc20
- (void)onWillResignActive:(id)arg1;	// IMP=0x00000001016efbc0
- (void)onDidBecomeActive:(id)arg1;	// IMP=0x00000001016efa94
- (void)setConfig:(id)arg1;	// IMP=0x00000001016ef6d0
@property(readonly, nonatomic) long long sessionState;
- (void)stopTietu;	// IMP=0x00000001016ef604
- (void)updateTietu:(long long)arg1 image:(id)arg2;	// IMP=0x00000001016ef4d8
- (void)startTietu;	// IMP=0x00000001016ef3fc
- (void)stopLinkLiveGameChecker;	// IMP=0x00000001016ef3a8
- (void)startLinkLiveGameChecker:(long long)arg1;	// IMP=0x00000001016ef1d4
- (void)setCameraState:(_Bool)arg1;	// IMP=0x00000001016ef130
- (void)startPreview;	// IMP=0x00000001016ef0c8
- (void)endRtmpSession;	// IMP=0x00000001016ef05c
- (void)startRtmpSessionWithURL:(id)arg1;	// IMP=0x00000001016eefa4
- (void)setUseAdaptiveBitrate:(_Bool)arg1;	// IMP=0x00000001016eef28
- (id)liveState;	// IMP=0x00000001016eeec0
- (int)netState;	// IMP=0x00000001016eee60
- (void)sendGestureMsg:(id)arg1;	// IMP=0x00000001016eedbc
- (void)setGestureDetectionTimeInterval:(int)arg1;	// IMP=0x00000001016eed40
- (void)setAudioBitrate:(int)arg1;	// IMP=0x00000001016eecc4
- (void)setAudioSamplerate:(int)arg1;	// IMP=0x00000001016eec48
- (void)setIDRFrameFrequency:(int)arg1;	// IMP=0x00000001016eebcc
- (void)setBitrate:(int)arg1;	// IMP=0x00000001016eeb50
- (void)setEnableH264BFrame:(_Bool)arg1;	// IMP=0x00000001016eead4
- (void)setResolution:(struct CGSize)arg1;	// IMP=0x00000001016eea40
- (void)setFPS:(int)arg1;	// IMP=0x00000001016ee9c4
- (void)setRoomInfo:(id)arg1 liveName:(id)arg2 ur:(id)arg3;	// IMP=0x00000001016ee8c8
- (void)setFrontCameraMirrored:(_Bool)arg1;	// IMP=0x00000001016ee88c
- (void)setUseSocketSession:(_Bool)arg1;	// IMP=0x00000001016ee880
- (void)setEncoderRetry:(_Bool)arg1;	// IMP=0x00000001016ee844
- (void)setCameraRetry:(_Bool)arg1;	// IMP=0x00000001016ee808
- (void)setMicRetry:(_Bool)arg1;	// IMP=0x00000001016ee7cc
- (void)setFdkAacEncodeEnable:(_Bool)arg1;	// IMP=0x00000001016ee790
- (void)setAudioEnhanceEnable:(_Bool)arg1;	// IMP=0x00000001016ee754
- (void)setFaceBeautyEnable:(_Bool)arg1;	// IMP=0x00000001016ee6f8
- (void)setNewBeautyEnable:(_Bool)arg1;	// IMP=0x00000001016ee6c4
- (void)setFilterEnable:(_Bool)arg1;	// IMP=0x00000001016ee638
- (void)changeTorchStatus:(_Bool)arg1;	// IMP=0x00000001016ee5d0
- (id)snapshotVideoViewWithFrame:(struct CGRect)arg1;	// IMP=0x00000001016ee55c
- (void)dealloc;	// IMP=0x00000001016ee424
@property(readonly, nonatomic) int bitrate;
- (void)layoutSubviews;	// IMP=0x00000001016ee26c
- (void)destroy;	// IMP=0x00000001016ee204
- (id)initWithFrame:(struct CGRect)arg1 options:(id)arg2;	// IMP=0x00000001016edf24

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImage;

@interface AEVideoRecoderConfiguration : NSObject
{
    _Bool _isFrontCamera;	// 8 = 0x8
    _Bool _isFlash;	// 9 = 0x9
    double _videoSize;	// 16 = 0x10
    double _minDuration;	// 24 = 0x18
    double _maxDuration;	// 32 = 0x20
    UIImage *_focusTargetImage;	// 40 = 0x28
    UIImage *_frontCameraImage;	// 48 = 0x30
    UIImage *_flashImage;	// 56 = 0x38
    long long _recoderViewType;	// 64 = 0x40
}

@property(nonatomic) long long recoderViewType; // @synthesize recoderViewType=_recoderViewType;
@property(retain, nonatomic) UIImage *flashImage; // @synthesize flashImage=_flashImage;
@property(retain, nonatomic) UIImage *frontCameraImage; // @synthesize frontCameraImage=_frontCameraImage;
@property(retain, nonatomic) UIImage *focusTargetImage; // @synthesize focusTargetImage=_focusTargetImage;
@property(nonatomic) double maxDuration; // @synthesize maxDuration=_maxDuration;
@property(nonatomic) double minDuration; // @synthesize minDuration=_minDuration;
@property(nonatomic) double videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) _Bool isFlash; // @synthesize isFlash=_isFlash;
@property(nonatomic) _Bool isFrontCamera; // @synthesize isFrontCamera=_isFrontCamera;
- (void).cxx_destruct;	// IMP=0x00000001002a76d0

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABActionResult, ABLivenessResult, NSDate, NSMutableArray;

@interface FaceDetectContext : NSObject
{
    _Bool _isCaptureVideoStart;	// 8 = 0x8
    _Bool _isDark;	// 9 = 0x9
    _Bool _isShake;	// 10 = 0xa
    _Bool _isPitchOk;	// 11 = 0xb
    _Bool _isInEnvTips;	// 12 = 0xc
    _Bool _isInPlaySound;	// 13 = 0xd
    _Bool _isGetBestImageInMirror;	// 14 = 0xe
    _Bool _isGetBestImageInAction;	// 15 = 0xf
    _Bool _isSoundOpen;	// 16 = 0x10
    _Bool _doesShowWelcomePage;	// 17 = 0x11
    _Bool _doesAlertWhenCameraDenied;	// 18 = 0x12
    _Bool _isDebug;	// 19 = 0x13
    int _currentDetectType;	// 20 = 0x14
    int _currentPhase;	// 24 = 0x18
    int _prevPhase;	// 28 = 0x1c
    int _frameDetectCount;	// 32 = 0x20
    int _actionCount;	// 36 = 0x24
    int _currentActionIndex;	// 40 = 0x28
    float _activeThreshold;	// 44 = 0x2c
    float _notActiveThreshold;	// 48 = 0x30
    int _minFaceThreshold;	// 52 = 0x34
    int _actionID;	// 56 = 0x38
    int _appID;	// 60 = 0x3c
    int _hasDemo;	// 64 = 0x40
    int _resultCode;	// 68 = 0x44
    int _failedActionCount;	// 72 = 0x48
    int _failedVideoCount;	// 76 = 0x4c
    int _retryCount;	// 80 = 0x50
    NSMutableArray *_frameArray;	// 88 = 0x58
    NSMutableArray *_faceArray;	// 96 = 0x60
    NSMutableArray *_actionArray;	// 104 = 0x68
    NSMutableArray *_stragegy;	// 112 = 0x70
    NSMutableArray *_configStrategy;	// 120 = 0x78
    long long _noFaceThreshold;	// 128 = 0x80
    long long _mineThreshold;	// 136 = 0x88
    NSDate *_timer;	// 144 = 0x90
    ABLivenessResult *_livenessResult;	// 152 = 0x98
    ABActionResult *_currentAction;	// 160 = 0xa0
}

+ (id)sharedContext;	// IMP=0x00000001012b2b20
@property(retain, nonatomic) ABActionResult *currentAction; // @synthesize currentAction=_currentAction;
@property(retain, nonatomic) ABLivenessResult *livenessResult; // @synthesize livenessResult=_livenessResult;
@property(retain, nonatomic) NSDate *timer; // @synthesize timer=_timer;
@property _Bool isDebug; // @synthesize isDebug=_isDebug;
@property int retryCount; // @synthesize retryCount=_retryCount;
@property _Bool doesAlertWhenCameraDenied; // @synthesize doesAlertWhenCameraDenied=_doesAlertWhenCameraDenied;
@property _Bool doesShowWelcomePage; // @synthesize doesShowWelcomePage=_doesShowWelcomePage;
@property int failedVideoCount; // @synthesize failedVideoCount=_failedVideoCount;
@property int failedActionCount; // @synthesize failedActionCount=_failedActionCount;
@property int resultCode; // @synthesize resultCode=_resultCode;
@property int hasDemo; // @synthesize hasDemo=_hasDemo;
@property int appID; // @synthesize appID=_appID;
@property int actionID; // @synthesize actionID=_actionID;
@property long long mineThreshold; // @synthesize mineThreshold=_mineThreshold;
@property int minFaceThreshold; // @synthesize minFaceThreshold=_minFaceThreshold;
@property float notActiveThreshold; // @synthesize notActiveThreshold=_notActiveThreshold;
@property float activeThreshold; // @synthesize activeThreshold=_activeThreshold;
@property long long noFaceThreshold; // @synthesize noFaceThreshold=_noFaceThreshold;
@property _Bool isSoundOpen; // @synthesize isSoundOpen=_isSoundOpen;
@property _Bool isGetBestImageInAction; // @synthesize isGetBestImageInAction=_isGetBestImageInAction;
@property _Bool isGetBestImageInMirror; // @synthesize isGetBestImageInMirror=_isGetBestImageInMirror;
@property int currentActionIndex; // @synthesize currentActionIndex=_currentActionIndex;
@property int actionCount; // @synthesize actionCount=_actionCount;
@property _Bool isInPlaySound; // @synthesize isInPlaySound=_isInPlaySound;
@property _Bool isInEnvTips; // @synthesize isInEnvTips=_isInEnvTips;
@property _Bool isPitchOk; // @synthesize isPitchOk=_isPitchOk;
@property _Bool isShake; // @synthesize isShake=_isShake;
@property _Bool isDark; // @synthesize isDark=_isDark;
@property(retain) NSMutableArray *configStrategy; // @synthesize configStrategy=_configStrategy;
@property(retain) NSMutableArray *stragegy; // @synthesize stragegy=_stragegy;
@property int frameDetectCount; // @synthesize frameDetectCount=_frameDetectCount;
@property(retain) NSMutableArray *actionArray; // @synthesize actionArray=_actionArray;
@property(retain) NSMutableArray *faceArray; // @synthesize faceArray=_faceArray;
@property(retain) NSMutableArray *frameArray; // @synthesize frameArray=_frameArray;
@property _Bool isCaptureVideoStart; // @synthesize isCaptureVideoStart=_isCaptureVideoStart;
@property int prevPhase; // @synthesize prevPhase=_prevPhase;
@property int currentPhase; // @synthesize currentPhase=_currentPhase;
@property int currentDetectType; // @synthesize currentDetectType=_currentDetectType;
- (void).cxx_destruct;	// IMP=0x00000001012b3f90
- (void)clear;	// IMP=0x00000001012b2f28

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSCENTERBaseResult.h"

@class NSString;

@interface TSCENTERDeviceDataReportResult : TSCENTERBaseResult
{
    NSString *_apdid;	// 8 = 0x8
    NSString *_token;	// 16 = 0x10
    NSString *_currentTime;	// 24 = 0x18
    NSString *_version;	// 32 = 0x20
    NSString *_vkeySwitch;	// 40 = 0x28
    NSString *_bugTrackSwitch;	// 48 = 0x30
    NSString *_appListVer;	// 56 = 0x38
}

@property(retain, nonatomic) NSString *appListVer; // @synthesize appListVer=_appListVer;
@property(retain, nonatomic) NSString *bugTrackSwitch; // @synthesize bugTrackSwitch=_bugTrackSwitch;
@property(retain, nonatomic) NSString *vkeySwitch; // @synthesize vkeySwitch=_vkeySwitch;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *currentTime; // @synthesize currentTime=_currentTime;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *apdid; // @synthesize apdid=_apdid;
- (void).cxx_destruct;	// IMP=0x0000000101146d58

@end


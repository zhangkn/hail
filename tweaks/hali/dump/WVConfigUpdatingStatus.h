//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WVConfigUpdatingStatus : NSObject
{
    NSString *_version;	// 8 = 0x8
    long long _fromType;	// 16 = 0x10
    double _start;	// 24 = 0x18
    NSString *_waitingVersion;	// 32 = 0x20
    long long _waitingFromType;	// 40 = 0x28
}

@property(nonatomic) long long waitingFromType; // @synthesize waitingFromType=_waitingFromType;
@property(retain, nonatomic) NSString *waitingVersion; // @synthesize waitingVersion=_waitingVersion;
@property(readonly, nonatomic) double start; // @synthesize start=_start;
@property(readonly, nonatomic) long long fromType; // @synthesize fromType=_fromType;
@property(readonly, nonatomic) NSString *version; // @synthesize version=_version;
- (void).cxx_destruct;	// IMP=0x0000000101b7a248
- (long long)waitingConfigFromType;	// IMP=0x0000000101b7a1a0
- (id)waitingConfigVersion;	// IMP=0x0000000101b7a190
- (void)recordConfig:(id)arg1 withFromType:(long long)arg2;	// IMP=0x0000000101b7a0f8
- (id)initWithVersion:(id)arg1 withFromType:(long long)arg2 withStart:(double)arg3;	// IMP=0x0000000101b7a044

@end


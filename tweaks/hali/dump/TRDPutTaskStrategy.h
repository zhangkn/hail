//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TRDPutTaskStrategy : NSObject
{
    NSString *_traceMode;	// 8 = 0x8
    long long _taskId;	// 16 = 0x10
    long long _endtime;	// 24 = 0x18
    long long _retrytime;	// 32 = 0x20
    long long _duration;	// 40 = 0x28
    NSString *_session;	// 48 = 0x30
}

@property(retain, nonatomic) NSString *session; // @synthesize session=_session;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(nonatomic) long long retrytime; // @synthesize retrytime=_retrytime;
@property(nonatomic) long long endtime; // @synthesize endtime=_endtime;
@property(nonatomic) long long taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) NSString *traceMode; // @synthesize traceMode=_traceMode;
- (void).cxx_destruct;	// IMP=0x0000000101a26d44
- (id)initWithJson:(id)arg1;	// IMP=0x0000000101a268c4

@end


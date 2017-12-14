//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TBAccsInstruct;

@interface RDTraceReceiver : NSObject
{
    TBAccsInstruct *_aInstruct;	// 8 = 0x8
    double _beginTime;	// 16 = 0x10
    double _endTime;	// 24 = 0x18
    long long _seq;	// 32 = 0x20
}

+ (id)shareInstance;	// IMP=0x0000000101a18c60
@property(nonatomic) long long seq; // @synthesize seq=_seq;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double beginTime; // @synthesize beginTime=_beginTime;
@property(retain, nonatomic) TBAccsInstruct *aInstruct; // @synthesize aInstruct=_aInstruct;
- (void).cxx_destruct;	// IMP=0x0000000101a1b008
- (void)sendTraceCommandExecuteResultErrCode:(unsigned long long)arg1 andErrorMsg:(id)arg2;	// IMP=0x0000000101a1ae8c
- (void)sendAccsExecuteStateCode:(unsigned long long)arg1;	// IMP=0x0000000101a1accc
- (id)buildLogInstruct:(_Bool)arg1;	// IMP=0x0000000101a1aac8
- (id)getTraceUrlParamsString;	// IMP=0x0000000101a1a94c
- (id)getRuntimeInfo;	// IMP=0x0000000101a1a718
- (id)getDebugId;	// IMP=0x0000000101a1a69c
- (void)setTraceDic:(id)arg1 category:(id)arg2;	// IMP=0x0000000101a1a440
- (_Bool)isEnableTLog;	// IMP=0x0000000101a1a404
- (_Bool)stopTrace;	// IMP=0x0000000101a1a140
- (void)startTrace;	// IMP=0x0000000101a19d5c
- (void)changeTraceInfo:(id)arg1;	// IMP=0x0000000101a1999c
- (void)startTraceTimer;	// IMP=0x0000000101a197e4
- (void)checkInstructValue;	// IMP=0x0000000101a193d0
- (void)addMtopTraceWithDic:(id)arg1;	// IMP=0x0000000101a18f0c
- (void)writeToTlogWithCategory:(id)arg1 debugId:(id)arg2 traceId:(id)arg3 content:(id)arg4;	// IMP=0x0000000101a18d34
- (id)init;	// IMP=0x0000000101a18c18

@end


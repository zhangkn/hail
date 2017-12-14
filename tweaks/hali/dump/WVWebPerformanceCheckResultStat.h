//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WVMonitorInfoProtocol.h"

@class NSString;

@interface WVWebPerformanceCheckResultStat : NSObject <WVMonitorInfoProtocol>
{
    double _score;	// 8 = 0x8
    NSString *_url;	// 16 = 0x10
    NSString *_version;	// 24 = 0x18
    NSString *_result;	// 32 = 0x20
    NSString *_bizCode;	// 40 = 0x28
}

+ (id)monitorMeasureRange:(id)arg1;	// IMP=0x0000000101b96b64
+ (id)monitorPoint;	// IMP=0x0000000101b96b38
@property(retain, nonatomic) NSString *bizCode; // @synthesize bizCode=_bizCode;
@property(retain, nonatomic) NSString *result; // @synthesize result=_result;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) double score; // @synthesize score=_score;
- (void).cxx_destruct;	// IMP=0x0000000101b96d68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


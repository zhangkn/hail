//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WVMonitorInfoProtocol.h"

@class NSString;

@interface WVWebViewStartMonitorStat : NSObject <WVMonitorInfoProtocol>
{
    NSString *_url;	// 8 = 0x8
    double _time;	// 16 = 0x10
}

+ (id)monitorMeasureRange:(id)arg1;	// IMP=0x0000000101b5eb18
+ (id)monitorPoint;	// IMP=0x0000000101b5eaec
@property(readonly, nonatomic) double time; // @synthesize time=_time;
@property(readonly, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;	// IMP=0x0000000101b5eca4
- (id)initWithURL:(id)arg1 withTime:(double)arg2;	// IMP=0x0000000101b5ebe0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

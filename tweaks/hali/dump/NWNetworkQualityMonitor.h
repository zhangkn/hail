//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NWQualityModule;

@interface NWNetworkQualityMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *myCustomQueue;	// 8 = 0x8
    _Bool isDemote;	// 16 = 0x10
    _Bool _isStart;	// 17 = 0x11
    int _qualityStatus;	// 20 = 0x14
    NWQualityModule *_qualityModule;	// 24 = 0x18
}

+ (id)shareInstance;	// IMP=0x00000001013c91d4
@property(retain) NWQualityModule *qualityModule; // @synthesize qualityModule=_qualityModule;
@property(nonatomic) int qualityStatus; // @synthesize qualityStatus=_qualityStatus;
@property(nonatomic) _Bool isStart; // @synthesize isStart=_isStart;
- (void).cxx_destruct;	// IMP=0x00000001013ca25c
- (int)sendCDNQualityExploreRequest:(id)arg1;	// IMP=0x00000001013c9f5c
- (int)sendWJASQualityExploreRequest:(id)arg1;	// IMP=0x00000001013c9cb8
- (void)sendQualityStatus:(_Bool)arg1;	// IMP=0x00000001013c993c
- (void)networkStatusChange:(id)arg1;	// IMP=0x00000001013c9918
- (int)currentNetworkQualityStatus;	// IMP=0x00000001013c990c
- (void)setqualityModule:(id)arg1;	// IMP=0x00000001013c9440
- (void)unDemoteNetworkQuality;	// IMP=0x00000001013c9430
- (void)demoteNetworkQuality;	// IMP=0x00000001013c941c
- (void)startMonitor;	// IMP=0x00000001013c93f8
- (id)init;	// IMP=0x00000001013c926c

@end


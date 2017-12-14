//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WVMonitorInfoProtocol.h"

@class NSString;

@interface WVPackageVerifyCacheMonitorInfo : NSObject <WVMonitorInfoProtocol>
{
    long long _maxCacheSize;	// 8 = 0x8
    long long _sumCacheSize;	// 16 = 0x10
}

+ (id)monitorPoint;	// IMP=0x0000000101bb473c
@property(nonatomic) long long sumCacheSize; // @synthesize sumCacheSize=_sumCacheSize;
@property(nonatomic) long long maxCacheSize; // @synthesize maxCacheSize=_maxCacheSize;
- (id)initWithMaxSize:(long long)arg1 sumSize:(long long)arg2;	// IMP=0x0000000101bb4768

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface UTNetworkQualitylog : NSObject
{
    float _wjas_rtt;	// 8 = 0x8
    float _cdn_rtt;	// 12 = 0xc
}

@property(nonatomic) float cdn_rtt; // @synthesize cdn_rtt=_cdn_rtt;
@property(nonatomic) float wjas_rtt; // @synthesize wjas_rtt=_wjas_rtt;
- (void)writeLog:(int)arg1;	// IMP=0x00000001013c8c98

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NetworkInfo : NSObject
{
    _Bool _networkAvailable;	// 8 = 0x8
    _Bool _wifiNetwork;	// 9 = 0x9
    _Bool _cellularNetwork;	// 10 = 0xa
    NSString *_ssid;	// 16 = 0x10
    NSString *_bssid;	// 24 = 0x18
    NSString *_type;	// 32 = 0x20
}

@property(nonatomic) _Bool cellularNetwork; // @synthesize cellularNetwork=_cellularNetwork;
@property(nonatomic) _Bool wifiNetwork; // @synthesize wifiNetwork=_wifiNetwork;
@property(readonly, nonatomic) _Bool networkAvailable; // @synthesize networkAvailable=_networkAvailable;
@property(readonly, retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *bssid; // @synthesize bssid=_bssid;
@property(retain, nonatomic) NSString *ssid; // @synthesize ssid=_ssid;
- (void).cxx_destruct;	// IMP=0x0000000101165028
- (id)initWith:(id)arg1;	// IMP=0x0000000101164ae0

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTTelephonyNetworkInfo, NSString;

@interface OrangeReachabilityManager : NSObject
{
    int _currentORGNetworkStatus;	// 8 = 0x8
    int _preORGNetworkStatus;	// 12 = 0xc
    struct __SCNetworkReachability *_reachabilityRef;	// 16 = 0x10
    NSString *ssid;	// 24 = 0x18
    CTTelephonyNetworkInfo *netInfo;	// 32 = 0x20
}

+ (_Bool)configureProxies;	// IMP=0x0000000101d4ca34
+ (id)shareInstance;	// IMP=0x0000000101d4c0d0
- (void).cxx_destruct;	// IMP=0x0000000101d4cba4
- (void)dealloc;	// IMP=0x0000000101d4cb4c
- (int)_ORGNetworkStatusForReachabilityFlags:(unsigned int)arg1;	// IMP=0x0000000101d4c914
- (int)currentORGNetworkStatusForiOS7:(int)arg1;	// IMP=0x0000000101d4c854
- (_Bool)checkInternetConnection;	// IMP=0x0000000101d4c7b0
- (int)_reachabilityStatus;	// IMP=0x0000000101d4c508
- (id)getWifiSSID;	// IMP=0x0000000101d4c4f8
- (id)currentORGNetworkStatusString;	// IMP=0x0000000101d4c460
- (int)preORGNetworkStatus;	// IMP=0x0000000101d4c450
- (int)currentORGNetworkStatus;	// IMP=0x0000000101d4c440
- (_Bool)_startNotifier;	// IMP=0x0000000101d4c294
- (id)init;	// IMP=0x0000000101d4c168

@end

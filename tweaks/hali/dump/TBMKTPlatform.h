//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MKTPlatformProtocol.h"

@class MKTMultiArray, NSString;

@interface TBMKTPlatform : NSObject <MKTPlatformProtocol>
{
    NSString *_appVersion;	// 8 = 0x8
    NSString *_appKey;	// 16 = 0x10
    MKTMultiArray *_callbackArray;	// 24 = 0x18
}

+ (void)setCustomHost:(id)arg1;	// IMP=0x000000010105e0a8
+ (id)netTime;	// IMP=0x000000010105e004
+ (id)getCofigByGroup:(id)arg1 key:(id)arg2;	// IMP=0x000000010105dffc
+ (id)host;	// IMP=0x000000010105dfd4
+ (id)serviceId:(long long)arg1;	// IMP=0x000000010105dfcc
+ (id)sid;	// IMP=0x000000010105df70
+ (id)appVersion;	// IMP=0x000000010105de34
+ (id)userId;	// IMP=0x000000010105dd9c
+ (id)deviceId;	// IMP=0x000000010105dd40
+ (id)appKey;	// IMP=0x000000010105dc30
+ (id)messageId;	// IMP=0x000000010105da34
+ (id)sharedInstance;	// IMP=0x000000010105d948
@property(retain, nonatomic) MKTMultiArray *callbackArray; // @synthesize callbackArray=_callbackArray;
@property(retain, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(retain, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
- (void).cxx_destruct;	// IMP=0x000000010105e1a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


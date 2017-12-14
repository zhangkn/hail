//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BeforeFilter.h"

@class NSArray, NSString;

@interface SetupRequestBeforeFilter : NSObject <BeforeFilter>
{
    NSString *_systemName;	// 8 = 0x8
    NSString *_systemVersion;	// 16 = 0x10
    NSString *_model;	// 24 = 0x18
    NSString *_ua;	// 32 = 0x20
    id _demoteManager;	// 40 = 0x28
    NSArray *_protocolHeaderList;	// 48 = 0x30
}

+ (id)getCurrentDeviceModel;	// IMP=0x0000000101d2a804
@property(retain, nonatomic) NSArray *protocolHeaderList; // @synthesize protocolHeaderList=_protocolHeaderList;
@property(retain, nonatomic) id demoteManager; // @synthesize demoteManager=_demoteManager;
@property(retain, nonatomic) NSString *ua; // @synthesize ua=_ua;
@property(retain, nonatomic) NSString *model; // @synthesize model=_model;
@property(retain, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(retain, nonatomic) NSString *systemName; // @synthesize systemName=_systemName;
- (void).cxx_destruct;	// IMP=0x0000000101d2c584
- (id)getProtocolHeaderList;	// IMP=0x0000000101d2c344
- (void)configSwitch:(id)arg1;	// IMP=0x0000000101d2c244
- (void)setup:(id)arg1;	// IMP=0x0000000101d2ac10
- (void)handle:(id)arg1 result:(id)arg2;	// IMP=0x0000000101d2ab90
- (id)getName;	// IMP=0x0000000101d2ab64
- (id)init;	// IMP=0x0000000101d2a8e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


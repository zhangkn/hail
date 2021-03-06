//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NWCoding.h"

#import "NSCopying.h"

@class NSMutableDictionary, NSString, NWSchemeModel;

@interface NWPolicyModel : NWCoding <NSCopying>
{
    NSMutableDictionary *_hotPolicys;	// 8 = 0x8
    NSMutableDictionary *_coldPolicys;	// 16 = 0x10
    NSString *_netType;	// 24 = 0x18
    NWSchemeModel *_schemeModel;	// 32 = 0x20
}

+ (_Bool)ignoreWhenEliminateHost:(id)arg1;	// IMP=0x00000001013dd170
+ (long long)currentSeconds;	// IMP=0x00000001013db9ec
@property(retain, nonatomic) NWSchemeModel *schemeModel; // @synthesize schemeModel=_schemeModel;
@property(retain, nonatomic) NSString *netType; // @synthesize netType=_netType;
@property(retain, nonatomic) NSMutableDictionary *coldPolicys; // @synthesize coldPolicys=_coldPolicys;
@property(retain, nonatomic) NSMutableDictionary *hotPolicys; // @synthesize hotPolicys=_hotPolicys;
- (void).cxx_destruct;	// IMP=0x00000001013dd300
- (void)dealloc;	// IMP=0x00000001013dd238
- (void)eliminateStrategy:(id)arg1 maxNum:(int)arg2 isHot:(_Bool)arg3;	// IMP=0x00000001013dcdec
- (void)eliminateColdStrategy;	// IMP=0x00000001013dcd98
- (void)eliminateHotStrategy;	// IMP=0x00000001013dcd78
- (id)coldPolicy;	// IMP=0x00000001013dcd18
- (void)joinColdHosts:(id)arg1 list:(id)arg2;	// IMP=0x00000001013dcc80
- (id)getResultPolicyList:(id)arg1;	// IMP=0x00000001013dcba8
- (id)mergePolicyList:(id)arg1 local:(id)arg2;	// IMP=0x00000001013dc718
- (void)updatePolicyWithOrigin:(id)arg1;	// IMP=0x00000001013dbbf8
- (void)exchangeList:(id)arg1 isHot:(_Bool)arg2;	// IMP=0x00000001013dba44
- (void)clearCold:(id)arg1;	// IMP=0x00000001013db97c
- (void)clearHot:(id)arg1;	// IMP=0x00000001013db964
- (void)updatePolicy:(id)arg1 raceTime:(long long)arg2;	// IMP=0x00000001013db2d0
- (id)getOriginPolicyList:(id)arg1;	// IMP=0x00000001013db19c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001013db004
- (id)initWithSchemeModel:(id)arg1;	// IMP=0x00000001013daf0c

@end


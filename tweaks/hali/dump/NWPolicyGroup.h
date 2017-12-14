//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NWCoding.h"

#import "NSCopying.h"
#import "NWPolicyGroupProtocol.h"

@class NSDictionary, NSMutableArray, NSString, NWPolicyHorseConfig, NWSchemeModel;

@interface NWPolicyGroup : NWCoding <NSCopying, NWPolicyGroupProtocol>
{
    int _serverType;	// 8 = 0x8
    NSMutableArray *_policys;	// 16 = 0x10
    NSDictionary *_historyRecords;	// 24 = 0x18
    NWPolicyHorseConfig *_hrConfig;	// 32 = 0x20
    NSString *_cname;	// 40 = 0x28
    NWSchemeModel *_schemeModel;	// 48 = 0x30
    long long _fetchAmdcTime;	// 56 = 0x38
    long long _amdcTTL;	// 64 = 0x40
    NSString *_etag;	// 72 = 0x48
}

+ (int)serverTypeWithHost:(id)arg1;	// IMP=0x00000001013d9964
@property(nonatomic) int serverType; // @synthesize serverType=_serverType;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(nonatomic) long long amdcTTL; // @synthesize amdcTTL=_amdcTTL;
@property(nonatomic) long long fetchAmdcTime; // @synthesize fetchAmdcTime=_fetchAmdcTime;
@property(retain, nonatomic) NWSchemeModel *schemeModel; // @synthesize schemeModel=_schemeModel;
@property(retain, nonatomic) NSString *cname; // @synthesize cname=_cname;
@property(retain, nonatomic) NWPolicyHorseConfig *hrConfig; // @synthesize hrConfig=_hrConfig;
@property(retain, nonatomic) NSDictionary *historyRecords; // @synthesize historyRecords=_historyRecords;
@property(retain, nonatomic) NSMutableArray *policys; // @synthesize policys=_policys;
- (void).cxx_destruct;	// IMP=0x00000001013da9bc
- (void)dealloc;	// IMP=0x00000001013da85c
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001013da50c
- (void)constructPolicyResult:(id)arg1;	// IMP=0x00000001013d9e94
- (id)initWithOrigin:(id)arg1;	// IMP=0x00000001013d9db8
- (id)initWithHost:(id)arg1;	// IMP=0x00000001013d9d40
- (void)transfromProperty:(id)arg1;	// IMP=0x00000001013d9b4c
- (void)defaultValue:(id)arg1;	// IMP=0x00000001013d9a3c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BrowserInfoGathererBase, CLLocation, CarrierInfoGatherer, NSArray, NSNumber, NSString, NetworkInfo, TDConfiguration;

@interface TrustDefenderMobileCore : NSObject
{
    _Bool _cancel;	// 8 = 0x8
    unsigned int _profilesSinceInitCount;	// 12 = 0xc
    NSString *_sessionID;	// 16 = 0x10
    CLLocation *_location;	// 24 = 0x18
    NSString *_fingerprintServer;	// 32 = 0x20
    NSString *_fingerprintServerURL;	// 40 = 0x28
    NSString *_orgID;	// 48 = 0x30
    TDConfiguration *_config;	// 56 = 0x38
    unsigned long long _options;	// 64 = 0x40
    NSString *_referrerURL;	// 72 = 0x48
    NSString *_url;	// 80 = 0x50
    NSString *_keychainAccessGroup;	// 88 = 0x58
    NSString *_apiKey;	// 96 = 0x60
    long long _dstDiff;	// 104 = 0x68
    long long _gmtOffset;	// 112 = 0x70
    long long _screenWidth;	// 120 = 0x78
    long long _screenHeight;	// 128 = 0x80
    NSString *_HTML5Cookie;	// 136 = 0x88
    NSString *_flashCookie;	// 144 = 0x90
    NSString *_cookie;	// 152 = 0x98
    NSString *_deviceFingerprint;	// 160 = 0xa0
    NSString *_deviceState;	// 168 = 0xa8
    CarrierInfoGatherer *_carrierInfo;	// 176 = 0xb0
    NSArray *_customAttributes;	// 184 = 0xb8
    NSString *_version;	// 192 = 0xc0
    BrowserInfoGathererBase *_browser;	// 200 = 0xc8
    NSString *_selfHash;	// 208 = 0xd0
    NSString *_deepLinks;	// 216 = 0xd8
    NSString *_appNameVer;	// 224 = 0xe0
    NSString *_deviceName;	// 232 = 0xe8
    NetworkInfo *_networkInfo;	// 240 = 0xf0
    unsigned long long _inodeCTime;	// 248 = 0xf8
    long long _bootTime;	// 256 = 0x100
    unsigned long long _freeSpace;	// 264 = 0x108
    unsigned long long _totalSpace;	// 272 = 0x110
    NSString *_osVersion;	// 280 = 0x118
    NSNumber *_encryptionStatus;	// 288 = 0x120
    double _deepLinkInterval;	// 296 = 0x128
    double _prepareRiskTransactionInterval;	// 304 = 0x130
    unsigned long long _programmaticallySetOptions;	// 312 = 0x138
}

@property(nonatomic) unsigned long long programmaticallySetOptions; // @synthesize programmaticallySetOptions=_programmaticallySetOptions;
@property(nonatomic) double prepareRiskTransactionInterval; // @synthesize prepareRiskTransactionInterval=_prepareRiskTransactionInterval;
@property(nonatomic) double deepLinkInterval; // @synthesize deepLinkInterval=_deepLinkInterval;
@property(nonatomic) unsigned int profilesSinceInitCount; // @synthesize profilesSinceInitCount=_profilesSinceInitCount;
@property(retain, nonatomic) NSNumber *encryptionStatus; // @synthesize encryptionStatus=_encryptionStatus;
@property(readonly, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(nonatomic) unsigned long long totalSpace; // @synthesize totalSpace=_totalSpace;
@property(nonatomic) unsigned long long freeSpace; // @synthesize freeSpace=_freeSpace;
@property(nonatomic) long long bootTime; // @synthesize bootTime=_bootTime;
@property(nonatomic) unsigned long long inodeCTime; // @synthesize inodeCTime=_inodeCTime;
@property(retain, nonatomic) NetworkInfo *networkInfo; // @synthesize networkInfo=_networkInfo;
@property(retain, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(retain, nonatomic) NSString *appNameVer; // @synthesize appNameVer=_appNameVer;
@property(retain) NSString *deepLinks; // @synthesize deepLinks=_deepLinks;
@property(retain, nonatomic) NSString *selfHash; // @synthesize selfHash=_selfHash;
@property(retain, nonatomic) BrowserInfoGathererBase *browser; // @synthesize browser=_browser;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(nonatomic) _Bool cancel; // @synthesize cancel=_cancel;
@property(retain, nonatomic) NSArray *customAttributes; // @synthesize customAttributes=_customAttributes;
@property(retain, nonatomic) CarrierInfoGatherer *carrierInfo; // @synthesize carrierInfo=_carrierInfo;
@property(retain, nonatomic) NSString *deviceState; // @synthesize deviceState=_deviceState;
@property(retain, nonatomic) NSString *deviceFingerprint; // @synthesize deviceFingerprint=_deviceFingerprint;
@property(retain, nonatomic) NSString *cookie; // @synthesize cookie=_cookie;
@property(retain, nonatomic) NSString *flashCookie; // @synthesize flashCookie=_flashCookie;
@property(retain, nonatomic) NSString *HTML5Cookie; // @synthesize HTML5Cookie=_HTML5Cookie;
@property(nonatomic) long long screenHeight; // @synthesize screenHeight=_screenHeight;
@property(nonatomic) long long screenWidth; // @synthesize screenWidth=_screenWidth;
@property(nonatomic) long long gmtOffset; // @synthesize gmtOffset=_gmtOffset;
@property(nonatomic) long long dstDiff; // @synthesize dstDiff=_dstDiff;
@property(retain, nonatomic) NSString *apiKey; // @synthesize apiKey=_apiKey;
@property(retain, nonatomic) NSString *keychainAccessGroup; // @synthesize keychainAccessGroup=_keychainAccessGroup;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *referrerURL; // @synthesize referrerURL=_referrerURL;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) TDConfiguration *config; // @synthesize config=_config;
@property(readonly, nonatomic) NSString *orgID; // @synthesize orgID=_orgID;
@property(readonly, nonatomic) NSString *fingerprintServerURL; // @synthesize fingerprintServerURL=_fingerprintServerURL;
@property(readonly, nonatomic) NSString *fingerprintServer; // @synthesize fingerprintServer=_fingerprintServer;
@property(copy, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (void).cxx_destruct;	// IMP=0x000000010116be88
- (id)riskDataBody:(id)arg1;	// IMP=0x0000000101167974
- (id)buildMobileStats;	// IMP=0x0000000101167844
- (id)riskDataURL;	// IMP=0x000000010116777c
- (id)proxyCheckBody;	// IMP=0x0000000101167634
- (_Bool)parseConfigFromServerResponse:(id)arg1;	// IMP=0x00000001011674c0
- (id)riskDataHTTPHeaders;	// IMP=0x00000001011671f8
- (void)prepareRiskTransaction;	// IMP=0x000000010116643c
- (id)configurationHTTPHeaders:(id)arg1;	// IMP=0x0000000101166224
- (id)configurationURL;	// IMP=0x0000000101165e40
- (id)dnsIPHostName;	// IMP=0x0000000101165be8
- (void)setURLS;	// IMP=0x0000000101165a08
- (void)setProfileOptions:(unsigned int)arg1;	// IMP=0x00000001011659cc
- (long long)setOrgID:(id)arg1;	// IMP=0x00000001011658ec
- (long long)setFingerprintServer:(id)arg1;	// IMP=0x00000001011656ac
- (void)reset;	// IMP=0x0000000101165464
- (id)init;	// IMP=0x00000001011650bc

@end

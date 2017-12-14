//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WVCommonUtil : NSObject
{
}

+ (long long)serverIntervalToLocal:(long long)arg1;	// IMP=0x0000000101b71c04
+ (double)foregroundTime;	// IMP=0x0000000101b71bf0
+ (unsigned long long)processorCount;	// IMP=0x0000000101b71b60
+ (_Bool)isStatusCodeSuccess:(long long)arg1;	// IMP=0x0000000101b71b38
+ (_Bool)isWIFI;	// IMP=0x0000000101b71ae0
+ (id)networkAccess;	// IMP=0x0000000101b71a84
+ (long long)networkStatus;	// IMP=0x0000000101b71a30
+ (id)stringByEncodeOccurrencesOfCharacters:(id)arg1 withString:(id)arg2;	// IMP=0x0000000101b718c4
+ (id)fixJSON2JSBug:(id)arg1;	// IMP=0x0000000101b717ac
+ (id)UUIDString;	// IMP=0x0000000101b7176c
+ (_Bool)checkIsForbiddenDomain:(id)arg1;	// IMP=0x0000000101b716cc
+ (_Bool)checkIsThirdPartyDomain:(id)arg1;	// IMP=0x0000000101b71650
+ (_Bool)checkIsSecurityDomain:(id)arg1;	// IMP=0x0000000101b715d4
+ (long long)getURLContentType:(id)arg1;	// IMP=0x0000000101b71558
+ (id)configURLWithPath:(id)arg1;	// IMP=0x0000000101b714a4
+ (id)trimUrlScheme:(id)arg1;	// IMP=0x0000000101b713ec
+ (void)completeScheme:(id)arg1;	// IMP=0x0000000101b71180
+ (id)completionUrlScheme:(id)arg1;	// IMP=0x0000000101b70ff0
+ (_Bool)testSampleRate:(double)arg1;	// IMP=0x0000000101b70f9c
+ (unsigned long long)randomUnsignedInteger:(unsigned long long)arg1;	// IMP=0x0000000101b70f68
+ (double)randomDouble;	// IMP=0x0000000101b70f44
+ (int)checkVersion:(id)arg1 withNewVersoin:(id)arg2;	// IMP=0x0000000101b885e4
+ (float)currentAppVersion;	// IMP=0x0000000101b88568
+ (id)replaceHTTPSWithHTTP:(id)arg1;	// IMP=0x0000000101b88428
+ (_Bool)isJSURL:(id)arg1;	// IMP=0x0000000101b88414
+ (_Bool)isHTMLURL:(id)arg1;	// IMP=0x0000000101b88400
+ (id)getOriginalParamFromRequestQuery:(id)arg1;	// IMP=0x0000000101b883ec
+ (id)urlByReplaceParamAndValue:(id)arg1 withParam:(id)arg2 withParamAndValue:(id)arg3;	// IMP=0x0000000101b88370
+ (id)urlByDeleteParamAndValue:(id)arg1 withParamAndValue:(id)arg2;	// IMP=0x0000000101b88318
+ (id)urlByDeleteParam:(id)arg1 withParam:(id)arg2;	// IMP=0x0000000101b882c0
+ (id)urlByAppendParamAndValue:(id)arg1 withParamAndValue:(id)arg2;	// IMP=0x0000000101b88268
+ (id)autoFixRandomParam:(id)arg1 withParamAndValue:(id)arg2;	// IMP=0x0000000101b881b4
+ (id)fetchMimeTypeWithURLPath:(id)arg1;	// IMP=0x0000000101b881a0
+ (id)getBaseURL:(id)arg1;	// IMP=0x0000000101b8818c
+ (id)getResourcePathWithoutParam:(id)arg1;	// IMP=0x0000000101b88178
+ (_Bool)checkIshveParam:(id)arg1 withParamValue:(id)arg2;	// IMP=0x0000000101b88124
+ (id)getParamValueFromUrl:(id)arg1 withParamName:(id)arg2;	// IMP=0x0000000101b88030
+ (id)urlWithoutHash:(id)arg1;	// IMP=0x0000000101b8801c
+ (id)urlWithoutQueryAndHash:(id)arg1;	// IMP=0x0000000101b88008
+ (void)updateResourceDic:(id)arg1;	// IMP=0x0000000101b88004
+ (void)initResourceDic;	// IMP=0x0000000101b88000
+ (int)checkNetConnectionSync;	// IMP=0x0000000101b87ff4
+ (int)checkNetConnection;	// IMP=0x0000000101b87fb8
+ (_Bool)checkIsBlankUrl:(id)arg1;	// IMP=0x0000000101b87fa4
+ (void)WindVaneLog:(id)arg1;	// IMP=0x0000000101b87fa0
+ (_Bool)checkTime:(id)arg1 withStaticTime:(int)arg2;	// IMP=0x0000000101b87ee8
+ (id)md5WithData:(id)arg1;	// IMP=0x0000000101b87ed8
+ (id)md5:(id)arg1;	// IMP=0x0000000101b87ec8
+ (_Bool)isDebugMode;	// IMP=0x0000000101b87eb4
+ (_Bool)hasWindVaneUA:(id)arg1;	// IMP=0x0000000101b87d68
+ (id)addDefaultParamForURL:(id)arg1;	// IMP=0x0000000101b87cd0
+ (unsigned int)randomInt32:(unsigned int)arg1;	// IMP=0x0000000101b87cb0
+ (long long)updateNetworkStatus;	// IMP=0x0000000101b87ca4
+ (id)getParamFromRequestQuery:(id)arg1;	// IMP=0x0000000101b87c8c
+ (id)getParamFromRequestQuery:(id)arg1 withStopWord:(id)arg2;	// IMP=0x0000000101b87a40
+ (id)getCameraStr:(id)arg1;	// IMP=0x0000000101b879d8
+ (_Bool)isBlank:(id)arg1;	// IMP=0x0000000101b879c4

@end


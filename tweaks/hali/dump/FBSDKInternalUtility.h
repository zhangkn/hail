//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBSDKInternalUtility : NSObject
{
}

+ (Class)resolveBoltsClassWithName:(id)arg1;	// IMP=0x00000001012612c4
+ (_Bool)areAllPermissionsPublishPermissions:(id)arg1;	// IMP=0x0000000101261160
+ (_Bool)areAllPermissionsReadPermissions:(id)arg1;	// IMP=0x0000000101260ffc
+ (_Bool)isPublishPermission:(id)arg1;	// IMP=0x0000000101260f40
+ (_Bool)isRegisteredCanOpenURLScheme:(id)arg1;	// IMP=0x0000000101260e34
+ (void)checkRegisteredCanOpenURLScheme:(id)arg1;	// IMP=0x0000000101260ca8
+ (_Bool)isRegisteredURLScheme:(id)arg1;	// IMP=0x0000000101260a6c
+ (id)hexadecimalStringFromData:(id)arg1;	// IMP=0x0000000101260978
+ (id)topMostViewController;	// IMP=0x0000000101260878
+ (void)validateFacebookReservedURLSchemes;	// IMP=0x000000010126069c
+ (void)validateURLSchemes;	// IMP=0x000000010126055c
+ (id)validateRequiredClientAccessToken;	// IMP=0x000000010126044c
+ (void)validateAppID;	// IMP=0x00000001012603c8
+ (id)_convertObjectToJSONObject:(id)arg1 invalidObjectHandler:(CDUnknownBlockType)arg2 stop:(_Bool *)arg3;	// IMP=0x000000010125fe80
+ (long long)_compareOperatingSystemVersion:(CDStruct_2ec95fd7)arg1 toVersion:(CDStruct_2ec95fd7)arg2;	// IMP=0x000000010125fe2c
+ (_Bool)isMessengerAppInstalled;	// IMP=0x000000010125fc74
+ (_Bool)isFacebookAppInstalled;	// IMP=0x000000010125fb50
+ (id)viewControllerForView:(id)arg1;	// IMP=0x000000010125faa0
+ (void)unregisterTransientObject:(id)arg1;	// IMP=0x000000010125f904
+ (void)registerTransientObject:(id)arg1;	// IMP=0x000000010125f818
+ (void)deleteFacebookCookies;	// IMP=0x000000010125f668
+ (id)URLWithScheme:(id)arg1 host:(id)arg2 path:(id)arg3 queryParameters:(id)arg4 error:(id *)arg5;	// IMP=0x000000010125f3c8
+ (_Bool)shouldManuallyAdjustOrientation;	// IMP=0x000000010125f378
+ (id)queryStringWithDictionary:(id)arg1 error:(id *)arg2 invalidObjectHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010125eedc
+ (CDStruct_2ec95fd7)operatingSystemVersion;	// IMP=0x000000010125ebfc
+ (id)objectForJSONString:(id)arg1 error:(id *)arg2;	// IMP=0x000000010125eb60
+ (_Bool)object:(id)arg1 isEqualToObject:(id)arg2;	// IMP=0x000000010125eadc
+ (id)JSONStringForObject:(id)arg1 error:(id *)arg2 invalidObjectHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010125e948
+ (_Bool)isUIKitRunTimeVersionAtLeast:(int)arg1;	// IMP=0x000000010125e8c4
+ (_Bool)isUIKitLinkTimeVersionAtLeast:(int)arg1;	// IMP=0x000000010125e840
+ (_Bool)isSafariBundleIdentifier:(id)arg1;	// IMP=0x000000010125e7d4
+ (_Bool)isOSRunTimeVersionAtLeast:(CDStruct_2ec95fd7)arg1;	// IMP=0x000000010125e76c
+ (_Bool)isFacebookBundleIdentifier:(id)arg1;	// IMP=0x000000010125e700
+ (_Bool)isBrowserURL:(id)arg1;	// IMP=0x000000010125e660
+ (id)facebookURLWithHostPrefix:(id)arg1 path:(id)arg2 queryParameters:(id)arg3 defaultVersion:(id)arg4 error:(id *)arg5;	// IMP=0x000000010125e270
+ (id)facebookURLWithHostPrefix:(id)arg1 path:(id)arg2 queryParameters:(id)arg3 error:(id *)arg4;	// IMP=0x000000010125e1e0
+ (void)extractPermissionsFromResponse:(id)arg1 grantedPermissions:(id)arg2 declinedPermissions:(id)arg3;	// IMP=0x000000010125df94
+ (void)dictionary:(id)arg1 setObject:(id)arg2 forKey:(id)arg3;	// IMP=0x000000010125df28
+ (_Bool)dictionary:(id)arg1 setJSONStringForObject:(id)arg2 forKey:(id)arg3 error:(id *)arg4;	// IMP=0x000000010125de48
+ (unsigned long long)currentTimeInMilliseconds;	// IMP=0x000000010125ddf8
+ (id)convertRequestValue:(id)arg1;	// IMP=0x000000010125dd30
+ (id)bundleForStrings;	// IMP=0x000000010125dbec
+ (void)array:(id)arg1 addObject:(id)arg2;	// IMP=0x000000010125dba8
+ (id)dictionaryFromFBURL:(id)arg1;	// IMP=0x000000010125da34
+ (id)appURLWithHost:(id)arg1 path:(id)arg2 queryParameters:(id)arg3 error:(id *)arg4;	// IMP=0x000000010125d960
+ (id)appURLScheme;	// IMP=0x000000010125d880
- (id)init;	// IMP=0x000000010125fd98

@end


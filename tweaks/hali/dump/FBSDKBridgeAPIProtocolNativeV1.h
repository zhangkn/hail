//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSDKBridgeAPIProtocol.h"

@class NSString, UIPasteboard;

@interface FBSDKBridgeAPIProtocolNativeV1 : NSObject <FBSDKBridgeAPIProtocol>
{
    _Bool _includeAppIcon;	// 8 = 0x8
    NSString *_appScheme;	// 16 = 0x10
    unsigned long long _dataLengthThreshold;	// 24 = 0x18
    UIPasteboard *_pasteboard;	// 32 = 0x20
}

+ (void)clearData:(id)arg1 fromPasteboardOnApplicationDidBecomeActive:(id)arg2;	// IMP=0x000000010124a468
@property(readonly, nonatomic) UIPasteboard *pasteboard; // @synthesize pasteboard=_pasteboard;
@property(readonly, nonatomic) _Bool includeAppIcon; // @synthesize includeAppIcon=_includeAppIcon;
@property(readonly, nonatomic) unsigned long long dataLengthThreshold; // @synthesize dataLengthThreshold=_dataLengthThreshold;
@property(readonly, copy, nonatomic) NSString *appScheme; // @synthesize appScheme=_appScheme;
- (void).cxx_destruct;	// IMP=0x000000010124a6ec
- (id)_JSONStringForObject:(id)arg1 enablePasteboard:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000101249ee0
- (id)_errorWithDictionary:(id)arg1;	// IMP=0x0000000101249d38
- (id)_bridgeParametersWithActionID:(id)arg1 error:(id *)arg2;	// IMP=0x0000000101249bcc
- (id)_appIcon;	// IMP=0x0000000101249a84
- (id)responseParametersForActionID:(id)arg1 queryParameters:(id)arg2 cancelled:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x000000010124962c
- (id)requestURLWithActionID:(id)arg1 scheme:(id)arg2 methodName:(id)arg3 methodVersion:(id)arg4 parameters:(id)arg5 error:(id *)arg6;	// IMP=0x00000001012493a8
- (id)init;	// IMP=0x00000001012492ec
- (id)initWithAppScheme:(id)arg1 pasteboard:(id)arg2 dataLengthThreshold:(unsigned long long)arg3 includeAppIcon:(_Bool)arg4;	// IMP=0x0000000101249204
- (id)initWithAppScheme:(id)arg1;	// IMP=0x0000000101249174

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

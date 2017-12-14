//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WVBridgeComplexHandlerInfo.h"

@interface WVBridgeProtocolHandlerInfo : WVBridgeComplexHandlerInfo
{
    Class _bridgeClass;	// 8 = 0x8
    SEL _bridgeSEL;	// 16 = 0x10
    _Bool _oldProtocol;	// 24 = 0x18
    unsigned long long _instanceScope;	// 32 = 0x20
}

+ (id)handlerInfoWithClass:(Class)arg1 withSEL:(SEL)arg2 withOldSEL:(SEL)arg3;	// IMP=0x0000000101b6cb1c
- (id)description;	// IMP=0x0000000101b6d0b8
- (void)invoke:(id)arg1 withParams:(id)arg2 withCallbackContext:(id)arg3 withContext:(id)arg4;	// IMP=0x0000000101b6cf60
- (id)createInstance;	// IMP=0x0000000101b6cec8
- (_Bool)supportContext;	// IMP=0x0000000101b6cec0
- (unsigned long long)instanceScope;	// IMP=0x0000000101b6ceb0
- (id)className;	// IMP=0x0000000101b6cea0
- (id)initWithClass:(Class)arg1 withSEL:(SEL)arg2;	// IMP=0x0000000101b6ce0c

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WVBridgeHandlerInfo.h"

@class NSString;

@interface WVBridgeComplexHandlerInfo : WVBridgeHandlerInfo
{
    NSString *_className;	// 16 = 0x10
    unsigned long long _instanceScope;	// 24 = 0x18
}

@property(readonly, nonatomic) unsigned long long instanceScope; // @synthesize instanceScope=_instanceScope;
@property(readonly, nonatomic) NSString *className; // @synthesize className=_className;
- (void).cxx_destruct;	// IMP=0x0000000101b6c3b4
- (void)invoke:(id)arg1 withParams:(id)arg2 withCallbackContext:(id)arg3 withContext:(id)arg4;	// IMP=0x0000000101b6c390
- (id)createInstance;	// IMP=0x0000000101b6c388

@end


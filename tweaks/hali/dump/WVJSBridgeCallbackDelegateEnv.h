//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WVBridgeDelegate.h"

@class NSString;

@interface WVJSBridgeCallbackDelegateEnv : NSObject <WVBridgeDelegate>
{
    id <WVJSBridgeCallbackDelegate> _delegate;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0000000101b4aa34
@property(retain, nonatomic) id <WVJSBridgeCallbackDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000101b4aca8
- (void)wvBridgeDispatchEvent:(id)arg1 withParam:(id)arg2 withCallback:(CDUnknownBlockType)arg3;	// IMP=0x0000000101b4abe8
- (void)wvBridgeOnFailure:(id)arg1 withRet:(id)arg2 withResult:(id)arg3;	// IMP=0x0000000101b4ab74
- (void)wvBridgeOnSuccess:(id)arg1 withRet:(id)arg2 withResult:(id)arg3 keepAlive:(_Bool)arg4;	// IMP=0x0000000101b4ab00
- (id)wvBridgeReferrer;	// IMP=0x0000000101b4aae8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

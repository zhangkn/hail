//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WVURLProtocolInterface.h"

@class NSDictionary, NSString;

@interface WVCacheURLProtocol : NSObject <WVURLProtocolInterface>
{
    NSDictionary *_externalHeaders;	// 8 = 0x8
}

@property(retain, nonatomic) NSDictionary *externalHeaders; // @synthesize externalHeaders=_externalHeaders;
- (void).cxx_destruct;	// IMP=0x0000000101b44d20
- (_Bool)canLoadRequest:(id)arg1 withSuccess:(CDUnknownBlockType)arg2 withFailure:(CDUnknownBlockType)arg3;	// IMP=0x0000000101b44b50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


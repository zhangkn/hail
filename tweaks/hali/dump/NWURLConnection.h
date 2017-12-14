//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURLRequest, NWBaseConnection, NWRequestContext;

@interface NWURLConnection : NSObject
{
    NWBaseConnection *_connection;	// 8 = 0x8
    NWRequestContext *_context;	// 16 = 0x10
    NSURLRequest *_request;	// 24 = 0x18
    id <NWURLConnectionDelegate> _delegate;	// 32 = 0x20
}

+ (_Bool)existAccelerateConnection:(id)arg1 withScheme:(id)arg2;	// IMP=0x0000000101399e1c
+ (void)initialize;	// IMP=0x0000000101399e18
@property(readonly, nonatomic) __weak id <NWURLConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;	// IMP=0x000000010139afa4
- (void)notifyRequestDidStart:(id)arg1;	// IMP=0x000000010139aec4
- (void)preprocess:(id)arg1;	// IMP=0x000000010139ac30
- (id)dispatch:(id)arg1;	// IMP=0x000000010139a664
- (void)cancel;	// IMP=0x000000010139a644
- (void)retry;	// IMP=0x000000010139a3f8
- (void)start;	// IMP=0x000000010139a3e8
- (void)startWithOption:(id)arg1;	// IMP=0x000000010139a15c
- (_Bool)isAccelerated;	// IMP=0x000000010139a130
- (id)initWithRequest:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000101399f24

@end

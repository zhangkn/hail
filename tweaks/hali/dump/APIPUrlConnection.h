//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APIPConnectionControl.h"
#import "NSURLConnectionDataDelegate.h"
#import "NSURLConnectionDelegate.h"

@class APIPConnectionInfo, APIPNetSecurity, NSOutputStream, NSString, NSURLConnection;

@interface APIPUrlConnection : NSObject <NSURLConnectionDataDelegate, NSURLConnectionDelegate, APIPConnectionControl>
{
    NSOutputStream *_outputStream;	// 8 = 0x8
    APIPConnectionInfo *_connectionInfo;	// 16 = 0x10
    NSURLConnection *_currentConnection;	// 24 = 0x18
    long long _totalBytesRead;	// 32 = 0x20
    APIPNetSecurity *_securityPolicy;	// 40 = 0x28
}

@property(retain) APIPNetSecurity *securityPolicy; // @synthesize securityPolicy=_securityPolicy;
@property(nonatomic) long long totalBytesRead; // @synthesize totalBytesRead=_totalBytesRead;
@property(retain) NSURLConnection *currentConnection; // @synthesize currentConnection=_currentConnection;
@property(retain, nonatomic) APIPConnectionInfo *connectionInfo; // @synthesize connectionInfo=_connectionInfo;
- (void).cxx_destruct;	// IMP=0x00000001010d9908
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;	// IMP=0x00000001010d9750
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;	// IMP=0x00000001010d961c
- (void)connectionDidFinishLoading:(id)arg1;	// IMP=0x00000001010d92f4
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;	// IMP=0x00000001010d9190
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;	// IMP=0x00000001010d9124
- (void)connection:(id)arg1 didReceiveData:(id)arg2;	// IMP=0x00000001010d8cd0
- (void)connection:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000001010d8b1c
- (_Bool)connectionShouldUseCredentialStorage:(id)arg1;	// IMP=0x00000001010d8b14
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;	// IMP=0x00000001010d86a8
- (void)connectionWillBeCanceled;	// IMP=0x00000001010d8668
- (void)connectionShouldStart;	// IMP=0x00000001010d83b8
@property(retain, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
- (void)dealloc;	// IMP=0x00000001010d8210
- (id)initWithConnectionInfo:(id)arg1;	// IMP=0x00000001010d8138

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


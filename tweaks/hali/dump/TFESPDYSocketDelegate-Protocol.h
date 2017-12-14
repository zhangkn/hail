//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSError, NSRunLoop, NSString, TFESPDYSocket;

@protocol TFESPDYSocketDelegate <NSObject>

@optional
- (_Bool)socket:(TFESPDYSocket *)arg1 securedWithTrust:(struct __SecTrust *)arg2;
- (double)socket:(TFESPDYSocket *)arg1 willTimeoutWriteWithTag:(long long)arg2 elapsed:(double)arg3 bytesDone:(unsigned long long)arg4;
- (double)socket:(TFESPDYSocket *)arg1 willTimeoutReadWithTag:(long long)arg2 elapsed:(double)arg3 bytesDone:(unsigned long long)arg4;
- (void)socket:(TFESPDYSocket *)arg1 didWritePartialDataOfLength:(unsigned long long)arg2 tag:(long long)arg3;
- (void)socket:(TFESPDYSocket *)arg1 didWriteDataWithTag:(long long)arg2;
- (void)socket:(TFESPDYSocket *)arg1 didReadPartialDataOfLength:(unsigned long long)arg2 tag:(long long)arg3;
- (void)socket:(TFESPDYSocket *)arg1 didReadData:(NSData *)arg2 withTag:(long long)arg3;
- (void)socket:(TFESPDYSocket *)arg1 didConnectToHost:(NSString *)arg2 port:(unsigned short)arg3;
- (_Bool)socketWillConnect:(TFESPDYSocket *)arg1;
- (NSRunLoop *)socket:(TFESPDYSocket *)arg1 wantsRunLoopForNewSocket:(TFESPDYSocket *)arg2;
- (void)socket:(TFESPDYSocket *)arg1 didAcceptNewSocket:(TFESPDYSocket *)arg2;
- (void)socketDidDisconnect:(TFESPDYSocket *)arg1;
- (void)socket:(TFESPDYSocket *)arg1 willDisconnectWithError:(NSError *)arg2;
@end


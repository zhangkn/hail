//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NWSPDYProxy : NSObject
{
    unsigned short _proxyPort;	// 8 = 0x8
    NSString *_proxyHost;	// 16 = 0x10
    NSString *_proxyUserName;	// 24 = 0x18
    NSString *_proxyUserPasswd;	// 32 = 0x20
}

@property(copy, nonatomic) NSString *proxyUserPasswd; // @synthesize proxyUserPasswd=_proxyUserPasswd;
@property(copy, nonatomic) NSString *proxyUserName; // @synthesize proxyUserName=_proxyUserName;
@property(nonatomic) unsigned short proxyPort; // @synthesize proxyPort=_proxyPort;
@property(copy, nonatomic) NSString *proxyHost; // @synthesize proxyHost=_proxyHost;
- (void).cxx_destruct;	// IMP=0x0000000101399ca0
- (id)initWithHost:(id)arg1 port:(unsigned short)arg2 userName:(id)arg3 userPasswd:(id)arg4;	// IMP=0x0000000101399b30

@end


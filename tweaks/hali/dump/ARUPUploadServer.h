//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ARUPUploadServer : NSObject
{
    _Bool _encrypt;	// 8 = 0x8
    NSString *_ip;	// 16 = 0x10
    NSString *_port;	// 24 = 0x18
}

@property(readonly, nonatomic) _Bool encrypt; // @synthesize encrypt=_encrypt;
@property(readonly, nonatomic) NSString *port; // @synthesize port=_port;
@property(readonly, nonatomic) NSString *ip; // @synthesize ip=_ip;
- (void).cxx_destruct;	// IMP=0x00000001011878b8
- (id)initWithIP:(id)arg1 port:(id)arg2 encrypt:(_Bool)arg3;	// IMP=0x00000001011877c0

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class Protocol;

@interface RACDelegateProxy : NSObject
{
    Protocol *_protocol;	// 8 = 0x8
    id _rac_proxiedDelegate;	// 16 = 0x10
}

@property(nonatomic) id rac_proxiedDelegate; // @synthesize rac_proxiedDelegate=_rac_proxiedDelegate;
- (void).cxx_destruct;	// IMP=0x0000000101434e20
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000101434d78
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0000000101434cc0
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000101434c4c
- (_Bool)isProxy;	// IMP=0x0000000101434c44
- (id)signalForSelector:(SEL)arg1;	// IMP=0x0000000101434c2c
- (id)initWithProtocol:(id)arg1;	// IMP=0x0000000101434b74

@end


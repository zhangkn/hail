//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class RACSerialDisposable, RACSignal, RACSubject;

@interface RACMulticastConnection : NSObject
{
    RACSubject *_signal;	// 8 = 0x8
    int _hasConnected;	// 16 = 0x10
    RACSignal *_sourceSignal;	// 24 = 0x18
    RACSerialDisposable *_serialDisposable;	// 32 = 0x20
}

@property(retain) RACSerialDisposable *serialDisposable; // @synthesize serialDisposable=_serialDisposable;
@property(readonly, nonatomic) RACSignal *sourceSignal; // @synthesize sourceSignal=_sourceSignal;
@property(readonly, nonatomic) RACSignal *signal; // @synthesize signal=_signal;
- (void).cxx_destruct;	// IMP=0x000000010143a5e8
- (id)autoconnect;	// IMP=0x000000010143a1e8
- (id)connect;	// IMP=0x000000010143a10c
- (id)initWithSourceSignal:(id)arg1 subject:(id)arg2;	// IMP=0x000000010143a000

@end


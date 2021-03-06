//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface BFCancellationToken : NSObject
{
    _Bool _cancellationRequested;	// 8 = 0x8
    _Bool _disposed;	// 9 = 0x9
    NSMutableArray *_registrations;	// 16 = 0x10
    NSObject *_lock;	// 24 = 0x18
}

@property(nonatomic) _Bool disposed; // @synthesize disposed=_disposed;
@property(retain, nonatomic) NSObject *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableArray *registrations; // @synthesize registrations=_registrations;
- (void).cxx_destruct;	// IMP=0x00000001008ca244
- (void)throwIfDisposed;	// IMP=0x00000001008ca14c
- (void)dispose;	// IMP=0x00000001008ca078
- (void)cancelAfterDelay:(int)arg1;	// IMP=0x00000001008c9f30
- (void)cancelPrivate;	// IMP=0x00000001008c9f24
- (void)unregisterRegistration:(id)arg1;	// IMP=0x00000001008c9e68
- (id)registerCancellationObserverWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001008c9d64
- (void)notifyCancellation:(id)arg1;	// IMP=0x00000001008c9c54
- (void)cancel;	// IMP=0x00000001008c9b44
@property(readonly, nonatomic, getter=isCancellationRequested) _Bool cancellationRequested; // @synthesize cancellationRequested=_cancellationRequested;
- (id)init;	// IMP=0x00000001008c9a20

@end


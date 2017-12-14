//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RACDisposable.h"

@interface RACCompoundDisposable : RACDisposable
{
    int _spinLock;	// 8 = 0x8
    RACDisposable *_inlineDisposables[2];	// 16 = 0x10
    struct __CFArray *_disposables;	// 32 = 0x20
    _Bool _disposed;	// 40 = 0x28
}

+ (id)compoundDisposableWithDisposables:(id)arg1;	// IMP=0x000000010143433c
+ (id)compoundDisposable;	// IMP=0x0000000101434310
- (void).cxx_destruct;	// IMP=0x0000000101434b34
- (void)dispose;	// IMP=0x00000001014349dc
- (void)removeDisposable:(id)arg1;	// IMP=0x0000000101434854
- (void)addDisposable:(id)arg1;	// IMP=0x0000000101434698
- (void)dealloc;	// IMP=0x000000010143460c
- (id)initWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010143453c
- (id)initWithDisposables:(id)arg1;	// IMP=0x00000001014343a0
- (_Bool)isDisposed;	// IMP=0x00000001014342c8

@end

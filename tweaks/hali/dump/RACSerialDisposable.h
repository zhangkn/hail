//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RACDisposable.h"

@interface RACSerialDisposable : RACDisposable
{
    RACDisposable *_disposable;	// 8 = 0x8
    _Bool _disposed;	// 16 = 0x10
    int _spinLock;	// 20 = 0x14
}

+ (id)serialDisposableWithDisposable:(id)arg1;	// IMP=0x000000010143f944
- (void).cxx_destruct;	// IMP=0x000000010143fbb8
- (void)dispose;	// IMP=0x000000010143fb1c
- (id)swapInDisposable:(id)arg1;	// IMP=0x000000010143fa64
- (id)initWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010143f9b4
@property(retain) RACDisposable *disposable;
- (_Bool)isDisposed;	// IMP=0x000000010143f8c0

@end


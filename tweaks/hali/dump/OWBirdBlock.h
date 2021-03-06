//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMethodSignature;

@interface OWBirdBlock : NSObject
{
    int _flags;	// 8 = 0x8
    NSMethodSignature *_blockSignature;	// 16 = 0x10
    unsigned long long _size;	// 24 = 0x18
    id _block;	// 32 = 0x20
}

@property(readonly, nonatomic) id block; // @synthesize block=_block;
@property(readonly, nonatomic) unsigned long long size; // @synthesize size=_size;
@property(readonly, nonatomic) NSMethodSignature *blockSignature; // @synthesize blockSignature=_blockSignature;
@property(readonly, nonatomic) int flags; // @synthesize flags=_flags;
- (id)description;	// IMP=0x0000000101cc2684
- (id)initWithBlock:(id)arg1;	// IMP=0x0000000101cc22ac

@end


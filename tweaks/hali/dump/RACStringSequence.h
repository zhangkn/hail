//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RACSequence.h"

@class NSString;

@interface RACStringSequence : RACSequence
{
    NSString *_string;	// 8 = 0x8
    unsigned long long _offset;	// 16 = 0x10
}

+ (id)sequenceWithString:(id)arg1 offset:(unsigned long long)arg2;	// IMP=0x0000000101456404
@property(readonly, nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(readonly, copy, nonatomic) NSString *string; // @synthesize string=_string;
- (void).cxx_destruct;	// IMP=0x00000001014568a4
- (id)description;	// IMP=0x0000000101456788
- (id)array;	// IMP=0x0000000101456608
- (id)tail;	// IMP=0x0000000101456540
- (id)head;	// IMP=0x00000001014564cc

@end


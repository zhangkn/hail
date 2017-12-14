//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData;

@interface TFESPDYSocketReadOp : NSObject
{
    NSMutableData *_buffer;	// 8 = 0x8
    unsigned long long _bytesRead;	// 16 = 0x10
    unsigned long long _startOffset;	// 24 = 0x18
    unsigned long long _maxLength;	// 32 = 0x20
    unsigned long long _fixedLength;	// 40 = 0x28
    unsigned long long _originalBufferLength;	// 48 = 0x30
    double _timeout;	// 56 = 0x38
    _Bool _bufferOwner;	// 64 = 0x40
    long long _tag;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000001010872f4
- (unsigned long long)safeReadLength;	// IMP=0x0000000101087200
- (id)initWithData:(id)arg1 startOffset:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 timeout:(double)arg4 fixedLength:(unsigned long long)arg5 tag:(long long)arg6;	// IMP=0x000000010108706c

@end


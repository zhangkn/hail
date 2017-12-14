//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface GPBCodedInputStream : NSObject
{
    struct GPBCodedInputStreamState state_;	// 8 = 0x8
    NSData *buffer_;	// 56 = 0x38
}

+ (id)streamWithData:(id)arg1;	// IMP=0x00000001017bf8e0
- (long long)readSInt64;	// IMP=0x00000001017c047c
- (int)readSInt32;	// IMP=0x00000001017c0450
- (long long)readSFixed64;	// IMP=0x00000001017c040c
- (int)readSFixed32;	// IMP=0x00000001017c03c8
- (int)readEnum;	// IMP=0x00000001017c03b8
- (unsigned int)readUInt32;	// IMP=0x00000001017c03a8
- (id)readBytes;	// IMP=0x00000001017c0380
- (void)readMapEntry:(id)arg1 extensionRegistry:(id)arg2 field:(id)arg3 parentMessage:(id)arg4;	// IMP=0x00000001017c0204
- (void)readMessage:(id)arg1 extensionRegistry:(id)arg2;	// IMP=0x00000001017c0098
- (void)readUnknownGroup:(int)arg1 message:(id)arg2;	// IMP=0x00000001017bff8c
- (void)readGroup:(int)arg1 message:(id)arg2 extensionRegistry:(id)arg3;	// IMP=0x00000001017bfe70
- (id)readString;	// IMP=0x00000001017bfe48
- (_Bool)readBool;	// IMP=0x00000001017bfe20
- (unsigned int)readFixed32;	// IMP=0x00000001017bfddc
- (unsigned long long)readFixed64;	// IMP=0x00000001017bfd98
- (int)readInt32;	// IMP=0x00000001017bfd88
- (long long)readInt64;	// IMP=0x00000001017bfd78
- (unsigned long long)readUInt64;	// IMP=0x00000001017bfd68
- (float)readFloat;	// IMP=0x00000001017bfd20
- (double)readDouble;	// IMP=0x00000001017bfcd8
- (unsigned long long)position;	// IMP=0x00000001017bfcc4
- (_Bool)isAtEnd;	// IMP=0x00000001017bfc94
- (void)skipMessage;	// IMP=0x00000001017bfc38
- (_Bool)skipField:(int)arg1;	// IMP=0x00000001017bfa98
- (void)checkLastTagWas:(int)arg1;	// IMP=0x00000001017bfa38
- (int)readTag;	// IMP=0x00000001017bfa28
- (void)dealloc;	// IMP=0x00000001017bf9cc
- (id)initWithData:(id)arg1;	// IMP=0x00000001017bf920

@end

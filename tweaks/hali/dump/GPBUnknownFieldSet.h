//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface GPBUnknownFieldSet : NSObject <NSCopying>
{
    struct __CFDictionary *fields_;	// 8 = 0x8
}

+ (_Bool)isFieldTag:(int)arg1;	// IMP=0x0000000101792f20
- (void)getTags:(int *)arg1;	// IMP=0x00000001017935ec
- (void)mergeFromCodedInputStream:(id)arg1;	// IMP=0x0000000101793588
- (void)addUnknownMapEntry:(int)arg1 value:(id)arg2;	// IMP=0x0000000101793550
- (void)mergeMessageSetMessage:(int)arg1 data:(id)arg2;	// IMP=0x0000000101793518
- (_Bool)mergeFieldFrom:(int)arg1 input:(id)arg2;	// IMP=0x0000000101793304
- (void)mergeVarintField:(int)arg1 value:(int)arg2;	// IMP=0x0000000101793288
- (void)mergeFromData:(id)arg1;	// IMP=0x000000010179320c
- (void)mergeUnknownFields:(id)arg1;	// IMP=0x000000010179310c
- (id)mutableFieldForNumber:(int)arg1 create:(_Bool)arg2;	// IMP=0x0000000101793060
- (void)addField:(id)arg1;	// IMP=0x0000000101792f40
- (id)data;	// IMP=0x0000000101792e80
- (unsigned long long)serializedSizeAsMessageSet;	// IMP=0x0000000101792df8
- (void)writeAsMessageSetTo:(id)arg1;	// IMP=0x0000000101792dc4
- (unsigned long long)serializedSize;	// IMP=0x0000000101792d3c
- (id)description;	// IMP=0x0000000101792ca4
- (void)writeToCodedOutputStream:(id)arg1;	// IMP=0x0000000101792b40
- (id)sortedFields;	// IMP=0x00000001017929c8
- (unsigned long long)countOfFields;	// IMP=0x00000001017929ac
- (id)getField:(int)arg1;	// IMP=0x000000010179297c
- (_Bool)hasField:(int)arg1;	// IMP=0x0000000101792944
- (unsigned long long)hash;	// IMP=0x000000010179291c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000101792890
- (void)dealloc;	// IMP=0x0000000101792838
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000101792780

@end

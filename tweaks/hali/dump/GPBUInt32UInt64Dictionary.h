//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GPBDictionaryInternalsProtocol.h"
#import "NSCopying.h"

@class GPBMessage, NSMutableDictionary;

@interface GPBUInt32UInt64Dictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
}

+ (id)dictionaryWithCapacity:(unsigned long long)arg1;	// IMP=0x0000000101796210
+ (id)dictionaryWithDictionary:(id)arg1;	// IMP=0x00000001017961d0
+ (id)dictionaryWithValues:(const unsigned long long *)arg1 forKeys:(const unsigned int *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000101796178
+ (id)dictionaryWithValue:(unsigned long long)arg1 forKey:(unsigned int)arg2;	// IMP=0x0000000101796128
+ (id)dictionary;	// IMP=0x00000001017960ec
- (void)removeAll;	// IMP=0x0000000101796e28
- (void)removeValueForKey:(unsigned int)arg1;	// IMP=0x0000000101796de0
- (void)setValue:(unsigned long long)arg1 forKey:(unsigned int)arg2;	// IMP=0x0000000101796d38
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x0000000101796cdc
- (_Bool)valueForKey:(unsigned int)arg1 value:(unsigned long long *)arg2;	// IMP=0x0000000101796c64
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x0000000101796b6c
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;	// IMP=0x0000000101796af8
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x00000001017968c0
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x000000010179669c
- (void)enumerateKeysAndValuesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001017965b8
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x000000010179653c
- (unsigned long long)hash;	// IMP=0x0000000101796524
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001017964a4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000101796468
- (void)dealloc;	// IMP=0x000000010179640c
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x00000001017963f4
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000101796394
- (id)initWithValues:(const unsigned long long *)arg1 forKeys:(const unsigned int *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000101796268
- (id)init;	// IMP=0x0000000101796250

@end

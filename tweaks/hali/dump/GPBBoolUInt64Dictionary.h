//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GPBDictionaryInternalsProtocol.h"
#import "NSCopying.h"

@class GPBMessage;

@interface GPBBoolUInt64Dictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;	// 8 = 0x8
    unsigned long long _values[2];	// 16 = 0x10
    _Bool _valueSet[2];	// 32 = 0x20
}

+ (id)dictionaryWithCapacity:(unsigned long long)arg1;	// IMP=0x00000001017ba60c
+ (id)dictionaryWithDictionary:(id)arg1;	// IMP=0x00000001017ba5cc
+ (id)dictionaryWithValues:(const unsigned long long *)arg1 forKeys:(const _Bool *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000001017ba574
+ (id)dictionaryWithValue:(unsigned long long)arg1 forKey:(_Bool)arg2;	// IMP=0x00000001017ba524
+ (id)dictionary;	// IMP=0x00000001017ba4e8
- (void)removeAll;	// IMP=0x00000001017bae94
- (void)removeValueForKey:(_Bool)arg1;	// IMP=0x00000001017bae80
- (void)setValue:(unsigned long long)arg1 forKey:(_Bool)arg2;	// IMP=0x00000001017bae3c
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x00000001017badd0
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x00000001017bac7c
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x00000001017babb4
- (void)enumerateKeysAndValuesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001017bab18
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x00000001017baa2c
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;	// IMP=0x00000001017ba9fc
- (_Bool)valueForKey:(_Bool)arg1 value:(unsigned long long *)arg2;	// IMP=0x00000001017ba9c0
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x00000001017ba8b4
- (unsigned long long)hash;	// IMP=0x00000001017ba898
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001017ba7d0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001017ba794
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x00000001017ba77c
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000001017ba6f8
- (id)initWithValues:(const unsigned long long *)arg1 forKeys:(const _Bool *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000001017ba664
- (id)init;	// IMP=0x00000001017ba64c

@end


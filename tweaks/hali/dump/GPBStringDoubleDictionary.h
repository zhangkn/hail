//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GPBDictionaryInternalsProtocol.h"
#import "NSCopying.h"

@class GPBMessage, NSMutableDictionary;

@interface GPBStringDoubleDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
}

+ (id)dictionaryWithCapacity:(unsigned long long)arg1;	// IMP=0x00000001017b76e8
+ (id)dictionaryWithDictionary:(id)arg1;	// IMP=0x00000001017b76a8
+ (id)dictionaryWithValues:(const double *)arg1 forKeys:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000001017b7650
+ (id)dictionaryWithValue:(double)arg1 forKey:(id)arg2;	// IMP=0x00000001017b7600
+ (id)dictionary;	// IMP=0x00000001017b75c4
- (void)removeAll;	// IMP=0x00000001017b8194
- (void)removeValueForKey:(id)arg1;	// IMP=0x00000001017b817c
- (void)setValue:(double)arg1 forKey:(id)arg2;	// IMP=0x00000001017b80b8
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x00000001017b805c
- (_Bool)valueForKey:(id)arg1 value:(double *)arg2;	// IMP=0x00000001017b8000
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x00000001017b7f30
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;	// IMP=0x00000001017b7edc
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x00000001017b7d30
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x00000001017b7b5c
- (void)enumerateKeysAndValuesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001017b7a94
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x00000001017b7a18
- (unsigned long long)hash;	// IMP=0x00000001017b7a00
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001017b7980
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001017b7944
- (void)dealloc;	// IMP=0x00000001017b78e8
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x00000001017b78d0
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000001017b7870
- (id)initWithValues:(const double *)arg1 forKeys:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000001017b7740
- (id)init;	// IMP=0x00000001017b7728

@end


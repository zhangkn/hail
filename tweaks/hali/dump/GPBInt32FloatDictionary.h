//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GPBDictionaryInternalsProtocol.h"
#import "NSCopying.h"

@class GPBMessage, NSMutableDictionary;

@interface GPBInt32FloatDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
}

+ (id)dictionaryWithCapacity:(unsigned long long)arg1;	// IMP=0x00000001017a0368
+ (id)dictionaryWithDictionary:(id)arg1;	// IMP=0x00000001017a0328
+ (id)dictionaryWithValues:(const float *)arg1 forKeys:(const int *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000001017a02d0
+ (id)dictionaryWithValue:(float)arg1 forKey:(int)arg2;	// IMP=0x00000001017a0280
+ (id)dictionary;	// IMP=0x00000001017a0244
- (void)removeAll;	// IMP=0x00000001017a0eec
- (void)removeValueForKey:(int)arg1;	// IMP=0x00000001017a0ea4
- (void)setValue:(float)arg1 forKey:(int)arg2;	// IMP=0x00000001017a0dfc
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x00000001017a0da0
- (_Bool)valueForKey:(int)arg1 value:(float *)arg2;	// IMP=0x00000001017a0d28
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x00000001017a0c24
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;	// IMP=0x00000001017a0bb0
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x00000001017a09dc
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x00000001017a07f0
- (void)enumerateKeysAndValuesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001017a0710
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x00000001017a0694
- (unsigned long long)hash;	// IMP=0x00000001017a067c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001017a05fc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001017a05c0
- (void)dealloc;	// IMP=0x00000001017a0564
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x00000001017a054c
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000001017a04ec
- (id)initWithValues:(const float *)arg1 forKeys:(const int *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000001017a03c0
- (id)init;	// IMP=0x00000001017a03a8

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GPBDictionaryInternalsProtocol.h"
#import "NSCopying.h"

@class GPBMessage, NSMutableDictionary;

@interface GPBInt32DoubleDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
}

+ (id)dictionaryWithCapacity:(unsigned long long)arg1;	// IMP=0x00000001017a1028
+ (id)dictionaryWithDictionary:(id)arg1;	// IMP=0x00000001017a0fe8
+ (id)dictionaryWithValues:(const double *)arg1 forKeys:(const int *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000001017a0f90
+ (id)dictionaryWithValue:(double)arg1 forKey:(int)arg2;	// IMP=0x00000001017a0f40
+ (id)dictionary;	// IMP=0x00000001017a0f04
- (void)removeAll;	// IMP=0x00000001017a1ba8
- (void)removeValueForKey:(int)arg1;	// IMP=0x00000001017a1b60
- (void)setValue:(double)arg1 forKey:(int)arg2;	// IMP=0x00000001017a1ab8
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x00000001017a1a5c
- (_Bool)valueForKey:(int)arg1 value:(double *)arg2;	// IMP=0x00000001017a19e4
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x00000001017a18e4
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;	// IMP=0x00000001017a1870
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x00000001017a169c
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x00000001017a14b0
- (void)enumerateKeysAndValuesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001017a13d0
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x00000001017a1354
- (unsigned long long)hash;	// IMP=0x00000001017a133c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001017a12bc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001017a1280
- (void)dealloc;	// IMP=0x00000001017a1224
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x00000001017a120c
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000001017a11ac
- (id)initWithValues:(const double *)arg1 forKeys:(const int *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000001017a1080
- (id)init;	// IMP=0x00000001017a1068

@end


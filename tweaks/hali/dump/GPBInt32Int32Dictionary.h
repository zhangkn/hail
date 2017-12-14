//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GPBDictionaryInternalsProtocol.h"
#import "NSCopying.h"

@class GPBMessage, NSMutableDictionary;

@interface GPBInt32Int32Dictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
}

+ (id)dictionaryWithCapacity:(unsigned long long)arg1;	// IMP=0x000000010179d058
+ (id)dictionaryWithDictionary:(id)arg1;	// IMP=0x000000010179d018
+ (id)dictionaryWithValues:(const int *)arg1 forKeys:(const int *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000010179cfc0
+ (id)dictionaryWithValue:(int)arg1 forKey:(int)arg2;	// IMP=0x000000010179cf70
+ (id)dictionary;	// IMP=0x000000010179cf34
- (void)removeAll;	// IMP=0x000000010179dbc4
- (void)removeValueForKey:(int)arg1;	// IMP=0x000000010179db7c
- (void)setValue:(int)arg1 forKey:(int)arg2;	// IMP=0x000000010179dad4
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x000000010179da78
- (_Bool)valueForKey:(int)arg1 value:(int *)arg2;	// IMP=0x000000010179da00
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x000000010179d908
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;	// IMP=0x000000010179d88c
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x000000010179d6c4
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x000000010179d4d8
- (void)enumerateKeysAndValuesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010179d3f0
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x000000010179d374
- (unsigned long long)hash;	// IMP=0x000000010179d35c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010179d2dc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010179d2a0
- (void)dealloc;	// IMP=0x000000010179d244
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x000000010179d22c
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000010179d1cc
- (id)initWithValues:(const int *)arg1 forKeys:(const int *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000010179d0b0
- (id)init;	// IMP=0x000000010179d098

@end

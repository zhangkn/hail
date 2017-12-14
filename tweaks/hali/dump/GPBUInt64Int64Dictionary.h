//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GPBDictionaryInternalsProtocol.h"
#import "NSCopying.h"

@class GPBMessage, NSMutableDictionary;

@interface GPBUInt64Int64Dictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
}

+ (id)dictionaryWithCapacity:(unsigned long long)arg1;	// IMP=0x00000001017a6330
+ (id)dictionaryWithDictionary:(id)arg1;	// IMP=0x00000001017a62f0
+ (id)dictionaryWithValues:(const long long *)arg1 forKeys:(const unsigned long long *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000001017a6298
+ (id)dictionaryWithValue:(long long)arg1 forKey:(unsigned long long)arg2;	// IMP=0x00000001017a624c
+ (id)dictionary;	// IMP=0x00000001017a6210
- (void)removeAll;	// IMP=0x00000001017a6ed8
- (void)removeValueForKey:(unsigned long long)arg1;	// IMP=0x00000001017a6e90
- (void)setValue:(long long)arg1 forKey:(unsigned long long)arg2;	// IMP=0x00000001017a6de8
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x00000001017a6d8c
- (_Bool)valueForKey:(unsigned long long)arg1 value:(long long *)arg2;	// IMP=0x00000001017a6d14
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x00000001017a6c1c
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;	// IMP=0x00000001017a6ba8
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x00000001017a69ac
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x00000001017a67bc
- (void)enumerateKeysAndValuesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001017a66d8
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x00000001017a665c
- (unsigned long long)hash;	// IMP=0x00000001017a6644
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001017a65c4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001017a6588
- (void)dealloc;	// IMP=0x00000001017a652c
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x00000001017a6514
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000001017a64b4
- (id)initWithValues:(const long long *)arg1 forKeys:(const unsigned long long *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000001017a6388
- (id)init;	// IMP=0x00000001017a6370

@end

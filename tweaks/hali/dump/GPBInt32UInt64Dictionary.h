//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GPBDictionaryInternalsProtocol.h"
#import "NSCopying.h"

@class GPBMessage, NSMutableDictionary;

@interface GPBInt32UInt64Dictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
}

+ (id)dictionaryWithCapacity:(unsigned long long)arg1;	// IMP=0x000000010179dd00
+ (id)dictionaryWithDictionary:(id)arg1;	// IMP=0x000000010179dcc0
+ (id)dictionaryWithValues:(const unsigned long long *)arg1 forKeys:(const int *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000010179dc68
+ (id)dictionaryWithValue:(unsigned long long)arg1 forKey:(int)arg2;	// IMP=0x000000010179dc18
+ (id)dictionary;	// IMP=0x000000010179dbdc
- (void)removeAll;	// IMP=0x000000010179e8c0
- (void)removeValueForKey:(int)arg1;	// IMP=0x000000010179e878
- (void)setValue:(unsigned long long)arg1 forKey:(int)arg2;	// IMP=0x000000010179e7d0
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x000000010179e774
- (_Bool)valueForKey:(int)arg1 value:(unsigned long long *)arg2;	// IMP=0x000000010179e6fc
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x000000010179e604
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;	// IMP=0x000000010179e590
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x000000010179e37c
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x000000010179e18c
- (void)enumerateKeysAndValuesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010179e0a8
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x000000010179e02c
- (unsigned long long)hash;	// IMP=0x000000010179e014
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010179df94
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010179df58
- (void)dealloc;	// IMP=0x000000010179defc
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x000000010179dee4
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000010179de84
- (id)initWithValues:(const unsigned long long *)arg1 forKeys:(const int *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000010179dd58
- (id)init;	// IMP=0x000000010179dd40

@end


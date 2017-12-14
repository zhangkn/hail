//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GPBDictionaryInternalsProtocol.h"
#import "NSCopying.h"

@class GPBMessage, NSMutableDictionary;

@interface GPBInt32EnumDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
    CDUnknownFunctionPointerType _validationFunc;	// 24 = 0x18
}

+ (id)dictionaryWithValidationFunction:(CDUnknownFunctionPointerType)arg1 capacity:(unsigned long long)arg2;	// IMP=0x00000001017a1d48
+ (id)dictionaryWithDictionary:(id)arg1;	// IMP=0x00000001017a1d08
+ (id)dictionaryWithValidationFunction:(CDUnknownFunctionPointerType)arg1 rawValues:(const int *)arg2 forKeys:(const int *)arg3 count:(unsigned long long)arg4;	// IMP=0x00000001017a1ca8
+ (id)dictionaryWithValidationFunction:(CDUnknownFunctionPointerType)arg1 rawValue:(int)arg2 forKey:(int)arg3;	// IMP=0x00000001017a1c4c
+ (id)dictionaryWithValidationFunction:(CDUnknownFunctionPointerType)arg1;	// IMP=0x00000001017a1c00
+ (id)dictionary;	// IMP=0x00000001017a1bc0
@property(readonly, nonatomic) CDUnknownFunctionPointerType validationFunc; // @synthesize validationFunc=_validationFunc;
- (void)setValue:(int)arg1 forKey:(int)arg2;	// IMP=0x00000001017a2ba0
- (void)removeAll;	// IMP=0x00000001017a2b88
- (void)removeValueForKey:(int)arg1;	// IMP=0x00000001017a2b40
- (void)setRawValue:(int)arg1 forKey:(int)arg2;	// IMP=0x00000001017a2a98
- (void)addRawEntriesFromDictionary:(id)arg1;	// IMP=0x00000001017a2a3c
- (void)enumerateKeysAndValuesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001017a292c
- (_Bool)valueForKey:(int)arg1 rawValue:(int *)arg2;	// IMP=0x00000001017a28b4
- (_Bool)valueForKey:(int)arg1 value:(int *)arg2;	// IMP=0x00000001017a280c
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x00000001017a271c
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;	// IMP=0x00000001017a26a0
- (id)serializedDataForUnknownValue:(int)arg1 forKey:(CDUnion_88782d86 *)arg2 keyDataType:(unsigned char)arg3;	// IMP=0x00000001017a25cc
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x00000001017a2400
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x00000001017a2214
- (void)enumerateKeysAndRawValuesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001017a212c
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x00000001017a20b0
- (unsigned long long)hash;	// IMP=0x00000001017a2098
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001017a2018
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001017a1fdc
- (void)dealloc;	// IMP=0x00000001017a1f80
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1 capacity:(unsigned long long)arg2;	// IMP=0x00000001017a1f68
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000001017a1eec
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1 rawValues:(const int *)arg2 forKeys:(const int *)arg3 count:(unsigned long long)arg4;	// IMP=0x00000001017a1dc4
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1;	// IMP=0x00000001017a1dac
- (id)init;	// IMP=0x00000001017a1d90

@end

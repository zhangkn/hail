//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSObject (WVSerializable)
+ (_Bool)wvContainerKeyProperty:(id)arg1;	// IMP=0x0000000101b861c0
+ (id)wvKeyPathsForPropertes;	// IMP=0x0000000101b86040
+ (id)wvGetKeyPathsForProperty:(id)arg1;	// IMP=0x0000000101b85f2c
+ (id)wvSubClassForProperties;	// IMP=0x0000000101b85dac
+ (Class)wvGetSubClassForProperty:(id)arg1;	// IMP=0x0000000101b85cb0
+ (id)wvDeserializeWithDictionary:(id)arg1 withContainerKey:(id)arg2;	// IMP=0x0000000101b85c20
+ (id)wvDeserializeWithDictionary:(id)arg1;	// IMP=0x0000000101b85bb0
+ (void)wvCreateDictionariesForKeyPath:(id)arg1 inDictionary:(id *)arg2;	// IMP=0x0000000101b84f38
+ (id)getWVProperty:(struct objc_property *)arg1 withIgnored:(id)arg2;	// IMP=0x0000000101b84734
+ (id)wvScanProperties;	// IMP=0x0000000101b84448
+ (id)wvGetProperties;	// IMP=0x0000000101b843c8
- (void)wvAppendDescription:(id)arg1 withProperty:(id)arg2 withValue:(id)arg3 maxLength:(unsigned long long)arg4 withIndent:(int)arg5;	// IMP=0x0000000101b8656c
- (id)wvDumpDescriptionWithMaxValueLength:(unsigned long long)arg1 withIndent:(int)arg2;	// IMP=0x0000000101b86284
- (id)wvDumpDescription;	// IMP=0x0000000101b86270
- (void)wvDeserializeWithDictionary:(id)arg1 withContainerKey:(id)arg2;	// IMP=0x0000000101b85358
- (void)wvDeserializeWithDictionary:(id)arg1;	// IMP=0x0000000101b85348
- (id)wvSerializeValue:(id)arg1;	// IMP=0x0000000101b8508c
- (id)wvSerializeToDictionaryAsSuperClass:(Class)arg1;	// IMP=0x0000000101b84c48
- (id)wvSerializeToDictionary;	// IMP=0x0000000101b84c10
- (id)wvCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000101b84980
@end


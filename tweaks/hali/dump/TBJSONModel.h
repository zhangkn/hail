//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBJSONModel : NSObject
{
    _Bool _treatBoolAsStringWhenModelToJSON;	// 8 = 0x8
}

+ (_Bool)strictMode;	// IMP=0x00000001016b5544
+ (id)ignoredPropertyNames;	// IMP=0x00000001016b553c
+ (id)modelContainerClassMapDictioanry;	// IMP=0x00000001016b5534
+ (id)jsonToModelKeyMapDictionary;	// IMP=0x00000001016b552c
+ (id)modelKeyMapper;	// IMP=0x00000001016b54bc
+ (id)modelWithJSONDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x00000001016b4b18
+ (id)modelWithJSONDictionary:(id)arg1;	// IMP=0x00000001016b4b08
- (void)setNilValueForKey:(id)arg1;	// IMP=0x00000001016b54b8
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x00000001016b54b0
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;	// IMP=0x00000001016b54ac
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001016b5428
- (void)setTreatBoolAsStringWhenModelToJSON:(_Bool)arg1;	// IMP=0x00000001016b5418
- (id)toJSONDictionary;	// IMP=0x00000001016b4fa0
- (void)updateWithJSONDictionary:(id)arg1;	// IMP=0x00000001016b4d10
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x00000001016b4c00
- (id)initWithJSONDictionary:(id)arg1;	// IMP=0x00000001016b4bf0
- (id)init;	// IMP=0x00000001016b4b84
- (id)valueForProperty:(id)arg1 withJSONValue:(id)arg2;	// IMP=0x00000001016b4574
- (void)_setupPropertyMap;	// IMP=0x00000001016b42b4
- (void)_setupKeyMapper;	// IMP=0x00000001016b4204

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ALBBWTMTLModel<ALBBWTMTLJSONSerializing>, NSDictionary;

@interface ALBBWTMTLJSONAdapter : NSObject
{
    ALBBWTMTLModel<ALBBWTMTLJSONSerializing> *_model;	// 8 = 0x8
    Class _modelClass;	// 16 = 0x10
    NSDictionary *_JSONKeyPathsByPropertyKey;	// 24 = 0x18
}

+ (id)JSONArrayFromModels:(id)arg1;	// IMP=0x000000010109a8a4
+ (id)JSONDictionaryFromModel:(id)arg1;	// IMP=0x000000010109a81c
+ (id)modelsOfClass:(Class)arg1 fromJSONArray:(id)arg2 error:(id *)arg3;	// IMP=0x000000010109a454
+ (id)modelOfClass:(Class)arg1 fromJSONDictionary:(id)arg2 error:(id *)arg3;	// IMP=0x000000010109a3b4
+ (id)modelOfClass:(Class)arg1 fromJSONDictionary:(id)arg2;	// IMP=0x000000010109c0e8
@property(readonly, copy, nonatomic) NSDictionary *JSONKeyPathsByPropertyKey; // @synthesize JSONKeyPathsByPropertyKey=_JSONKeyPathsByPropertyKey;
@property(readonly, nonatomic) Class modelClass; // @synthesize modelClass=_modelClass;
@property(readonly, nonatomic) ALBBWTMTLModel<ALBBWTMTLJSONSerializing> *model; // @synthesize model=_model;
- (void).cxx_destruct;	// IMP=0x000000010109c094
- (id)JSONKeyPathForPropertyKey:(id)arg1;	// IMP=0x000000010109bf7c
- (id)JSONTransformerForKey:(id)arg1;	// IMP=0x000000010109bdd8
- (id)JSONDictionary;	// IMP=0x000000010109b8b8
- (id)initWithModel:(id)arg1;	// IMP=0x000000010109b78c
- (id)initWithJSONDictionary:(id)arg1 modelClass:(Class)arg2 error:(id *)arg3;	// IMP=0x000000010109aa88
- (id)init;	// IMP=0x000000010109aa70
- (id)initWithJSONDictionary:(id)arg1 modelClass:(Class)arg2;	// IMP=0x000000010109c0f8

@end


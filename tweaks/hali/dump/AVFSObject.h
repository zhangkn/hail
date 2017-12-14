//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVFSObjectContext, NSMutableDictionary, NSNumber;

@interface AVFSObject : NSObject
{
    id cachedPrimaryKeyValue;	// 8 = 0x8
    _Bool _exist;	// 16 = 0x10
    _Bool _markForDeletion;	// 17 = 0x11
    NSMutableDictionary *_fieldData;	// 24 = 0x18
    NSMutableDictionary *_changedValues;	// 32 = 0x20
    NSMutableDictionary *_relationEntities;	// 40 = 0x28
    AVFSObjectContext *_context;	// 48 = 0x30
}

+ (void)inspectClass:(Class)arg1 accumulateDefinitions:(id)arg2 accumulateRelationships:(id)arg3 accumulateProperties:(id)arg4;	// IMP=0x00000001011d74b0
+ (void)clearRecords;	// IMP=0x00000001011d6b40
+ (id)query;	// IMP=0x00000001011d6ad0
+ (void)initialize;	// IMP=0x00000001011d5728
+ (id)uniqueProperties;	// IMP=0x00000001011d5720
+ (id)defaultValuesForEntity;	// IMP=0x00000001011d5718
+ (id)indexesForEntity;	// IMP=0x00000001011d5710
+ (id)moduleForEntity;	// IMP=0x00000001011d56e4
+ (void)injectPropertyTrapsFor:(id)arg1 reader:(CDUnknownFunctionPointerType)arg2 writer:(CDUnknownFunctionPointerType)arg3 typeEncoding:(const char *)arg4;	// IMP=0x00000001011d1b50
+ (void)injectPropertyTrapsFor:(id)arg1;	// IMP=0x00000001011cf9a8
+ (id)propertyNameFromSelector:(SEL)arg1;	// IMP=0x00000001011d4c90
+ (int)getEntityPropertyType:(id)arg1;	// IMP=0x00000001011d4270
+ (_Bool)isTypeAPrimitive:(int)arg1;	// IMP=0x00000001011d4248
+ (int)getStorageType:(int)arg1;	// IMP=0x00000001011d4170
@property(retain, nonatomic) AVFSObjectContext *context; // @synthesize context=_context;
@property(nonatomic) _Bool markForDeletion; // @synthesize markForDeletion=_markForDeletion;
@property(nonatomic) _Bool exist; // @synthesize exist=_exist;
@property(retain, nonatomic) NSMutableDictionary *relationEntities; // @synthesize relationEntities=_relationEntities;
@property(retain, nonatomic) NSMutableDictionary *changedValues; // @synthesize changedValues=_changedValues;
@property(retain, nonatomic) NSMutableDictionary *fieldData; // @synthesize fieldData=_fieldData;
- (void).cxx_destruct;	// IMP=0x00000001011d7ba4
- (void)rebase;	// IMP=0x00000001011d725c
- (id)getField:(id)arg1;	// IMP=0x00000001011d6fe4
- (void)setField:(id)arg1 value:(id)arg2;	// IMP=0x00000001011d6ec0
@property(retain, nonatomic) NSNumber *Id;
- (id)fieldNames;	// IMP=0x00000001011d6cf4
- (_Bool)remove;	// IMP=0x00000001011d6a68
- (_Bool)save;	// IMP=0x00000001011d6688
- (id)initWithPrimaryKeyValue:(id)arg1;	// IMP=0x00000001011d6524
- (id)initWithContext:(id)arg1;	// IMP=0x00000001011d64c4
- (id)init;	// IMP=0x00000001011d5d94
- (_Bool)commitWithChain:(id)arg1;	// IMP=0x00000001011ce54c
- (_Bool)removeRaw;	// IMP=0x00000001011ce194

@end


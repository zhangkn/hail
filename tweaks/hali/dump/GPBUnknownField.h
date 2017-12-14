//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class GPBUInt32Array, GPBUInt64Array, NSArray, NSMutableArray;

@interface GPBUnknownField : NSObject <NSCopying>
{
    int number_;	// 8 = 0x8
    GPBUInt64Array *mutableVarintList_;	// 16 = 0x10
    GPBUInt32Array *mutableFixed32List_;	// 24 = 0x18
    GPBUInt64Array *mutableFixed64List_;	// 32 = 0x20
    NSMutableArray *mutableLengthDelimitedList_;	// 40 = 0x28
    NSMutableArray *mutableGroupList_;	// 48 = 0x30
}

@property(readonly, nonatomic) NSArray *groupList; // @synthesize groupList=mutableGroupList_;
@property(readonly, nonatomic) NSArray *lengthDelimitedList; // @synthesize lengthDelimitedList=mutableLengthDelimitedList_;
@property(readonly, nonatomic) GPBUInt64Array *fixed64List; // @synthesize fixed64List=mutableFixed64List_;
@property(readonly, nonatomic) GPBUInt32Array *fixed32List; // @synthesize fixed32List=mutableFixed32List_;
@property(readonly, nonatomic) GPBUInt64Array *varintList; // @synthesize varintList=mutableVarintList_;
@property(readonly, nonatomic) int number; // @synthesize number=number_;
- (void)addGroup:(id)arg1;	// IMP=0x0000000101779e2c
- (void)addLengthDelimited:(id)arg1;	// IMP=0x0000000101779db0
- (void)addFixed64:(unsigned long long)arg1;	// IMP=0x0000000101779d34
- (void)addFixed32:(unsigned int)arg1;	// IMP=0x0000000101779cb8
- (void)addVarint:(unsigned long long)arg1;	// IMP=0x0000000101779c3c
- (void)mergeFromField:(id)arg1;	// IMP=0x0000000101779924
- (id)description;	// IMP=0x0000000101779530
- (unsigned long long)serializedSizeAsMessageSetExtension;	// IMP=0x0000000101779410
- (void)writeAsMessageSetExtensionToOutput:(id)arg1;	// IMP=0x00000001017792ec
- (unsigned long long)serializedSize;	// IMP=0x0000000101778ef4
- (void)writeToOutput:(id)arg1;	// IMP=0x0000000101778d94
- (unsigned long long)hash;	// IMP=0x0000000101778cc8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000101778b18
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001017788cc
- (void)dealloc;	// IMP=0x000000010177881c
- (id)initWithNumber:(int)arg1;	// IMP=0x00000001017787c8

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class GPBExtensionDescriptor, GPBFieldDescriptor, GPBUnknownFieldSet, NSMutableDictionary, NSObject<OS_dispatch_semaphore>;

@interface GPBMessage : NSObject <NSSecureCoding, NSCopying>
{
    GPBUnknownFieldSet *unknownFields_;	// 8 = 0x8
    NSMutableDictionary *extensionMap_;	// 16 = 0x10
    NSMutableDictionary *autocreatedExtensionMap_;	// 24 = 0x18
    GPBMessage *autocreator_;	// 32 = 0x20
    GPBFieldDescriptor *autocreatorField_;	// 40 = 0x28
    GPBExtensionDescriptor *autocreatorExtension_;	// 48 = 0x30
    struct GPBMessage_Storage *messageStorage_;	// 56 = 0x38
    long long readOnlySemaphoreCreationOnce_;	// 64 = 0x40
    NSObject<OS_dispatch_semaphore> *readOnlySemaphore_;	// 72 = 0x48
}

+ (_Bool)accessInstanceVariablesDirectly;	// IMP=0x0000000101788764
+ (_Bool)supportsSecureCoding;	// IMP=0x000000010178866c
+ (_Bool)resolveClassMethod:(SEL)arg1;	// IMP=0x000000010178860c
+ (_Bool)resolveInstanceMethod:(SEL)arg1;	// IMP=0x00000001017871c8
+ (id)parseDelimitedFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2 error:(id *)arg3;	// IMP=0x0000000101783ba0
+ (id)parseFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2 error:(id *)arg3;	// IMP=0x0000000101783b48
+ (id)parseFromData:(id)arg1 extensionRegistry:(id)arg2 error:(id *)arg3;	// IMP=0x0000000101783af0
+ (id)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000101783ad8
+ (id)message;	// IMP=0x0000000101780cbc
+ (id)descriptor;	// IMP=0x0000000101780c08
+ (id)alloc;	// IMP=0x0000000101780bf8
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000101780bb4
+ (void)initialize;	// IMP=0x0000000101780b0c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000101788704
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000101788674
- (unsigned long long)serializedSize;	// IMP=0x0000000101785fa0
- (id)description;	// IMP=0x0000000101785f2c
- (unsigned long long)hash;	// IMP=0x0000000101785c74
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010178584c
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000101784e84
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;	// IMP=0x000000010178413c
- (void)addUnknownMapEntry:(int)arg1 value:(id)arg2;	// IMP=0x0000000101784108
- (_Bool)parseUnknownField:(id)arg1 extensionRegistry:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x0000000101783f48
- (void)parseMessageSet:(id)arg1 extensionRegistry:(id)arg2;	// IMP=0x0000000101783cdc
@property(copy, nonatomic) GPBUnknownFieldSet *unknownFields;
- (void)mergeDelimitedFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;	// IMP=0x0000000101783a50
- (void)mergeFromData:(id)arg1 extensionRegistry:(id)arg2;	// IMP=0x00000001017839c4
- (void)clearExtension:(id)arg1;	// IMP=0x000000010178394c
- (void)setExtension:(id)arg1 index:(unsigned long long)arg2 value:(id)arg3;	// IMP=0x0000000101783874
- (void)addExtension:(id)arg1 value:(id)arg2;	// IMP=0x0000000101783768
- (void)setExtension:(id)arg1 value:(id)arg2;	// IMP=0x00000001017835ec
- (id)sortedExtensionsInUse;	// IMP=0x00000001017835b4
- (void)writeExtensionsToCodedOutputStream:(id)arg1 range:(struct GPBExtensionRange)arg2;	// IMP=0x000000010178342c
- (id)extensionsCurrentlySet;	// IMP=0x0000000101783414
- (_Bool)hasExtension:(id)arg1;	// IMP=0x00000001017833e4
- (id)getExistingExtension:(id)arg1;	// IMP=0x00000001017833cc
- (id)getExtension:(id)arg1;	// IMP=0x00000001017830ec
- (void)writeField:(id)arg1 toCodedOutputStream:(id)arg2;	// IMP=0x0000000101782854
- (void)writeDelimitedToCodedOutputStream:(id)arg1;	// IMP=0x0000000101782804
- (void)writeDelimitedToOutputStream:(id)arg1;	// IMP=0x000000010178279c
- (void)writeToCodedOutputStream:(id)arg1;	// IMP=0x00000001017825c4
- (void)writeToOutputStream:(id)arg1;	// IMP=0x000000010178255c
- (id)delimitedData;	// IMP=0x0000000101782474
- (id)data;	// IMP=0x00000001017823b8
- (id)descriptor;	// IMP=0x0000000101782394
@property(readonly, nonatomic, getter=isInitialized) _Bool initialized;
- (void)internalClear:(_Bool)arg1;	// IMP=0x0000000101781ab0
- (void)clear;	// IMP=0x0000000101781aa0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000101781650
- (void)copyFieldsInto:(id)arg1 zone:(struct _NSZone *)arg2 descriptor:(id)arg3;	// IMP=0x0000000101781010
- (void)dealloc;	// IMP=0x0000000101780fa8
- (id)initWithCodedInputStream:(id)arg1 extensionRegistry:(id)arg2 error:(id *)arg3;	// IMP=0x0000000101780ee4
- (id)initWithData:(id)arg1 extensionRegistry:(id)arg2 error:(id *)arg3;	// IMP=0x0000000101780d74
- (id)initWithData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000101780d5c
- (id)init;	// IMP=0x0000000101780cec

@end

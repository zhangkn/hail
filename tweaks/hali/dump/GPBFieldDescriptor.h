//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GPBEnumDescriptor, GPBOneofDescriptor, NSString;

@interface GPBFieldDescriptor : NSObject
{
    struct GPBMessageFieldDescription *description_;	// 8 = 0x8
    GPBOneofDescriptor *containingOneof_;	// 16 = 0x10
    SEL getSel_;	// 24 = 0x18
    SEL setSel_;	// 32 = 0x20
    SEL hasOrCountSel_;	// 40 = 0x28
    SEL setHasSel_;	// 48 = 0x30
    CDUnion_88782d86 defaultValue_;	// 56 = 0x38
    Class msgClass_;	// 64 = 0x40
    union {
        GPBEnumDescriptor *enumDescriptor_;
        CDUnknownFunctionPointerType enumVerifier_;
    } enumHandling_;	// 72 = 0x48
}

@property(readonly, nonatomic) GPBOneofDescriptor *containingOneof; // @synthesize containingOneof=containingOneof_;
@property(readonly, nonatomic) Class msgClass; // @synthesize msgClass=msgClass_;
- (id)textFormatName;	// IMP=0x000000010178b818
@property(readonly, nonatomic) CDUnion_88782d86 defaultValue;
@property(readonly, nonatomic) GPBEnumDescriptor *enumDescriptor;
- (_Bool)isValidEnumValue:(int)arg1;	// IMP=0x000000010178b730
@property(readonly, nonatomic, getter=isPackable) _Bool packable;
@property(readonly, nonatomic) unsigned char mapKeyDataType;
@property(readonly, nonatomic) unsigned char fieldType;
@property(readonly, nonatomic, getter=isOptional) _Bool optional;
@property(readonly, nonatomic, getter=isRequired) _Bool required;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, nonatomic) unsigned int number;
@property(readonly, nonatomic) _Bool hasDefaultValue;
@property(readonly, nonatomic) unsigned char dataType;
- (void)dealloc;	// IMP=0x000000010178b4e8
- (id)initWithFieldDescription:(void *)arg1 includesDefault:(_Bool)arg2 syntax:(unsigned char)arg3;	// IMP=0x000000010178b2b8
- (id)init;	// IMP=0x000000010178b25c

@end


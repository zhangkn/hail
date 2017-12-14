//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DTJsonDecoder : NSObject
{
}

+ (id)decoder;	// IMP=0x000000010118194c
- (void)setDateValue:(id)arg1 toProperty:(id)arg2 ofObject:(id)arg3;	// IMP=0x0000000101183174
- (void)setStringValue:(id)arg1 toProperty:(id)arg2 ofObject:(id)arg3;	// IMP=0x00000001011830a8
- (void)setNumberValue:(id)arg1 toProperty:(id)arg2 ofObject:(id)arg3 convertSelector:(SEL)arg4;	// IMP=0x0000000101182f50
- (void)setProperty:(struct objc_property *)arg1 ofObject:(id)arg2 lookupDictionary:(id)arg3;	// IMP=0x00000001011827b8
- (void)setupObject:(id)arg1 ofClass:(Class)arg2 lookupDictionary:(id)arg3;	// IMP=0x00000001011826b0
- (id)decodeObjectOfClass:(Class)arg1 fromJSONObject:(id)arg2;	// IMP=0x000000010118252c
- (id)decodeDictionaryWithElementClass:(Class)arg1 fromJSONObject:(id)arg2;	// IMP=0x0000000101182308
- (id)decodeArrayWithElementClass:(Class)arg1 fromJSONObject:(id)arg2;	// IMP=0x0000000101182100
- (id)decodeWithClass:(Class)arg1 elementClass:(Class)arg2 fromJSONObject:(id)arg3;	// IMP=0x0000000101181cfc
- (id)decodeWithClassName:(id)arg1 elementClass:(Class)arg2 fromJSONObject:(id)arg3;	// IMP=0x0000000101181b74
- (id)decodeWithClass:(Class)arg1 elementClass:(Class)arg2 fromJSONString:(id)arg3;	// IMP=0x000000010118197c

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableString;

@interface DTJsonEncoder : NSObject
{
    NSMutableString *_JSONRepresentation;	// 8 = 0x8
}

+ (id)normalizePropertyName:(id)arg1;	// IMP=0x000000010117ba48
+ (id)encoder;	// IMP=0x000000010117ae1c
+ (void)initialize;	// IMP=0x000000010117adb8
@property(retain, nonatomic) NSMutableString *JSONRepresentation; // @synthesize JSONRepresentation=_JSONRepresentation;
- (void).cxx_destruct;	// IMP=0x000000010117be24
- (id)jsonValueFrom:(id)arg1;	// IMP=0x000000010117bb78
- (id)encodeObject:(id)arg1;	// IMP=0x000000010117b92c
- (void)encodeObject:(id)arg1 ofClass:(Class)arg2 recusive:(_Bool)arg3;	// IMP=0x000000010117b54c
- (void)encodeDictionary:(id)arg1;	// IMP=0x000000010117b204
- (void)encodeArray:(id)arg1;	// IMP=0x000000010117aed8
- (id)init;	// IMP=0x000000010117ae4c

@end


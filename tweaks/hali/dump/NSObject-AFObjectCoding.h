//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@interface NSObject (AFObjectCoding) <NSSecureCoding>
+ (id)codableProperties;	// IMP=0x000000010101d90c
+ (id)ingnoredProperties;	// IMP=0x000000010101d2d0
+ (_Bool)supportsSecureCoding;	// IMP=0x000000010101d264
- (id)codableProperties;	// IMP=0x000000010101d79c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010101d618
- (void)setWithCoder:(id)arg1;	// IMP=0x000000010101d2e0
- (void)handlePropertyClassChanged:(id)arg1 withCurrentKeyedClasses:(id)arg2 andDecoder:(id)arg3;	// IMP=0x000000010101d2dc
- (void)didFinishDecodingWithDecoder:(id)arg1;	// IMP=0x000000010101d2d8
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010101d26c
@end


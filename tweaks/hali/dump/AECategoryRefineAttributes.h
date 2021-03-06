//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSArray, NSString;

@interface AECategoryRefineAttributes : NSObject <NSCopying, NSMutableCopying>
{
    NSString *attributesId;	// 8 = 0x8
    NSString *name;	// 16 = 0x10
    NSArray *attributeValues;	// 24 = 0x18
    NSString *type;	// 32 = 0x20
    NSString *prefixURL;	// 40 = 0x28
    NSArray *selectedAttValues;	// 48 = 0x30
}

+ (id)objectClassInArray;	// IMP=0x0000000100c4d698
+ (id)replacedKeyFromPropertyName;	// IMP=0x0000000100c4d624
@property(retain, nonatomic) NSArray *selectedAttValues; // @synthesize selectedAttValues;
@property(copy, nonatomic) NSString *prefixURL; // @synthesize prefixURL;
@property(copy, nonatomic) NSString *type; // @synthesize type;
@property(retain, nonatomic) NSArray *attributeValues; // @synthesize attributeValues;
@property(copy, nonatomic) NSString *name; // @synthesize name;
@property(copy, nonatomic) NSString *attributesId; // @synthesize attributesId;
- (void).cxx_destruct;	// IMP=0x0000000100c4dad8
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100c4d88c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100c4d740

@end


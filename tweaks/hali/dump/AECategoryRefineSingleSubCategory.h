//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSString;

@interface AECategoryRefineSingleSubCategory : NSObject <NSCopying>
{
    _Bool isLeaf;	// 8 = 0x8
    NSString *categoryId;	// 16 = 0x10
    NSString *subCategoryCount;	// 24 = 0x18
    NSString *name;	// 32 = 0x20
    NSArray *subCategories;	// 40 = 0x28
}

+ (id)objectClassInArray;	// IMP=0x0000000100c4d260
+ (id)replacedKeyFromPropertyName;	// IMP=0x0000000100c4d1f8
@property(retain, nonatomic) NSArray *subCategories; // @synthesize subCategories;
@property(copy, nonatomic) NSString *name; // @synthesize name;
@property(nonatomic) _Bool isLeaf; // @synthesize isLeaf;
@property(copy, nonatomic) NSString *subCategoryCount; // @synthesize subCategoryCount;
@property(copy, nonatomic) NSString *categoryId; // @synthesize categoryId;
- (void).cxx_destruct;	// IMP=0x0000000100c4d5bc
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100c4d3fc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100c4d2e4

@end

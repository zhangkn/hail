//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSString;

@interface AECategoryListRefine : NSObject <NSCopying>
{
    NSString *_listRefineTemplate;	// 8 = 0x8
    NSArray *_categories;	// 16 = 0x10
    NSArray *_attributes;	// 24 = 0x18
}

+ (id)objectClassInArray;	// IMP=0x0000000100c95280
+ (id)replacedKeyFromPropertyName;	// IMP=0x0000000100c9520c
@property(retain, nonatomic) NSArray *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(copy, nonatomic) NSString *listRefineTemplate; // @synthesize listRefineTemplate=_listRefineTemplate;
- (void).cxx_destruct;	// IMP=0x0000000100c954a4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100c95324

@end

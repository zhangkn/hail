//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSMutableDictionary;

@interface GPBExtensionRegistry : NSObject <NSCopying>
{
    NSMutableDictionary *mutableClassMap_;	// 8 = 0x8
}

- (void)addExtensions:(id)arg1;	// IMP=0x00000001017939a8
- (id)extensionForDescriptor:(id)arg1 fieldNumber:(long long)arg2;	// IMP=0x0000000101793928
- (void)addExtension:(id)arg1;	// IMP=0x0000000101793884
- (id)extensionMapForContainingMessageClass:(Class)arg1;	// IMP=0x0000000101793808
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010179377c
- (void)dealloc;	// IMP=0x0000000101793720
- (id)init;	// IMP=0x00000001017936a8

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMutableDictionary.h"

@class NSMutableArray;

@interface OrderedDictionary : NSMutableDictionary
{
    NSMutableDictionary *dictionary;	// 8 = 0x8
    NSMutableArray *array;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010094fd44
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;	// IMP=0x000000010094fad0
- (id)keyAtIndex:(unsigned long long)arg1;	// IMP=0x000000010094fab8
- (void)insertObject:(id)arg1 forKey:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000010094f9e4
- (id)reverseKeyEnumerator;	// IMP=0x000000010094f9cc
- (id)keyEnumerator;	// IMP=0x000000010094f9b4
- (id)objectForKey:(id)arg1;	// IMP=0x000000010094f99c
- (unsigned long long)count;	// IMP=0x000000010094f984
- (void)removeObjectForKey:(id)arg1;	// IMP=0x000000010094f910
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000010094f858
- (id)copy;	// IMP=0x000000010094f84c
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x000000010094f780
- (id)init;	// IMP=0x000000010094f6b8

@end

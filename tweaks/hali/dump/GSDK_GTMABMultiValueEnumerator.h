//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSEnumerator.h"

@class GSDK_GTMABMultiValue;

@interface GSDK_GTMABMultiValueEnumerator : NSEnumerator
{
    void *ref_;	// 8 = 0x8
    GSDK_GTMABMultiValue *enumeree_;	// 16 = 0x10
    unsigned long long mutations_;	// 24 = 0x18
    unsigned long long count_;	// 32 = 0x20
    unsigned long long index_;	// 40 = 0x28
    _Bool useLabels_;	// 48 = 0x30
}

+ (id)labelEnumeratorFor:(id)arg1;	// IMP=0x0000000100929268
+ (id)valueEnumeratorFor:(id)arg1;	// IMP=0x0000000100929224
- (id)nextObject;	// IMP=0x000000010092950c
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000001009293a8
- (void)dealloc;	// IMP=0x000000010092934c
- (id)initWithEnumeree:(id)arg1 useLabels:(_Bool)arg2;	// IMP=0x00000001009292ac

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSMutableDictionary;

@interface AppMonitorDimensionValueSet : NSObject <NSCopying>
{
    NSMutableDictionary *_dict;	// 8 = 0x8
}

@property(retain, nonatomic) NSMutableDictionary *dict; // @synthesize dict=_dict;
- (void).cxx_destruct;	// IMP=0x0000000101200518
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000101200480
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001012003a0
- (unsigned long long)hash;	// IMP=0x0000000101200368
- (id)valueForName:(id)arg1;	// IMP=0x00000001012002e0
- (_Bool)containValueForName:(id)arg1;	// IMP=0x0000000101200250
- (void)setValue:(id)arg1 forName:(id)arg2;	// IMP=0x00000001012001b0
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000001012000d8
- (id)init;	// IMP=0x0000000101200054
- (void)dealloc;	// IMP=0x000000010120001c

@end


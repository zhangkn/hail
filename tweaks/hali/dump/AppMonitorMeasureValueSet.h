//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSMutableDictionary;

@interface AppMonitorMeasureValueSet : NSObject <NSCopying>
{
    NSMutableDictionary *_dict;	// 8 = 0x8
}

@property(retain, nonatomic) NSMutableDictionary *dict; // @synthesize dict=_dict;
- (void).cxx_destruct;	// IMP=0x0000000101208578
- (id)jsonDict;	// IMP=0x00000001012082f0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001012082ac
- (void)merge:(id)arg1;	// IMP=0x00000001012080f0
- (id)valueForName:(id)arg1;	// IMP=0x0000000101208068
- (_Bool)containValueForName:(id)arg1;	// IMP=0x0000000101207fd8
- (void)setValue:(id)arg1 forName:(id)arg2;	// IMP=0x0000000101207f18
- (void)setDoubleValue:(double)arg1 forName:(id)arg2;	// IMP=0x0000000101207e54
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000101207bf0
- (id)init;	// IMP=0x0000000101207bb8
- (void)dealloc;	// IMP=0x0000000101207b80

@end


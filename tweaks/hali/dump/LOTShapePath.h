//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LOTKeyframeGroup, NSNumber, NSString;

@interface LOTShapePath : NSObject
{
    _Bool _closed;	// 8 = 0x8
    NSString *_keyname;	// 16 = 0x10
    NSNumber *_index;	// 24 = 0x18
    LOTKeyframeGroup *_shapePath;	// 32 = 0x20
}

@property(readonly, nonatomic) LOTKeyframeGroup *shapePath; // @synthesize shapePath=_shapePath;
@property(readonly, nonatomic) NSNumber *index; // @synthesize index=_index;
@property(readonly, nonatomic) _Bool closed; // @synthesize closed=_closed;
@property(readonly, nonatomic) NSString *keyname; // @synthesize keyname=_keyname;
- (void).cxx_destruct;	// IMP=0x0000000101d039c8
- (void)_mapFromJSON:(id)arg1;	// IMP=0x0000000101d03800
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000101d03788

@end


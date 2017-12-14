//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LOTKeyframeGroup, NSString;

@interface LOTShapeTransform : NSObject
{
    NSString *_keyname;	// 8 = 0x8
    LOTKeyframeGroup *_position;	// 16 = 0x10
    LOTKeyframeGroup *_anchor;	// 24 = 0x18
    LOTKeyframeGroup *_scale;	// 32 = 0x20
    LOTKeyframeGroup *_rotation;	// 40 = 0x28
    LOTKeyframeGroup *_opacity;	// 48 = 0x30
}

@property(readonly, nonatomic) LOTKeyframeGroup *opacity; // @synthesize opacity=_opacity;
@property(readonly, nonatomic) LOTKeyframeGroup *rotation; // @synthesize rotation=_rotation;
@property(readonly, nonatomic) LOTKeyframeGroup *scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) LOTKeyframeGroup *anchor; // @synthesize anchor=_anchor;
@property(readonly, nonatomic) LOTKeyframeGroup *position; // @synthesize position=_position;
@property(readonly, nonatomic) NSString *keyname; // @synthesize keyname=_keyname;
- (void).cxx_destruct;	// IMP=0x0000000101d05824
- (id)description;	// IMP=0x0000000101d0567c
- (void)_mapFromJSON:(id)arg1;	// IMP=0x0000000101d05190
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000101d05118

@end


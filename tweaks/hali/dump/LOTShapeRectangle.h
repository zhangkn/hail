//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LOTKeyframeGroup, NSString;

@interface LOTShapeRectangle : NSObject
{
    _Bool _reversed;	// 8 = 0x8
    NSString *_keyname;	// 16 = 0x10
    LOTKeyframeGroup *_position;	// 24 = 0x18
    LOTKeyframeGroup *_size;	// 32 = 0x20
    LOTKeyframeGroup *_cornerRadius;	// 40 = 0x28
}

@property(readonly, nonatomic) _Bool reversed; // @synthesize reversed=_reversed;
@property(readonly, nonatomic) LOTKeyframeGroup *cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(readonly, nonatomic) LOTKeyframeGroup *size; // @synthesize size=_size;
@property(readonly, nonatomic) LOTKeyframeGroup *position; // @synthesize position=_position;
@property(readonly, nonatomic) NSString *keyname; // @synthesize keyname=_keyname;
- (void).cxx_destruct;	// IMP=0x0000000101d03d18
- (void)_mapFromJSON:(id)arg1;	// IMP=0x0000000101d03a94
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000101d03a1c

@end


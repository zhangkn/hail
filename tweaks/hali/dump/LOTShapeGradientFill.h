//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LOTKeyframeGroup, NSNumber, NSString;

@interface LOTShapeGradientFill : NSObject
{
    _Bool _evenOddFillRule;	// 8 = 0x8
    NSString *_keyname;	// 16 = 0x10
    NSNumber *_numberOfColors;	// 24 = 0x18
    LOTKeyframeGroup *_startPoint;	// 32 = 0x20
    LOTKeyframeGroup *_endPoint;	// 40 = 0x28
    LOTKeyframeGroup *_gradient;	// 48 = 0x30
    LOTKeyframeGroup *_opacity;	// 56 = 0x38
    unsigned long long _type;	// 64 = 0x40
}

@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) _Bool evenOddFillRule; // @synthesize evenOddFillRule=_evenOddFillRule;
@property(readonly, nonatomic) LOTKeyframeGroup *opacity; // @synthesize opacity=_opacity;
@property(readonly, nonatomic) LOTKeyframeGroup *gradient; // @synthesize gradient=_gradient;
@property(readonly, nonatomic) LOTKeyframeGroup *endPoint; // @synthesize endPoint=_endPoint;
@property(readonly, nonatomic) LOTKeyframeGroup *startPoint; // @synthesize startPoint=_startPoint;
@property(readonly, nonatomic) NSNumber *numberOfColors; // @synthesize numberOfColors=_numberOfColors;
@property(readonly, nonatomic) NSString *keyname; // @synthesize keyname=_keyname;
- (void).cxx_destruct;	// IMP=0x0000000101d03034
- (void)_mapFromJSON:(id)arg1;	// IMP=0x0000000101d02c34
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000101d02bbc

@end


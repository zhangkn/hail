//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface LOTKeyframeGroup : NSObject
{
    NSArray *_keyframes;	// 8 = 0x8
}

@property(readonly, nonatomic) NSArray *keyframes; // @synthesize keyframes=_keyframes;
- (void).cxx_destruct;	// IMP=0x0000000101cf89cc
- (void)remapKeyframesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000101cf8888
- (void)buildKeyframesFromData:(id)arg1;	// IMP=0x0000000101cf81b8
- (id)initWithData:(id)arg1;	// IMP=0x0000000101cf809c

@end


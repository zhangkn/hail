//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AEDefaultUIPresentInfo : NSObject
{
    _Bool _needsAnimation;	// 8 = 0x8
    long long _vcHash;	// 16 = 0x10
    unsigned long long _presentMode;	// 24 = 0x18
}

@property(nonatomic) _Bool needsAnimation; // @synthesize needsAnimation=_needsAnimation;
@property(nonatomic) unsigned long long presentMode; // @synthesize presentMode=_presentMode;
@property(nonatomic) long long vcHash; // @synthesize vcHash=_vcHash;
- (id)initWithVCHash:(long long)arg1 presentMode:(unsigned long long)arg2 needsAnimation:(_Bool)arg3;	// IMP=0x0000000100a395a0

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RWPromise.h"

@class NSMutableArray, NSMutableSet;

@interface RWRacePromise : RWPromise
{
    NSMutableArray *_values;	// 8 = 0x8
    NSMutableSet *_promises;	// 16 = 0x10
}

@property(retain, nonatomic) NSMutableSet *promises; // @synthesize promises=_promises;
- (void).cxx_destruct;	// IMP=0x0000000100937f24
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100937b34
- (id)initWithRacePromises:(id)arg1;	// IMP=0x0000000100937620

@end


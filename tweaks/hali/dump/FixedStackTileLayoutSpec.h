//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "StackTileLayoutSpec.h"

@interface FixedStackTileLayoutSpec : StackTileLayoutSpec
{
    struct CGPoint _resetOrigin;	// 8 = 0x8
    struct CGSize _resetSize;	// 24 = 0x18
}

@property(nonatomic) struct CGSize resetSize; // @synthesize resetSize=_resetSize;
@property(nonatomic) struct CGPoint resetOrigin; // @synthesize resetOrigin=_resetOrigin;
- (void)updateLayoutWithContext:(id)arg1 update:(_Bool)arg2;	// IMP=0x0000000101a4f470
- (void)layoutForTile:(id)arg1 context:(id)arg2;	// IMP=0x0000000101a4e928

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FixedStackTile.h"

#import "AEStackTileEnvironment.h"

@class AEBaseStackTileStyle, NSString;

@interface AEFixedStack : FixedStackTile <AEStackTileEnvironment>
{
    _Bool unfinished;	// 8 = 0x8
    AEBaseStackTileStyle *_aeStyle;	// 16 = 0x10
}

+ (Class)styleClass;	// IMP=0x00000001009fabf0
@property(retain, nonatomic) AEBaseStackTileStyle *aeStyle; // @synthesize aeStyle=_aeStyle;
@property(nonatomic) _Bool unfinished; // @synthesize unfinished;
- (void).cxx_destruct;	// IMP=0x00000001009fb058
- (id)initWithTileDTO:(id)arg1;	// IMP=0x00000001009face4
@property(retain, nonatomic) AEBaseStackTileStyle *style; // @dynamic style;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface AETilesManager : NSObject
{
    NSMutableDictionary *_tilesPool;	// 8 = 0x8
}

+ (id)sharedManager;	// IMP=0x00000001009cc610
@property(retain, nonatomic) NSMutableDictionary *tilesPool; // @synthesize tilesPool=_tilesPool;
- (void).cxx_destruct;	// IMP=0x00000001009ccb9c
- (id)queryUnitWithTileClass:(Class)arg1;	// IMP=0x00000001009cc9c4
- (id)registeredTileUnits;	// IMP=0x00000001009cc96c
- (id)tileUnitForTemplateId:(id)arg1;	// IMP=0x00000001009cc954
- (void)registerTile:(id)arg1 forTemplateId:(id)arg2;	// IMP=0x00000001009cc70c
- (id)init;	// IMP=0x00000001009cc690

@end


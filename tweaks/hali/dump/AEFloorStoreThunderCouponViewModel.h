//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTile.h"

@class AETextTileComponent, NSMutableArray, NSMutableDictionary;

@interface AEFloorStoreThunderCouponViewModel : AEBaseTile
{
    AETextTileComponent *_titleVM;	// 8 = 0x8
    AETextTileComponent *_desVM;	// 16 = 0x10
    AETextTileComponent *_subscribleLblVM;	// 24 = 0x18
    NSMutableDictionary *_couponCommonDesDict;	// 32 = 0x20
    NSMutableArray *_segementVMs;	// 40 = 0x28
    AETextTileComponent *_viewMoreVM;	// 48 = 0x30
}

+ (Class)cellClass;	// IMP=0x0000000100d47054
@property(retain, nonatomic) AETextTileComponent *viewMoreVM; // @synthesize viewMoreVM=_viewMoreVM;
@property(retain, nonatomic) NSMutableArray *segementVMs; // @synthesize segementVMs=_segementVMs;
@property(retain, nonatomic) NSMutableDictionary *couponCommonDesDict; // @synthesize couponCommonDesDict=_couponCommonDesDict;
@property(retain, nonatomic) AETextTileComponent *subscribleLblVM; // @synthesize subscribleLblVM=_subscribleLblVM;
@property(retain, nonatomic) AETextTileComponent *desVM; // @synthesize desVM=_desVM;
@property(retain, nonatomic) AETextTileComponent *titleVM; // @synthesize titleVM=_titleVM;
- (void).cxx_destruct;	// IMP=0x0000000100d46ea0
- (id)initWithTileDTO:(id)arg1;	// IMP=0x0000000100d452a4

@end

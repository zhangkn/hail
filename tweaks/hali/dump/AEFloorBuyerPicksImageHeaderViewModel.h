//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTile.h"

@class AEComponentBuyerPicksImageHeaderViewModel;

@interface AEFloorBuyerPicksImageHeaderViewModel : AEBaseTile
{
    AEComponentBuyerPicksImageHeaderViewModel *_leftComponent;	// 8 = 0x8
    AEComponentBuyerPicksImageHeaderViewModel *_rightComponent;	// 16 = 0x10
}

+ (Class)cellClass;	// IMP=0x0000000100311578
@property(retain, nonatomic) AEComponentBuyerPicksImageHeaderViewModel *rightComponent; // @synthesize rightComponent=_rightComponent;
@property(retain, nonatomic) AEComponentBuyerPicksImageHeaderViewModel *leftComponent; // @synthesize leftComponent=_leftComponent;
- (void).cxx_destruct;	// IMP=0x0000000100311418
- (id)initWithTileDTO:(id)arg1;	// IMP=0x0000000100310fec

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTile.h"

@class AECountDownTileComponent, AEImageTileComponent, AETextTileComponent;

@interface AEFloorCoinsTitleViewModel : AEBaseTile
{
    AETextTileComponent *_titleModel;	// 8 = 0x8
    AEImageTileComponent *_rulesIconModel;	// 16 = 0x10
    AETextTileComponent *_promptModel;	// 24 = 0x18
    AECountDownTileComponent *_countDownModel;	// 32 = 0x20
}

+ (Class)cellClass;	// IMP=0x000000010032fa90
@property(retain, nonatomic) AECountDownTileComponent *countDownModel; // @synthesize countDownModel=_countDownModel;
@property(retain, nonatomic) AETextTileComponent *promptModel; // @synthesize promptModel=_promptModel;
@property(retain, nonatomic) AEImageTileComponent *rulesIconModel; // @synthesize rulesIconModel=_rulesIconModel;
@property(retain, nonatomic) AETextTileComponent *titleModel; // @synthesize titleModel=_titleModel;
- (void).cxx_destruct;	// IMP=0x000000010032f908
- (id)initWithTileDTO:(id)arg1;	// IMP=0x000000010032f4f4

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTile.h"

@class AETextTileComponent;

@interface AEFloorBuyerPicksTitleHeaderViewModel : AEBaseTile
{
    AETextTileComponent *_mainTitle;	// 8 = 0x8
    AETextTileComponent *_subTitle;	// 16 = 0x10
}

+ (Class)cellClass;	// IMP=0x00000001003189e8
@property(retain, nonatomic) AETextTileComponent *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) AETextTileComponent *mainTitle; // @synthesize mainTitle=_mainTitle;
- (void).cxx_destruct;	// IMP=0x0000000100318888
- (id)initWithTileDTO:(id)arg1;	// IMP=0x00000001003185e0

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTileComponent.h"

@class AETextTileComponent, NSString;

@interface AEComponentBuyerPicksImageHeaderViewModel : AEBaseTileComponent
{
    NSString *_titleImage;	// 8 = 0x8
    NSString *_action;	// 16 = 0x10
    AETextTileComponent *_title;	// 24 = 0x18
}

@property(retain, nonatomic) AETextTileComponent *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *titleImage; // @synthesize titleImage=_titleImage;
- (void).cxx_destruct;	// IMP=0x000000010031045c

@end

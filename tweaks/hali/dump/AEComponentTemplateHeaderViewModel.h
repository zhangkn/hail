//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTileComponent.h"

@class AEImageTileComponent, AETextTileComponent, NSString;

@interface AEComponentTemplateHeaderViewModel : AEBaseTileComponent
{
    AETextTileComponent *_titleModel;	// 8 = 0x8
    AETextTileComponent *_subtitleModel;	// 16 = 0x10
    AETextTileComponent *_moreModel;	// 24 = 0x18
    AEImageTileComponent *_coinsImageModel;	// 32 = 0x20
    NSString *_templateColor;	// 40 = 0x28
    NSString *_action;	// 48 = 0x30
}

@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *templateColor; // @synthesize templateColor=_templateColor;
@property(retain, nonatomic) AEImageTileComponent *coinsImageModel; // @synthesize coinsImageModel=_coinsImageModel;
@property(retain, nonatomic) AETextTileComponent *moreModel; // @synthesize moreModel=_moreModel;
@property(retain, nonatomic) AETextTileComponent *subtitleModel; // @synthesize subtitleModel=_subtitleModel;
@property(retain, nonatomic) AETextTileComponent *titleModel; // @synthesize titleModel=_titleModel;
- (void).cxx_destruct;	// IMP=0x00000001009e8e74

@end

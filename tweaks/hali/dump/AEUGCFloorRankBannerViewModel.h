//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTile.h"

@class AEImageTileComponent, AETextTileComponent, NSString;

@interface AEUGCFloorRankBannerViewModel : AEBaseTile
{
    AETextTileComponent *_titleModel;	// 8 = 0x8
    AETextTileComponent *_updateModel;	// 16 = 0x10
    AETextTileComponent *_timeModel;	// 24 = 0x18
    AETextTileComponent *_rulesModel;	// 32 = 0x20
    AEImageTileComponent *_indicateImgModel;	// 40 = 0x28
    NSString *_bannerBackgroundColor;	// 48 = 0x30
}

+ (Class)cellClass;	// IMP=0x0000000100dba918
@property(retain, nonatomic) NSString *bannerBackgroundColor; // @synthesize bannerBackgroundColor=_bannerBackgroundColor;
@property(retain, nonatomic) AEImageTileComponent *indicateImgModel; // @synthesize indicateImgModel=_indicateImgModel;
@property(retain, nonatomic) AETextTileComponent *rulesModel; // @synthesize rulesModel=_rulesModel;
@property(retain, nonatomic) AETextTileComponent *timeModel; // @synthesize timeModel=_timeModel;
@property(retain, nonatomic) AETextTileComponent *updateModel; // @synthesize updateModel=_updateModel;
@property(retain, nonatomic) AETextTileComponent *titleModel; // @synthesize titleModel=_titleModel;
- (void).cxx_destruct;	// IMP=0x0000000100dba768
- (double)heightForReferenceWidth:(double)arg1;	// IMP=0x0000000100dba5ac
- (id)initWithTileDTO:(id)arg1;	// IMP=0x0000000100db9f00

@end

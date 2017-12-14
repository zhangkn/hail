//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTile.h"

@class AEComponentGrayHalfCircleTagViewModel, AEImageTileComponent, AETextTileComponent, NSArray, NSString;

@interface AESeascapeFloorViewModel : AEBaseTile
{
    NSString *_action;	// 8 = 0x8
    AEImageTileComponent *_featuredImageModel;	// 16 = 0x10
    AEImageTileComponent *_storeLogoModel;	// 24 = 0x18
    AETextTileComponent *_storeNameModel;	// 32 = 0x20
    AETextTileComponent *_storePromptModel;	// 40 = 0x28
    NSArray *_productModels;	// 48 = 0x30
    AEComponentGrayHalfCircleTagViewModel *_circleTagModel;	// 56 = 0x38
}

+ (id)rewrite:(id)arg1;	// IMP=0x000000010040fc50
+ (Class)cellClass;	// IMP=0x00000001004108a8
@property(retain, nonatomic) AEComponentGrayHalfCircleTagViewModel *circleTagModel; // @synthesize circleTagModel=_circleTagModel;
@property(retain, nonatomic) NSArray *productModels; // @synthesize productModels=_productModels;
@property(retain, nonatomic) AETextTileComponent *storePromptModel; // @synthesize storePromptModel=_storePromptModel;
@property(retain, nonatomic) AETextTileComponent *storeNameModel; // @synthesize storeNameModel=_storeNameModel;
@property(retain, nonatomic) AEImageTileComponent *storeLogoModel; // @synthesize storeLogoModel=_storeLogoModel;
@property(retain, nonatomic) AEImageTileComponent *featuredImageModel; // @synthesize featuredImageModel=_featuredImageModel;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
- (void).cxx_destruct;	// IMP=0x00000001004106e4
- (double)estimatedHeightForReferenceWidth:(double)arg1;	// IMP=0x000000010041050c
- (id)initWithTileDTO:(id)arg1;	// IMP=0x000000010040fd28

@end


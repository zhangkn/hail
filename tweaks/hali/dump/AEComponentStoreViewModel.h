//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTileComponent.h"

@class AEImageTileComponent, AETextTileComponent, NSString;

@interface AEComponentStoreViewModel : AEBaseTileComponent
{
    NSString *_action;	// 8 = 0x8
    AEImageTileComponent *_storeLogoModel;	// 16 = 0x10
    AETextTileComponent *_storeNameModel;	// 24 = 0x18
    AETextTileComponent *_prompt1Model;	// 32 = 0x20
    AETextTileComponent *_prompt2Model;	// 40 = 0x28
}

@property(retain, nonatomic) AETextTileComponent *prompt2Model; // @synthesize prompt2Model=_prompt2Model;
@property(retain, nonatomic) AETextTileComponent *prompt1Model; // @synthesize prompt1Model=_prompt1Model;
@property(retain, nonatomic) AETextTileComponent *storeNameModel; // @synthesize storeNameModel=_storeNameModel;
@property(retain, nonatomic) AEImageTileComponent *storeLogoModel; // @synthesize storeLogoModel=_storeLogoModel;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
- (void).cxx_destruct;	// IMP=0x00000001009dd280

@end


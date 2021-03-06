//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTileComponent.h"

@class AEImageTileComponent, AETextTileComponent;

@interface AESmartProductComponentViewModel : AEBaseTileComponent
{
    AEImageTileComponent *_productModel;	// 8 = 0x8
    AETextTileComponent *_prompt1Model;	// 16 = 0x10
    AETextTileComponent *_prompt2Model;	// 24 = 0x18
}

@property(retain, nonatomic) AETextTileComponent *prompt2Model; // @synthesize prompt2Model=_prompt2Model;
@property(retain, nonatomic) AETextTileComponent *prompt1Model; // @synthesize prompt1Model=_prompt1Model;
@property(retain, nonatomic) AEImageTileComponent *productModel; // @synthesize productModel=_productModel;
- (void).cxx_destruct;	// IMP=0x00000001009e0784
- (id)initWithTileDTO:(id)arg1;	// IMP=0x00000001009e0490

@end


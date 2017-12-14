//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTileComponent.h"

@class AEImageTileComponent, AETextTileComponent;

@interface AE329PreOrderMainComponentViewModel : AEBaseTileComponent
{
    AETextTileComponent *_titleModel;	// 8 = 0x8
    AEImageTileComponent *_imgModel;	// 16 = 0x10
    AETextTileComponent *_promptModel;	// 24 = 0x18
}

@property(retain, nonatomic) AETextTileComponent *promptModel; // @synthesize promptModel=_promptModel;
@property(retain, nonatomic) AEImageTileComponent *imgModel; // @synthesize imgModel=_imgModel;
@property(retain, nonatomic) AETextTileComponent *titleModel; // @synthesize titleModel=_titleModel;
- (void).cxx_destruct;	// IMP=0x00000001002d7134
- (id)initWithTileDTO:(id)arg1;	// IMP=0x00000001002d6e40
- (double)heightForReferenceWidth:(double)arg1;	// IMP=0x00000001002d6e1c

@end


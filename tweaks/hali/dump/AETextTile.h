//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTile.h"

@class AETextTileComponent;

@interface AETextTile : AEBaseTile
{
    AETextTileComponent *_textComponent;	// 8 = 0x8
}

+ (Class)cellClass;	// IMP=0x00000001009e07e4
@property(retain, nonatomic) AETextTileComponent *textComponent; // @synthesize textComponent=_textComponent;
- (void).cxx_destruct;	// IMP=0x00000001009e0b6c
- (double)heightForReferenceWidth:(double)arg1;	// IMP=0x00000001009e0914
- (id)initWithTileDTO:(id)arg1;	// IMP=0x00000001009e07f8

@end


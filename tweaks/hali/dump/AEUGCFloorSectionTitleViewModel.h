//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTile.h"

@class AETextTileComponent;

@interface AEUGCFloorSectionTitleViewModel : AEBaseTile
{
    AETextTileComponent *_titleModel;	// 8 = 0x8
}

+ (Class)cellClass;	// IMP=0x0000000100d930e0
@property(retain, nonatomic) AETextTileComponent *titleModel; // @synthesize titleModel=_titleModel;
- (void).cxx_destruct;	// IMP=0x0000000100d92fac
- (double)heightForReferenceWidth:(double)arg1;	// IMP=0x0000000100d92f5c
- (id)initWithTileDTO:(id)arg1;	// IMP=0x0000000100d92e40

@end


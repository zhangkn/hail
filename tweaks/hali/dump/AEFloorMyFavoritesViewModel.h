//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTile.h"

@class AEComponentTemplateHeaderViewModel, AEFloorTwoTitleViewModel, NSArray;

@interface AEFloorMyFavoritesViewModel : AEBaseTile
{
    AEComponentTemplateHeaderViewModel *_headerViewModel;	// 8 = 0x8
    AEFloorTwoTitleViewModel *_titleViewModel;	// 16 = 0x10
    NSArray *_imageModels;	// 24 = 0x18
}

+ (Class)cellClass;	// IMP=0x0000000100349414
@property(retain, nonatomic) NSArray *imageModels; // @synthesize imageModels=_imageModels;
@property(retain, nonatomic) AEFloorTwoTitleViewModel *titleViewModel; // @synthesize titleViewModel=_titleViewModel;
@property(retain, nonatomic) AEComponentTemplateHeaderViewModel *headerViewModel; // @synthesize headerViewModel=_headerViewModel;
- (void).cxx_destruct;	// IMP=0x0000000100348400
- (id)initWithTileDTO:(id)arg1;	// IMP=0x0000000100349434

@end

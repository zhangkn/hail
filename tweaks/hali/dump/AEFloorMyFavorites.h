//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETileAdapterFloor.h"

@class AEComponentTemplateHeader, AEFloorTwoTitle, NSArray, UIView;

@interface AEFloorMyFavorites : AETileAdapterFloor
{
    UIView *_line;	// 8 = 0x8
    AEComponentTemplateHeader *_header;	// 16 = 0x10
    AEFloorTwoTitle *_title;	// 24 = 0x18
    NSArray *_images;	// 32 = 0x20
}

+ (Class)modelClass;	// IMP=0x000000010034733c
+ (id)identifier;	// IMP=0x0000000100347310
@property(retain, nonatomic) NSArray *images; // @synthesize images=_images;
@property(retain, nonatomic) AEFloorTwoTitle *title; // @synthesize title=_title;
@property(retain, nonatomic) AEComponentTemplateHeader *header; // @synthesize header=_header;
- (void).cxx_destruct;	// IMP=0x00000001003482c0
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x0000000100347f88
- (id)initFloor;	// IMP=0x0000000100347350

@end


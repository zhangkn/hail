//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETileAdapterFloor.h"

@class AEUGCHomeHozSlider, NSMutableArray, UILabel;

@interface AEUGCFloorHScroll1 : AETileAdapterFloor
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_subtitleLabel;	// 16 = 0x10
    AEUGCHomeHozSlider *_hozSlider;	// 24 = 0x18
    NSMutableArray *_sliderItems;	// 32 = 0x20
}

+ (Class)modelClass;	// IMP=0x0000000100dbb4c8
+ (id)identifier;	// IMP=0x0000000100dbb49c
@property(retain, nonatomic) NSMutableArray *sliderItems; // @synthesize sliderItems=_sliderItems;
@property(retain, nonatomic) AEUGCHomeHozSlider *hozSlider; // @synthesize hozSlider=_hozSlider;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;	// IMP=0x0000000100dbda68
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x0000000100dbc514
- (void)configConstraints;	// IMP=0x0000000100dbb644
- (void)configComponents;	// IMP=0x0000000100dbb544
- (id)initFloor;	// IMP=0x0000000100dbb4dc

@end


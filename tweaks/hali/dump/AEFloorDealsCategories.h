//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETileAdapterFloor.h"

@class UIImageView, UILabel;

@interface AEFloorDealsCategories : AETileAdapterFloor
{
    UIImageView *_categoryImageView;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    double _titleHRatio;	// 24 = 0x18
}

+ (Class)modelClass;	// IMP=0x0000000100333524
+ (id)identifier;	// IMP=0x00000001003334f8
@property(nonatomic) double titleHRatio; // @synthesize titleHRatio=_titleHRatio;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *categoryImageView; // @synthesize categoryImageView=_categoryImageView;
- (void).cxx_destruct;	// IMP=0x0000000100334248
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x0000000100333da4
- (void)configConstraints;	// IMP=0x00000001003337b0
- (void)configComponents;	// IMP=0x00000001003335ec
- (id)initFloor;	// IMP=0x0000000100333538

@end

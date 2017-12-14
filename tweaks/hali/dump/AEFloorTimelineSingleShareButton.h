//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETileAdapterFloor.h"

@class UIImageView, UILabel;

@interface AEFloorTimelineSingleShareButton : AETileAdapterFloor
{
    UILabel *_subject;	// 8 = 0x8
    UIImageView *_backgroundImage;	// 16 = 0x10
}

+ (Class)modelClass;	// IMP=0x00000001003851cc
+ (id)identifier;	// IMP=0x00000001003851a0
+ (id)floorDescription;	// IMP=0x0000000100385174
@property(retain, nonatomic) UIImageView *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) UILabel *subject; // @synthesize subject=_subject;
- (void).cxx_destruct;	// IMP=0x0000000100386cb0
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x0000000100385fc8
- (void)updateConstraints;	// IMP=0x000000010038551c
- (void)configComponents;	// IMP=0x0000000100385238
- (id)initFloor;	// IMP=0x00000001003851e0

@end


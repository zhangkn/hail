//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETileAdapterFloor.h"

@class UIImageView;

@interface AEUGCFloorFeedBanner : AETileAdapterFloor
{
    UIImageView *_bannerImgView;	// 8 = 0x8
}

+ (Class)modelClass;	// IMP=0x0000000100dc0444
+ (id)identifier;	// IMP=0x0000000100dc0418
@property(retain, nonatomic) UIImageView *bannerImgView; // @synthesize bannerImgView=_bannerImgView;
- (void).cxx_destruct;	// IMP=0x0000000100dc1044
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x0000000100dc0e28
- (void)configConstraints;	// IMP=0x0000000100dc0554
- (void)configComponents;	// IMP=0x0000000100dc04c0
- (id)initFloor;	// IMP=0x0000000100dc0458

@end


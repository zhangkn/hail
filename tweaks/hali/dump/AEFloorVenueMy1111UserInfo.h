//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETileAdapterFloor.h"

@class AEFloorVenueMy1111UserInfoMemberTag, UIButton, UIImageView, UIView;

@interface AEFloorVenueMy1111UserInfo : AETileAdapterFloor
{
    UIImageView *_bgImage;	// 8 = 0x8
    UIImageView *_userPhoto;	// 16 = 0x10
    UIButton *_userName;	// 24 = 0x18
    AEFloorVenueMy1111UserInfoMemberTag *_memberTag;	// 32 = 0x20
    UIView *_userPhotoContainer;	// 40 = 0x28
}

+ (Class)modelClass;	// IMP=0x00000001003a622c
+ (id)identifier;	// IMP=0x00000001003a6200
@property(retain, nonatomic) UIView *userPhotoContainer; // @synthesize userPhotoContainer=_userPhotoContainer;
@property(retain, nonatomic) AEFloorVenueMy1111UserInfoMemberTag *memberTag; // @synthesize memberTag=_memberTag;
@property(retain, nonatomic) UIButton *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) UIImageView *userPhoto; // @synthesize userPhoto=_userPhoto;
@property(retain, nonatomic) UIImageView *bgImage; // @synthesize bgImage=_bgImage;
- (void).cxx_destruct;	// IMP=0x00000001003a7eb8
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x00000001003a76b4
- (void)configConstraints;	// IMP=0x00000001003a687c
- (void)configComponents;	// IMP=0x00000001003a62c4
- (id)initFloor;	// IMP=0x00000001003a6240

@end


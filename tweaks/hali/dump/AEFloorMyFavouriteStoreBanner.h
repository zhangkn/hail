//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETileAdapterFloor.h"

@class AEComponentFollowBottom, AEComponentHeaderStore, UIImageView;

@interface AEFloorMyFavouriteStoreBanner : AETileAdapterFloor
{
    AEComponentHeaderStore *_header;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
    AEComponentFollowBottom *_bottom;	// 24 = 0x18
}

+ (Class)modelClass;	// IMP=0x0000000100357764
+ (id)identifier;	// IMP=0x0000000100357738
@property(retain, nonatomic) AEComponentFollowBottom *bottom; // @synthesize bottom=_bottom;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) AEComponentHeaderStore *header; // @synthesize header=_header;
- (void).cxx_destruct;	// IMP=0x0000000100358788
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x0000000100357e14
- (void)setupConstraints;	// IMP=0x0000000100357968
- (id)initFloor;	// IMP=0x0000000100357778

@end

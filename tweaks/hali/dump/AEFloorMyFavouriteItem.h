//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETileAdapterFloor.h"

@class AEComponent3Products1Row, AEComponentFollowBottom, AEComponentHeaderStore;

@interface AEFloorMyFavouriteItem : AETileAdapterFloor
{
    AEComponentHeaderStore *_headerStore;	// 8 = 0x8
    AEComponent3Products1Row *_products;	// 16 = 0x10
    AEComponentFollowBottom *_bottom;	// 24 = 0x18
}

+ (Class)modelClass;	// IMP=0x0000000100355864
+ (id)additionalIdentifiers;	// IMP=0x00000001003557d8
+ (id)identifier;	// IMP=0x00000001003557ac
@property(retain, nonatomic) AEComponentFollowBottom *bottom; // @synthesize bottom=_bottom;
@property(retain, nonatomic) AEComponent3Products1Row *products; // @synthesize products=_products;
@property(retain, nonatomic) AEComponentHeaderStore *headerStore; // @synthesize headerStore=_headerStore;
- (void).cxx_destruct;	// IMP=0x0000000100356858
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x000000010035640c
- (void)prepareForReuse;	// IMP=0x000000010035638c
- (void)buildConstranits;	// IMP=0x0000000100355b4c
- (id)initFloor;	// IMP=0x0000000100355878

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETileAdapterFloor.h"

@class AESearchLessResultView;

@interface AEProductListFooterFloor : AETileAdapterFloor
{
    AESearchLessResultView *_footerRecommendView;	// 8 = 0x8
}

+ (Class)modelClass;	// IMP=0x0000000100c82fa4
+ (id)identifier;	// IMP=0x0000000100c82f78
@property(retain, nonatomic) AESearchLessResultView *footerRecommendView; // @synthesize footerRecommendView=_footerRecommendView;
- (void).cxx_destruct;	// IMP=0x0000000100c83388
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x0000000100c8326c
- (void)configConstraints;	// IMP=0x0000000100c83268
- (void)configComponents;	// IMP=0x0000000100c83020
- (id)initFloor;	// IMP=0x0000000100c82fb8

@end

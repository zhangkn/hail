//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETileAdapterFloor.h"

@class AEComponentBuyerPicksFeedback, NSArray, NSMutableArray, UILabel;

@interface AEFloorBuyerPicksFeedback : AETileAdapterFloor
{
    NSMutableArray *_feedbacks;	// 8 = 0x8
    AEComponentBuyerPicksFeedback *_lastFeedback;	// 16 = 0x10
    AEComponentBuyerPicksFeedback *_firstFeedback;	// 24 = 0x18
    UILabel *_allCounts;	// 32 = 0x20
    UILabel *_viewAllButton;	// 40 = 0x28
}

+ (Class)modelClass;	// IMP=0x000000010030d28c
+ (id)additionalIdentifiers;	// IMP=0x000000010030d224
+ (id)identifier;	// IMP=0x000000010030d1f8
@property(retain, nonatomic) UILabel *viewAllButton; // @synthesize viewAllButton=_viewAllButton;
@property(retain, nonatomic) UILabel *allCounts; // @synthesize allCounts=_allCounts;
@property(retain, nonatomic) NSArray *feedbacks; // @synthesize feedbacks=_feedbacks;
- (void).cxx_destruct;	// IMP=0x000000010030ede0
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x000000010030d620
- (id)initFloor;	// IMP=0x000000010030d2a0

@end

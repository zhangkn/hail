//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETileAdapterFloor.h"

@class UILabel;

@interface AESearchListEmptyRecommendSectionFloor : AETileAdapterFloor
{
    UILabel *_tipLabel;	// 8 = 0x8
}

+ (Class)modelClass;	// IMP=0x0000000100be44bc
+ (id)identifier;	// IMP=0x0000000100be4490
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
- (void).cxx_destruct;	// IMP=0x0000000100be4da8
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x0000000100be4bc0
- (void)configConstraints;	// IMP=0x0000000100be45c0
- (void)configComponents;	// IMP=0x0000000100be4574
- (id)initFloor;	// IMP=0x0000000100be44d0

@end


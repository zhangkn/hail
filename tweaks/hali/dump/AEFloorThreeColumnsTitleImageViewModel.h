//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTile.h"

@class AEComponentThreeColumnsTitleImageViewModel;

@interface AEFloorThreeColumnsTitleImageViewModel : AEBaseTile
{
    AEComponentThreeColumnsTitleImageViewModel *_componentViewModel1;	// 8 = 0x8
    AEComponentThreeColumnsTitleImageViewModel *_componentViewModel2;	// 16 = 0x10
    AEComponentThreeColumnsTitleImageViewModel *_componentViewModel3;	// 24 = 0x18
}

+ (Class)cellClass;	// IMP=0x0000000100380314
@property(retain, nonatomic) AEComponentThreeColumnsTitleImageViewModel *componentViewModel3; // @synthesize componentViewModel3=_componentViewModel3;
@property(retain, nonatomic) AEComponentThreeColumnsTitleImageViewModel *componentViewModel2; // @synthesize componentViewModel2=_componentViewModel2;
@property(retain, nonatomic) AEComponentThreeColumnsTitleImageViewModel *componentViewModel1; // @synthesize componentViewModel1=_componentViewModel1;
- (void).cxx_destruct;	// IMP=0x00000001003801a0
- (double)heightForReferenceWidth:(double)arg1;	// IMP=0x000000010037ffb4
- (id)init;	// IMP=0x000000010037ff80

@end

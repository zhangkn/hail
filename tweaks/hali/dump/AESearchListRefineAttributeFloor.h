//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETileAdapterFloor.h"

@class AESearchListRefineAttributeController;

@interface AESearchListRefineAttributeFloor : AETileAdapterFloor
{
    AESearchListRefineAttributeController *_listRefineAttributeController;	// 8 = 0x8
}

+ (Class)modelClass;	// IMP=0x0000000100c99f9c
+ (id)identifier;	// IMP=0x0000000100c99f70
@property(retain, nonatomic) AESearchListRefineAttributeController *listRefineAttributeController; // @synthesize listRefineAttributeController=_listRefineAttributeController;
- (void).cxx_destruct;	// IMP=0x0000000100c9a970
- (void)slipeUpAttribuValuesView;	// IMP=0x0000000100c9a4d4
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x0000000100c9a234
- (void)configConstraints;	// IMP=0x0000000100c9a230
- (void)configComponents;	// IMP=0x0000000100c9a018
- (id)initFloor;	// IMP=0x0000000100c99fb0

@end


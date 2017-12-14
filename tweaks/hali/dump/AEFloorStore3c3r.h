//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETileAdapterFloor.h"

@class AEStoreTitleComponent, UIView;

@interface AEFloorStore3c3r : AETileAdapterFloor
{
    AEStoreTitleComponent *_headerView;	// 8 = 0x8
    UIView *_containerView;	// 16 = 0x10
    AEStoreTitleComponent *_viewStoreView;	// 24 = 0x18
}

+ (Class)modelClass;	// IMP=0x0000000100d0d260
+ (id)identifier;	// IMP=0x0000000100d0d234
@property(retain, nonatomic) AEStoreTitleComponent *viewStoreView; // @synthesize viewStoreView=_viewStoreView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) AEStoreTitleComponent *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;	// IMP=0x0000000100d0fed4
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x0000000100d0e2ac
- (void)prepareForReuse;	// IMP=0x0000000100d0e0dc
- (void)configConstraints;	// IMP=0x0000000100d0d590
- (void)configComponents;	// IMP=0x0000000100d0d4d0
- (id)initFloor;	// IMP=0x0000000100d0d274

@end


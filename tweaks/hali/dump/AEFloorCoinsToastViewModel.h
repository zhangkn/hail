//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTile.h"

@class AETextTileComponent;

@interface AEFloorCoinsToastViewModel : AEBaseTile
{
    _Bool _success;	// 8 = 0x8
    AETextTileComponent *_toastModel;	// 16 = 0x10
    AETextTileComponent *_gotoMyCouponModel;	// 24 = 0x18
    AETextTileComponent *_couponLeftModel;	// 32 = 0x20
}

+ (Class)cellClass;	// IMP=0x0000000100331714
@property(retain, nonatomic) AETextTileComponent *couponLeftModel; // @synthesize couponLeftModel=_couponLeftModel;
@property(retain, nonatomic) AETextTileComponent *gotoMyCouponModel; // @synthesize gotoMyCouponModel=_gotoMyCouponModel;
@property(retain, nonatomic) AETextTileComponent *toastModel; // @synthesize toastModel=_toastModel;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;	// IMP=0x00000001003315a0
- (id)initWithTileDTO:(id)arg1;	// IMP=0x0000000100331108

@end

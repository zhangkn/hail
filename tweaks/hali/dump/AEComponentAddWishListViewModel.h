//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEBaseTileComponent.h"

@class NSString;

@interface AEComponentAddWishListViewModel : AEBaseTileComponent
{
    _Bool _active;	// 8 = 0x8
    unsigned long long _wishCount;	// 16 = 0x10
    NSString *_accessoryInfo;	// 24 = 0x18
    NSString *_action;	// 32 = 0x20
}

@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(copy, nonatomic) NSString *accessoryInfo; // @synthesize accessoryInfo=_accessoryInfo;
@property(nonatomic) unsigned long long wishCount; // @synthesize wishCount=_wishCount;
- (void).cxx_destruct;	// IMP=0x00000001003a18c8
- (id)init;	// IMP=0x00000001003a1730

@end

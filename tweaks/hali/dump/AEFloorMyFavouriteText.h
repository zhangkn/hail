//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETileAdapterFloor.h"

@class UILabel;

@interface AEFloorMyFavouriteText : AETileAdapterFloor
{
    UILabel *_textLabel;	// 8 = 0x8
}

+ (Class)modelClass;	// IMP=0x0000000100359530
+ (id)identifier;	// IMP=0x0000000100359504
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;	// IMP=0x0000000100359af4
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x0000000100359838
- (id)initFloor;	// IMP=0x0000000100359544

@end

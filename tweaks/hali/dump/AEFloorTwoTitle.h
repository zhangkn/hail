//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETileAdapterView.h"

@class UIImageView, UILabel;

@interface AEFloorTwoTitle : AETileAdapterView
{
    UILabel *_title;	// 8 = 0x8
    UILabel *_subTitle;	// 16 = 0x10
    UIImageView *_logo;	// 24 = 0x18
}

@property(retain, nonatomic) UIImageView *logo; // @synthesize logo=_logo;
@property(retain, nonatomic) UILabel *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
- (void).cxx_destruct;	// IMP=0x00000001003491cc
- (Class)viewModelClass;	// IMP=0x00000001003490e0
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x0000000100348f4c
- (id)init;	// IMP=0x0000000100348454

@end


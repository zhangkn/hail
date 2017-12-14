//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETileAdapterView.h"

#import "AEAddWishListCommandProtocol.h"

@class NSString, UIImageView, UILabel, UIView;

@interface AEComponentAddWishList : AETileAdapterView <AEAddWishListCommandProtocol>
{
    UIView *_dummy;	// 8 = 0x8
    UIImageView *_image;	// 16 = 0x10
    UILabel *_label;	// 24 = 0x18
}

@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *image; // @synthesize image=_image;
- (void).cxx_destruct;	// IMP=0x00000001003a16dc
- (void)updateContentDisplay;	// IMP=0x00000001003a14ec
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x00000001003a1158
- (Class)viewModelClass;	// IMP=0x00000001003a1144
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000001003a1088
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001003a0524
- (void)removeWishList;	// IMP=0x00000001002f2c70
- (void)addWishList:(id)arg1;	// IMP=0x00000001002f2c08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


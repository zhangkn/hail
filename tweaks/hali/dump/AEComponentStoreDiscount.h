//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETileAdapterView.h"

@class UIImageView, UILabel;

@interface AEComponentStoreDiscount : AETileAdapterView
{
    UILabel *_labelA;	// 8 = 0x8
    UILabel *_labelB;	// 16 = 0x10
    UILabel *_labelC;	// 24 = 0x18
    UIImageView *_indictor;	// 32 = 0x20
}

@property(retain, nonatomic) UIImageView *indictor; // @synthesize indictor=_indictor;
@property(retain, nonatomic) UILabel *labelC; // @synthesize labelC=_labelC;
@property(retain, nonatomic) UILabel *labelB; // @synthesize labelB=_labelB;
@property(retain, nonatomic) UILabel *labelA; // @synthesize labelA=_labelA;
- (void).cxx_destruct;	// IMP=0x00000001009ce12c
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x00000001009cddb8
- (Class)viewModelClass;	// IMP=0x00000001009cdda4
- (void)buildConstranits;	// IMP=0x00000001009cd284
- (void)prepareForReuse;	// IMP=0x00000001009cd088
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001009ccbbc

@end


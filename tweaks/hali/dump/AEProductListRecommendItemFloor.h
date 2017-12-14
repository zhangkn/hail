//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETileAdapterFloor.h"

@class M80AttributedLabel, UIImageView, UILabel;

@interface AEProductListRecommendItemFloor : AETileAdapterFloor
{
    UIImageView *_productImageView;	// 8 = 0x8
    UILabel *_priceLabel;	// 16 = 0x10
    M80AttributedLabel *_subjectLabel;	// 24 = 0x18
}

+ (Class)modelClass;	// IMP=0x0000000100c3f414
+ (id)identifier;	// IMP=0x0000000100c3f3e8
@property(retain, nonatomic) M80AttributedLabel *subjectLabel; // @synthesize subjectLabel=_subjectLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UIImageView *productImageView; // @synthesize productImageView=_productImageView;
- (void).cxx_destruct;	// IMP=0x0000000100c40b2c
- (_Bool)renderWithTile:(id)arg1;	// IMP=0x0000000100c4044c
- (void)configConstraints;	// IMP=0x0000000100c40448
- (void)configComponents;	// IMP=0x0000000100c40004
- (id)initFloor;	// IMP=0x0000000100c3ff9c
- (void)private_layoutPrice;	// IMP=0x0000000100c3fc28
- (void)private_layoutSubject;	// IMP=0x0000000100c3f844
- (void)private_layoutMainImage;	// IMP=0x0000000100c3f428

@end

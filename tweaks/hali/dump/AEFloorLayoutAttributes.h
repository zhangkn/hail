//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewLayoutAttributes.h"

#import "NSCopying.h"

@class AEFloorLayoutAttributesOptions, NSString, UIColor;

@interface AEFloorLayoutAttributes : UICollectionViewLayoutAttributes <NSCopying>
{
    long long _optionKind;	// 8 = 0x8
    AEFloorLayoutAttributesOptions *_options;	// 16 = 0x10
    UIColor *_decorationColor;	// 24 = 0x18
    NSString *_decorationImageUrl;	// 32 = 0x20
    struct UIEdgeInsets _inset;	// 40 = 0x28
}

+ (id)layoutAttributesWithOptions:(id)arg1;	// IMP=0x00000001009bd8d4
+ (id)elementKindDescriptionWithKind:(long long)arg1;	// IMP=0x00000001009bd564
+ (long long)elementKindWithDesciption:(id)arg1;	// IMP=0x00000001009bd47c
+ (id)multiColumnCellAttributes;	// IMP=0x00000001009bde48
+ (id)sectionHeaderAttributes;	// IMP=0x00000001009bdddc
+ (id)collectionHeaderAttributes;	// IMP=0x00000001009bdd70
+ (id)singleColumnCellAttributes;	// IMP=0x00000001009bdd04
@property(copy, nonatomic) NSString *decorationImageUrl; // @synthesize decorationImageUrl=_decorationImageUrl;
@property(retain, nonatomic) UIColor *decorationColor; // @synthesize decorationColor=_decorationColor;
@property(nonatomic) struct UIEdgeInsets inset; // @synthesize inset=_inset;
@property(retain, nonatomic) AEFloorLayoutAttributesOptions *options; // @synthesize options=_options;
@property(nonatomic) long long optionKind; // @synthesize optionKind=_optionKind;
- (void).cxx_destruct;	// IMP=0x00000001009bdcb0
- (id)description;	// IMP=0x00000001009bdb80
- (unsigned long long)representedElementCategory;	// IMP=0x00000001009bdb5c
- (id)representedElementKind;	// IMP=0x00000001009bdb20
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001009bd60c
- (_Bool)isMatch:(id)arg1 inCollectionView:(id)arg2;	// IMP=0x00000001009e2214

@end


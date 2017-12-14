//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class AEPhotoSearchItemDTO, NSString, NSURL, UIImageView, UILabel;

@interface AEPhotoSearchListCell : UICollectionViewCell
{
    UIImageView *_itemImageView;	// 8 = 0x8
    UILabel *_itemPrice;	// 16 = 0x10
    UIImageView *_addToWishList;	// 24 = 0x18
    NSURL *_itemImageURL;	// 32 = 0x20
    AEPhotoSearchItemDTO *_itemDTO;	// 40 = 0x28
    NSString *_categoryId;	// 48 = 0x30
}

+ (double)heightForDisplayWidth:(double)arg1;	// IMP=0x0000000100c837d0
@property(copy, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
@property(retain, nonatomic) AEPhotoSearchItemDTO *itemDTO; // @synthesize itemDTO=_itemDTO;
@property(retain, nonatomic) NSURL *itemImageURL; // @synthesize itemImageURL=_itemImageURL;
@property(retain, nonatomic) UIImageView *addToWishList; // @synthesize addToWishList=_addToWishList;
@property(retain, nonatomic) UILabel *itemPrice; // @synthesize itemPrice=_itemPrice;
@property(retain, nonatomic) UIImageView *itemImageView; // @synthesize itemImageView=_itemImageView;
- (void).cxx_destruct;	// IMP=0x0000000100c85b68
- (void)doAddToWishListTappedButtonAnimation;	// IMP=0x0000000100c85854
- (void)removeFromWishList:(id)arg1;	// IMP=0x0000000100c855d4
- (void)addToWishList:(id)arg1;	// IMP=0x0000000100c85204
- (void)wishListNotificationFromDetail:(id)arg1;	// IMP=0x0000000100c84f78
- (void)loadImage;	// IMP=0x0000000100c84eac
- (void)bindModel:(id)arg1;	// IMP=0x0000000100c84724
- (void)configComponents;	// IMP=0x0000000100c83b58
- (void)prepareForReuse;	// IMP=0x0000000100c83ae0
- (void)dealloc;	// IMP=0x0000000100c83a64
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100c837e0

@end

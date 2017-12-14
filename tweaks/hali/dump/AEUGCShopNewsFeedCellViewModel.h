//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AEUGCComponentHeaderViewModel.h"
#import "AEUGCComponentImageCollectionViewModel.h"
#import "AEUGCComponentPromotionsViewModel.h"
#import "AEUGCShopNewsLiveCellViewModel.h"
#import "AEUGCShopNewsNewCellViewModel.h"
#import "AEUGCShopNewsPicTextCellViewModel.h"
#import "AEUGCShopNewsPromotionCellViewModel.h"

@class AEUGCShopNewsFeedItemDTO, AIFCountry, NSArray, NSAttributedString, NSMutableArray, NSMutableDictionary, NSString, NSURL;

@interface AEUGCShopNewsFeedCellViewModel : NSObject <AEUGCShopNewsNewCellViewModel, AEUGCShopNewsPicTextCellViewModel, AEUGCShopNewsPromotionCellViewModel, AEUGCShopNewsLiveCellViewModel, AEUGCComponentHeaderViewModel, AEUGCComponentImageCollectionViewModel, AEUGCComponentPromotionsViewModel>
{
    AEUGCShopNewsFeedItemDTO *_dto;	// 8 = 0x8
    NSMutableArray *_productImageUrls;	// 16 = 0x10
    _Bool _showOrigin;	// 24 = 0x18
    NSMutableDictionary *_extendInfo;	// 32 = 0x20
    _Bool _supportFollowAction;	// 40 = 0x28
    NSMutableArray *_productViewModels;	// 48 = 0x30
}

+ (id)feedCellViewModelsWithArray:(id)arg1;	// IMP=0x0000000100f0992c
@property(nonatomic) _Bool supportFollowAction; // @synthesize supportFollowAction=_supportFollowAction;
@property(readonly, nonatomic) NSMutableArray *productViewModels; // @synthesize productViewModels=_productViewModels;
@property(readonly, nonatomic) _Bool showOrigin; // @synthesize showOrigin=_showOrigin;
- (void).cxx_destruct;	// IMP=0x0000000100f09734
@property(readonly, copy, nonatomic) NSString *commentCountText;
@property(readonly, copy, nonatomic) NSString *likeCountText;
@property(readonly, nonatomic) _Bool isLiked;
@property(readonly, nonatomic) _Bool canTranslate;
@property(readonly, nonatomic) _Bool showActionView;
@property(readonly, nonatomic) _Bool hasCoupon;
- (_Bool)living;	// IMP=0x0000000100f093ac
- (id)backgroundImageUrlStr;	// IMP=0x0000000100f092f8
@property(readonly, copy, nonatomic) NSString *promotionsDescripitonText;
@property(readonly, nonatomic) __weak NSArray *promotionItemViewModels;
- (double)picHeightWithWidht:(double)arg1;	// IMP=0x0000000100f09158
@property(readonly, nonatomic) struct UIEdgeInsets imageViewMargin;
@property(readonly, nonatomic) NSString *couponCurrencyText;
@property(readonly, nonatomic) NSString *couponText;
@property(readonly, copy, nonatomic) NSString *contentText;
@property(readonly, copy, nonatomic) NSString *titleText;
@property(readonly, nonatomic) NSURL *backgroundImageUrl;
@property(readonly, copy, nonatomic) NSAttributedString *tagsAttributedText;
@property(readonly, nonatomic) NSAttributedString *imagesDescriptionAttributedText;
@property(readonly, nonatomic) NSArray *imageUrls;
@property(readonly, nonatomic) __weak id <AEUGCComponentImageCollectionViewModel> contentViewModel;
@property(readonly, nonatomic) _Bool isFollowed;
@property(readonly, copy, nonatomic) NSString *subtitleLabelText;
@property(readonly, copy, nonatomic) NSString *languageText;
@property(readonly, copy, nonatomic) NSString *titleLabelText;
@property(readonly, copy, nonatomic) NSString *avatarImageUrl;
@property(nonatomic) unsigned long long actionViewType;
@property(readonly, nonatomic) long long contentViewType;
@property(readonly, nonatomic) long long leftViewType;
@property(readonly, nonatomic) __weak id <AEUGCComponentHeaderViewModel> headViewModel;
@property(readonly, nonatomic) _Bool isRecommend;
- (void)changeCommentCount:(long long)arg1;	// IMP=0x0000000100f0835c
- (void)changeLikeStatus:(_Bool)arg1;	// IMP=0x0000000100f082b8
- (void)changeFollowStatus:(_Bool)arg1;	// IMP=0x0000000100f0819c
- (void)like:(CDUnknownBlockType)arg1;	// IMP=0x0000000100f07f18
- (void)translate;	// IMP=0x0000000100f07ee0
- (void)follow:(CDUnknownBlockType)arg1;	// IMP=0x0000000100f07904
@property(readonly, nonatomic) _Bool supportFloor;
@property(readonly, nonatomic) _Bool isOfficial;
@property(readonly, copy, nonatomic) NSString *storeId;
@property(readonly, copy, nonatomic) NSString *sellerMemberSeq;
@property(readonly, copy, nonatomic) NSString *postId;
@property(readonly, nonatomic) unsigned long long appType;
@property(readonly, nonatomic) unsigned long long cellType;
- (id)initWithDTO:(id)arg1;	// IMP=0x0000000100f07204
- (id)init;	// IMP=0x0000000100f07160
@property(readonly, copy, nonatomic) NSString *imageUrl;
@property(readonly, copy, nonatomic) NSString *cmdUrl;
@property(readonly, nonatomic) unsigned long long position;
- (id)initWithDic:(id)arg1;	// IMP=0x0000000100f0979c

// Remaining properties
@property(readonly, nonatomic) NSString *buyerLevelStr;
@property(readonly, copy, nonatomic) NSAttributedString *contentAttributedText;
@property(readonly, nonatomic) AIFCountry *country;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned long long gender;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *imagesDescriptionText;
@property(readonly, copy, nonatomic) NSString *promotionsTitleText;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *tipsLableText;
@property(readonly, nonatomic) _Bool topLineHidden;

@end

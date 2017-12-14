//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AEUGCComponentPromotionsViewModel.h"
#import "AEUGCStoreClub1111CardCellViewModel.h"
#import "AEUGCStoreClubCardActionViewModel.h"
#import "AEUGCStoreClubCardBannerViewModel.h"
#import "AEUGCStoreClubCardVoteViewModel.h"

@class AEUGCStoreClub1111FeedItemDTO, NSArray, NSAttributedString, NSMutableArray, NSString;

@interface AEUGCStoreClub1111CellViewModel : NSObject <AEUGCStoreClub1111CardCellViewModel, AEUGCStoreClubCardBannerViewModel, AEUGCStoreClubCardVoteViewModel, AEUGCComponentPromotionsViewModel, AEUGCStoreClubCardActionViewModel>
{
    AEUGCStoreClub1111FeedItemDTO *_dto;	// 8 = 0x8
    NSMutableArray *_productViewModels;	// 16 = 0x10
    long long _momentType;	// 24 = 0x18
}

+ (id)feedCellViewModelsWithArray:(id)arg1;	// IMP=0x0000000100f04254
+ (id)mock;	// IMP=0x0000000100f044a0
@property(nonatomic) long long momentType; // @synthesize momentType=_momentType;
@property(readonly, nonatomic) NSMutableArray *productViewModels; // @synthesize productViewModels=_productViewModels;
- (void).cxx_destruct;	// IMP=0x0000000100f04214
- (void)vote:(CDUnknownBlockType)arg1;	// IMP=0x0000000100f03de0
- (long long)maxVoteCount;	// IMP=0x0000000100f03d54
@property(readonly, copy, nonatomic) NSString *storeName;
@property(readonly, nonatomic) long long voteCount;
@property(readonly, nonatomic) _Bool isVoted;
@property(readonly, nonatomic) _Bool supportVote;
@property(readonly, nonatomic) long long type;
@property(readonly, nonatomic) __weak id <AEUGCStoreClubCardActionViewModel> actionViewModel;
@property(readonly, copy, nonatomic) NSString *promotionsTitleText;
@property(readonly, nonatomic) __weak NSArray *promotionItemViewModels;
@property(readonly, nonatomic) __weak id <AEUGCComponentPromotionsViewModel> productsViewModel;
@property(readonly, nonatomic) NSArray *names;
@property(readonly, nonatomic) NSArray *awards;
@property(readonly, nonatomic) NSArray *voteCounts;
@property(readonly, nonatomic) double progress;
@property(readonly, nonatomic) __weak id <AEUGCStoreClubCardVoteViewModel> voteViewModel;
@property(readonly, nonatomic) NSString *iconImageUrl;
@property(readonly, nonatomic) long long ranking;
@property(readonly, nonatomic) NSString *bannerImageUrl;
@property(readonly, nonatomic) __weak id <AEUGCStoreClubCardBannerViewModel> bannerViewModel;
@property(readonly, nonatomic) _Bool isFollowByMe;
@property(readonly, nonatomic) long long appType;
@property(readonly, copy, nonatomic) NSString *postId;
@property(readonly, copy, nonatomic) NSString *storeId;
- (id)initWithDTO:(id)arg1;	// IMP=0x0000000100f02fcc

// Remaining properties
@property(readonly, nonatomic) NSArray *awardTexts;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *promotionsDescripitonText;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSAttributedString *tagsAttributedText;

@end

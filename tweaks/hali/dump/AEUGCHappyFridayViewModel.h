//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AEUGCHFBannerCollectionViewCellViewModel, AEUGCHFCouponCollectionViewCellViewModel, AEUGCHFDataModel, AEUGCHFNewThemeCollectionViewCellViewModel, NSMutableArray, NSString;

@interface AEUGCHappyFridayViewModel : NSObject
{
    _Bool _isLoading;	// 8 = 0x8
    _Bool _hasNext;	// 9 = 0x9
    AEUGCHFDataModel *_currentDataModel;	// 16 = 0x10
    AEUGCHFBannerCollectionViewCellViewModel *_bannerViewModel;	// 24 = 0x18
    AEUGCHFNewThemeCollectionViewCellViewModel *_curThemeCellViewModel;	// 32 = 0x20
    AEUGCHFNewThemeCollectionViewCellViewModel *_preThemeCellViewModel;	// 40 = 0x28
    AEUGCHFCouponCollectionViewCellViewModel *_couponCellViewModel;	// 48 = 0x30
    NSMutableArray *_winnerCellsViewModel;	// 56 = 0x38
    NSMutableArray *_bestPostCellViewModel;	// 64 = 0x40
    NSMutableArray *_bestPostCellViewListModel;	// 72 = 0x48
    NSString *_ruleId;	// 80 = 0x50
    NSString *_nextStartRowKey;	// 88 = 0x58
}

@property(retain, nonatomic) NSString *nextStartRowKey; // @synthesize nextStartRowKey=_nextStartRowKey;
@property(nonatomic) _Bool hasNext; // @synthesize hasNext=_hasNext;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) NSString *ruleId; // @synthesize ruleId=_ruleId;
@property(retain, nonatomic) NSMutableArray *bestPostCellViewListModel; // @synthesize bestPostCellViewListModel=_bestPostCellViewListModel;
@property(retain, nonatomic) NSMutableArray *bestPostCellViewModel; // @synthesize bestPostCellViewModel=_bestPostCellViewModel;
@property(retain, nonatomic) NSMutableArray *winnerCellsViewModel; // @synthesize winnerCellsViewModel=_winnerCellsViewModel;
@property(retain, nonatomic) AEUGCHFCouponCollectionViewCellViewModel *couponCellViewModel; // @synthesize couponCellViewModel=_couponCellViewModel;
@property(retain, nonatomic) AEUGCHFNewThemeCollectionViewCellViewModel *preThemeCellViewModel; // @synthesize preThemeCellViewModel=_preThemeCellViewModel;
@property(retain, nonatomic) AEUGCHFNewThemeCollectionViewCellViewModel *curThemeCellViewModel; // @synthesize curThemeCellViewModel=_curThemeCellViewModel;
@property(retain, nonatomic) AEUGCHFBannerCollectionViewCellViewModel *bannerViewModel; // @synthesize bannerViewModel=_bannerViewModel;
@property(retain, nonatomic) AEUGCHFDataModel *currentDataModel; // @synthesize currentDataModel=_currentDataModel;
- (void).cxx_destruct;	// IMP=0x00000001006ad6e4
- (void)getCoupon:(CDUnknownBlockType)arg1;	// IMP=0x00000001006acea4
- (void)loadMoreData:(CDUnknownBlockType)arg1;	// IMP=0x00000001006acb14
- (void)requestBestPostList:(CDUnknownBlockType)arg1;	// IMP=0x00000001006ac818
- (void)requestWinnerPostList:(CDUnknownBlockType)arg1;	// IMP=0x00000001006ac5b0
- (void)changeCommentCountWithPostId:(id)arg1 count:(long long)arg2;	// IMP=0x00000001006ac254
- (void)likeWith:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001006abf7c
- (void)translateWithCellViewModel:(id)arg1;	// IMP=0x00000001006abf20
- (void)appendBestPost:(id)arg1;	// IMP=0x00000001006abd48
- (void)converBestPost:(id)arg1;	// IMP=0x00000001006aba8c
- (void)converWinnerPost:(id)arg1;	// IMP=0x00000001006ab784
- (void)coverDataToViewModel;	// IMP=0x00000001006ab520
- (void)loadData:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001006ab200
- (id)init;	// IMP=0x00000001006ab08c

@end

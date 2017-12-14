//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AESearchAlbumQuery, AESearchQuery, NSString;

@protocol AESearchServiceProtocol <NSObject>
- (void)requestAlbumWithQuery:(AESearchAlbumQuery *)arg1 complete:(void (^)(_Bool, AESearchResultDTO *, NSError *, NSString *))arg2;
- (void)requestStoreSearchProductWithQuery:(AESearchQuery *)arg1 complete:(void (^)(_Bool, AESearchResultDTO *, NSError *, NSString *))arg2;
- (void)requestSearchProductWithQuery:(AESearchQuery *)arg1 complete:(void (^)(_Bool, AESearchResultDTO *, NSError *, NSString *))arg2;
- (void)serachAppleZoneProductsWithStreamID:(NSString *)arg1 tagName:(NSString *)arg2 pageNumber:(int)arg3 tagIds:(NSString *)arg4 complete:(void (^)(_Bool, AEIOSProductSearchResultDTO *, NSError *))arg5;
- (void)searchPlaceHoderWithClientType:(NSString *)arg1 complete:(void (^)(_Bool, AESearchPlaceHolderDTO *, NSError *))arg2;
- (void)getSearchSuggestion:(NSString *)arg1 complete:(void (^)(_Bool, AESearchSuggestionDTO *, NSError *))arg2;
@end

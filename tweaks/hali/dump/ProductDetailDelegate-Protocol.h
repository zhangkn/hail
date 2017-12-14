//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSError, NSString, ProductDetailDTO, ProductDetailSellerInfoDTO, ProductDetailVouchorsStoreListDTO, ProductService, SKU;

@protocol ProductDetailDelegate <NSObject>

@optional
- (void)productRecommendedItemsLoaded:(ProductService *)arg1 scene:(NSString *)arg2 isSuccess:(_Bool)arg3 result:(NSArray *)arg4 error:(NSError *)arg5;
- (void)productVouchersLoaded:(ProductService *)arg1 isSuccess:(_Bool)arg2 page:(NSString *)arg3 result:(ProductDetailVouchorsStoreListDTO *)arg4 error:(NSError *)arg5;
- (void)productDetailStoreInfoLoaded:(ProductService *)arg1 isSuccess:(_Bool)arg2 result:(ProductDetailSellerInfoDTO *)arg3 error:(NSError *)arg4;
- (void)productSKUListDidLoaded:(ProductService *)arg1 isSuccess:(_Bool)arg2 result:(NSArray *)arg3 errorMessage:(NSError *)arg4;
- (void)productSKUPriceDidLoaded:(ProductService *)arg1 isSuccess:(_Bool)arg2 result:(SKU *)arg3 errorMessage:(NSError *)arg4;
- (void)productDescriptionDidLoaded:(ProductService *)arg1 isSuccess:(_Bool)arg2 result:(NSString *)arg3 errorMessage:(NSError *)arg4;
- (void)productDetailInfoLoaded:(ProductService *)arg1 isSuccess:(_Bool)arg2 result:(ProductDetailDTO *)arg3 errorMessage:(NSError *)arg4;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AEUGCVenueProductPickerCellViewModel.h"

@class AEUGCVenueRecommendProductDTO, NSArray, NSString;

@interface AEUGCVenueProductPickerCellViewModel : NSObject <AEUGCVenueProductPickerCellViewModel>
{
    AEUGCVenueRecommendProductDTO *_dto;	// 8 = 0x8
    NSString *productItemUrl;	// 16 = 0x10
    NSArray *bloggers;	// 24 = 0x18
    NSString *productImageUrl;	// 32 = 0x20
    NSString *relatedPostUrl;	// 40 = 0x28
    NSString *price;	// 48 = 0x30
    NSString *originalPrice;	// 56 = 0x38
}

@property(retain, nonatomic) NSString *originalPrice; // @synthesize originalPrice;
@property(retain, nonatomic) NSString *price; // @synthesize price;
@property(retain, nonatomic) NSString *relatedPostUrl; // @synthesize relatedPostUrl;
@property(retain, nonatomic) NSString *productImageUrl; // @synthesize productImageUrl;
@property(retain, nonatomic) NSArray *bloggers; // @synthesize bloggers;
@property(retain, nonatomic) NSString *productItemUrl; // @synthesize productItemUrl;
- (void).cxx_destruct;	// IMP=0x00000001006cbfec
@property(readonly, nonatomic) NSString *postId;
@property(readonly, nonatomic) NSString *productId;
- (id)initWithRecommendProductDTO:(id)arg1;	// IMP=0x00000001006cb88c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

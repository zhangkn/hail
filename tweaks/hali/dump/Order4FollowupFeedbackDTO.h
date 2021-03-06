//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AEOrderViewListDTO, NSArray, NSString;

@interface Order4FollowupFeedbackDTO : NSObject
{
    NSArray *_evaluationsInParentOrder;	// 8 = 0x8
    AEOrderViewListDTO *_order;	// 16 = 0x10
    NSString *_evaluationId;	// 24 = 0x18
    NSString *_productSmallPhotoUrl;	// 32 = 0x20
    NSString *_parentOrderId;	// 40 = 0x28
    NSString *_childOrderId;	// 48 = 0x30
    NSString *_sellerAccountId;	// 56 = 0x38
    NSString *_productName;	// 64 = 0x40
    NSString *_buyerAccountId;	// 72 = 0x48
}

@property(retain, nonatomic) NSString *buyerAccountId; // @synthesize buyerAccountId=_buyerAccountId;
@property(retain, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(retain, nonatomic) NSString *sellerAccountId; // @synthesize sellerAccountId=_sellerAccountId;
@property(retain, nonatomic) NSString *childOrderId; // @synthesize childOrderId=_childOrderId;
@property(retain, nonatomic) NSString *parentOrderId; // @synthesize parentOrderId=_parentOrderId;
@property(retain, nonatomic) NSString *productSmallPhotoUrl; // @synthesize productSmallPhotoUrl=_productSmallPhotoUrl;
@property(retain, nonatomic) NSString *evaluationId; // @synthesize evaluationId=_evaluationId;
@property(retain, nonatomic) AEOrderViewListDTO *order; // @synthesize order=_order;
@property(retain, nonatomic) NSArray *evaluationsInParentOrder; // @synthesize evaluationsInParentOrder=_evaluationsInParentOrder;
- (void).cxx_destruct;	// IMP=0x00000001000da9bc

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AEMoneyDTO, NSArray, NSString;

@interface AEOrderListSubListDTO : NSObject
{
    _Bool _canOpenDispute;	// 8 = 0x8
    _Bool _showDisputeDetail;	// 9 = 0x9
    _Bool _canSubmitWarranty;	// 10 = 0xa
    _Bool _canAdditionalEval;	// 11 = 0xb
    _Bool _canPhotoReview;	// 12 = 0xc
    _Bool _showRefundInfo;	// 13 = 0xd
    NSString *_subOrderId;	// 16 = 0x10
    NSString *_productId;	// 24 = 0x18
    NSString *_productName;	// 32 = 0x20
    NSString *_parentId;	// 40 = 0x28
    NSString *_smallPhotoFullPath;	// 48 = 0x30
    long long _productCount;	// 56 = 0x38
    AEMoneyDTO *_productBuyerLocalPrice;	// 64 = 0x40
    NSArray *_productSku;	// 72 = 0x48
    NSString *_subOrderStatus;	// 80 = 0x50
    NSString *_openDisputeUrl;	// 88 = 0x58
    NSString *_disputeDetailUrl;	// 96 = 0x60
    NSString *_disputeIssueStatus;	// 104 = 0x68
    NSString *_warrantyTypeName;	// 112 = 0x70
    NSString *_warrantyUrl;	// 120 = 0x78
    NSString *_snapshotId;	// 128 = 0x80
    NSString *_snapshotUrl;	// 136 = 0x88
    NSString *_productSkuStr;	// 144 = 0x90
    NSString *_productBuyerLocalPriceStr;	// 152 = 0x98
}

@property(retain, nonatomic) NSString *productBuyerLocalPriceStr; // @synthesize productBuyerLocalPriceStr=_productBuyerLocalPriceStr;
@property(retain, nonatomic) NSString *productSkuStr; // @synthesize productSkuStr=_productSkuStr;
@property(nonatomic) _Bool showRefundInfo; // @synthesize showRefundInfo=_showRefundInfo;
@property(copy, nonatomic) NSString *snapshotUrl; // @synthesize snapshotUrl=_snapshotUrl;
@property(copy, nonatomic) NSString *snapshotId; // @synthesize snapshotId=_snapshotId;
@property(nonatomic) _Bool canPhotoReview; // @synthesize canPhotoReview=_canPhotoReview;
@property(nonatomic) _Bool canAdditionalEval; // @synthesize canAdditionalEval=_canAdditionalEval;
@property(copy, nonatomic) NSString *warrantyUrl; // @synthesize warrantyUrl=_warrantyUrl;
@property(nonatomic) _Bool canSubmitWarranty; // @synthesize canSubmitWarranty=_canSubmitWarranty;
@property(copy, nonatomic) NSString *warrantyTypeName; // @synthesize warrantyTypeName=_warrantyTypeName;
@property(copy, nonatomic) NSString *disputeIssueStatus; // @synthesize disputeIssueStatus=_disputeIssueStatus;
@property(copy, nonatomic) NSString *disputeDetailUrl; // @synthesize disputeDetailUrl=_disputeDetailUrl;
@property(copy, nonatomic) NSString *openDisputeUrl; // @synthesize openDisputeUrl=_openDisputeUrl;
@property(nonatomic) _Bool showDisputeDetail; // @synthesize showDisputeDetail=_showDisputeDetail;
@property(nonatomic) _Bool canOpenDispute; // @synthesize canOpenDispute=_canOpenDispute;
@property(copy, nonatomic) NSString *subOrderStatus; // @synthesize subOrderStatus=_subOrderStatus;
@property(retain, nonatomic) NSArray *productSku; // @synthesize productSku=_productSku;
@property(retain, nonatomic) AEMoneyDTO *productBuyerLocalPrice; // @synthesize productBuyerLocalPrice=_productBuyerLocalPrice;
@property(nonatomic) long long productCount; // @synthesize productCount=_productCount;
@property(copy, nonatomic) NSString *smallPhotoFullPath; // @synthesize smallPhotoFullPath=_smallPhotoFullPath;
@property(copy, nonatomic) NSString *parentId; // @synthesize parentId=_parentId;
@property(copy, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(copy, nonatomic) NSString *subOrderId; // @synthesize subOrderId=_subOrderId;
- (void).cxx_destruct;	// IMP=0x00000001001f4ef0

@end


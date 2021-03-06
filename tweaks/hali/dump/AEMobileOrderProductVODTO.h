//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AEMoneyDTO, AEVoucherInfoDTO, NSArray, NSDictionary, NSString;

@interface AEMobileOrderProductVODTO : NSObject
{
    _Bool _canSubmitIssue;	// 8 = 0x8
    _Bool _canOpenDispute;	// 9 = 0x9
    _Bool _showDisputeDetail;	// 10 = 0xa
    _Bool _canSubmitWarranty;	// 11 = 0xb
    _Bool _canAdditionalEval;	// 12 = 0xc
    _Bool _canPhotoReview;	// 13 = 0xd
    _Bool _showRefundInfo;	// 14 = 0xe
    int _goodsPrepareTime;	// 16 = 0x10
    NSString *_productName;	// 24 = 0x18
    NSString *_siteProductname;	// 32 = 0x20
    NSString *_productSnapUrl;	// 40 = 0x28
    NSString *_productImgUrl;	// 48 = 0x30
    NSDictionary *_skuProductAttributes;	// 56 = 0x38
    NSDictionary *_ppProductAttributes;	// 64 = 0x40
    NSString *_productStandard;	// 72 = 0x48
    long long _productCount;	// 80 = 0x50
    NSString *_productUnit;	// 88 = 0x58
    AEMoneyDTO *_productUnitPrice;	// 96 = 0x60
    AEMoneyDTO *_productUnitPriceBuyerLocal;	// 104 = 0x68
    NSString *_sonOrderStatus;	// 112 = 0x70
    NSString *_issueStatus;	// 120 = 0x78
    NSString *_showStatus;	// 128 = 0x80
    NSString *_fundStatus;	// 136 = 0x88
    AEMoneyDTO *_totalProductAmount;	// 144 = 0x90
    AEMoneyDTO *_totalProductAmountBuyerLocal;	// 152 = 0x98
    NSString *_childId;	// 160 = 0xa0
    NSString *_productId;	// 168 = 0xa8
    NSString *_buyerSignerFirstName;	// 176 = 0xb0
    NSString *_buyerSignerLastName;	// 184 = 0xb8
    NSString *_sellerSignerFirstName;	// 192 = 0xc0
    NSString *_sellerSignerLastName;	// 200 = 0xc8
    NSString *_logisticsType;	// 208 = 0xd0
    NSString *_logisticsServiceName;	// 216 = 0xd8
    AEMoneyDTO *_logisticsAmount;	// 224 = 0xe0
    NSString *_deliveryTime;	// 232 = 0xe8
    NSString *_sendGoodsTime;	// 240 = 0xf0
    NSString *_orderId;	// 248 = 0xf8
    NSString *_skuCode;	// 256 = 0x100
    NSString *_issueMode;	// 264 = 0x108
    NSString *_memo;	// 272 = 0x110
    NSString *_skuImageUrl;	// 280 = 0x118
    NSString *_orderStatus;	// 288 = 0x120
    NSString *_gmtTradeEnd;	// 296 = 0x128
    NSString *_logisticsStatus;	// 304 = 0x130
    NSString *_endReason;	// 312 = 0x138
    NSString *_submitDispute;	// 320 = 0x140
    NSString *_siteLanguage;	// 328 = 0x148
    NSString *_showEndReason;	// 336 = 0x150
    NSString *_gmtTradeEndString;	// 344 = 0x158
    NSString *_sendGoodsTimeString;	// 352 = 0x160
    NSArray *_productSku;	// 360 = 0x168
    NSString *_reminderCopywriting;	// 368 = 0x170
    NSString *_openDisputeUrl;	// 376 = 0x178
    NSString *_disputeDetailUrl;	// 384 = 0x180
    NSString *_disputeIssueStatus;	// 392 = 0x188
    NSString *_warrantyTypeName;	// 400 = 0x190
    NSString *_warrantyUrl;	// 408 = 0x198
    NSString *_useIntroduction;	// 416 = 0x1a0
    NSString *_availableCities;	// 424 = 0x1a8
    AEVoucherInfoDTO *_voucherInfo;	// 432 = 0x1b0
    NSString *_canOpenDisputeReminder;	// 440 = 0x1b8
}

@property(nonatomic) _Bool showRefundInfo; // @synthesize showRefundInfo=_showRefundInfo;
@property(retain, nonatomic) NSString *canOpenDisputeReminder; // @synthesize canOpenDisputeReminder=_canOpenDisputeReminder;
@property(nonatomic) _Bool canPhotoReview; // @synthesize canPhotoReview=_canPhotoReview;
@property(nonatomic) _Bool canAdditionalEval; // @synthesize canAdditionalEval=_canAdditionalEval;
@property(retain, nonatomic) AEVoucherInfoDTO *voucherInfo; // @synthesize voucherInfo=_voucherInfo;
@property(retain, nonatomic) NSString *availableCities; // @synthesize availableCities=_availableCities;
@property(retain, nonatomic) NSString *useIntroduction; // @synthesize useIntroduction=_useIntroduction;
@property(copy, nonatomic) NSString *warrantyUrl; // @synthesize warrantyUrl=_warrantyUrl;
@property(nonatomic) _Bool canSubmitWarranty; // @synthesize canSubmitWarranty=_canSubmitWarranty;
@property(copy, nonatomic) NSString *warrantyTypeName; // @synthesize warrantyTypeName=_warrantyTypeName;
@property(copy, nonatomic) NSString *disputeIssueStatus; // @synthesize disputeIssueStatus=_disputeIssueStatus;
@property(copy, nonatomic) NSString *disputeDetailUrl; // @synthesize disputeDetailUrl=_disputeDetailUrl;
@property(copy, nonatomic) NSString *openDisputeUrl; // @synthesize openDisputeUrl=_openDisputeUrl;
@property(nonatomic) _Bool showDisputeDetail; // @synthesize showDisputeDetail=_showDisputeDetail;
@property(nonatomic) _Bool canOpenDispute; // @synthesize canOpenDispute=_canOpenDispute;
@property(copy, nonatomic) NSString *reminderCopywriting; // @synthesize reminderCopywriting=_reminderCopywriting;
@property(retain, nonatomic) NSArray *productSku; // @synthesize productSku=_productSku;
@property(copy, nonatomic) NSString *sendGoodsTimeString; // @synthesize sendGoodsTimeString=_sendGoodsTimeString;
@property(copy, nonatomic) NSString *gmtTradeEndString; // @synthesize gmtTradeEndString=_gmtTradeEndString;
@property(copy, nonatomic) NSString *showEndReason; // @synthesize showEndReason=_showEndReason;
@property(copy, nonatomic) NSString *siteLanguage; // @synthesize siteLanguage=_siteLanguage;
@property(copy, nonatomic) NSString *submitDispute; // @synthesize submitDispute=_submitDispute;
@property(copy, nonatomic) NSString *endReason; // @synthesize endReason=_endReason;
@property(copy, nonatomic) NSString *logisticsStatus; // @synthesize logisticsStatus=_logisticsStatus;
@property(copy, nonatomic) NSString *gmtTradeEnd; // @synthesize gmtTradeEnd=_gmtTradeEnd;
@property(copy, nonatomic) NSString *orderStatus; // @synthesize orderStatus=_orderStatus;
@property(nonatomic) _Bool canSubmitIssue; // @synthesize canSubmitIssue=_canSubmitIssue;
@property(copy, nonatomic) NSString *skuImageUrl; // @synthesize skuImageUrl=_skuImageUrl;
@property(copy, nonatomic) NSString *memo; // @synthesize memo=_memo;
@property(copy, nonatomic) NSString *issueMode; // @synthesize issueMode=_issueMode;
@property(copy, nonatomic) NSString *skuCode; // @synthesize skuCode=_skuCode;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(copy, nonatomic) NSString *sendGoodsTime; // @synthesize sendGoodsTime=_sendGoodsTime;
@property(copy, nonatomic) NSString *deliveryTime; // @synthesize deliveryTime=_deliveryTime;
@property(nonatomic) int goodsPrepareTime; // @synthesize goodsPrepareTime=_goodsPrepareTime;
@property(retain, nonatomic) AEMoneyDTO *logisticsAmount; // @synthesize logisticsAmount=_logisticsAmount;
@property(copy, nonatomic) NSString *logisticsServiceName; // @synthesize logisticsServiceName=_logisticsServiceName;
@property(copy, nonatomic) NSString *logisticsType; // @synthesize logisticsType=_logisticsType;
@property(copy, nonatomic) NSString *sellerSignerLastName; // @synthesize sellerSignerLastName=_sellerSignerLastName;
@property(copy, nonatomic) NSString *sellerSignerFirstName; // @synthesize sellerSignerFirstName=_sellerSignerFirstName;
@property(copy, nonatomic) NSString *buyerSignerLastName; // @synthesize buyerSignerLastName=_buyerSignerLastName;
@property(copy, nonatomic) NSString *buyerSignerFirstName; // @synthesize buyerSignerFirstName=_buyerSignerFirstName;
@property(copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(copy, nonatomic) NSString *childId; // @synthesize childId=_childId;
@property(retain, nonatomic) AEMoneyDTO *totalProductAmountBuyerLocal; // @synthesize totalProductAmountBuyerLocal=_totalProductAmountBuyerLocal;
@property(retain, nonatomic) AEMoneyDTO *totalProductAmount; // @synthesize totalProductAmount=_totalProductAmount;
@property(copy, nonatomic) NSString *fundStatus; // @synthesize fundStatus=_fundStatus;
@property(copy, nonatomic) NSString *showStatus; // @synthesize showStatus=_showStatus;
@property(copy, nonatomic) NSString *issueStatus; // @synthesize issueStatus=_issueStatus;
@property(copy, nonatomic) NSString *sonOrderStatus; // @synthesize sonOrderStatus=_sonOrderStatus;
@property(retain, nonatomic) AEMoneyDTO *productUnitPriceBuyerLocal; // @synthesize productUnitPriceBuyerLocal=_productUnitPriceBuyerLocal;
@property(retain, nonatomic) AEMoneyDTO *productUnitPrice; // @synthesize productUnitPrice=_productUnitPrice;
@property(copy, nonatomic) NSString *productUnit; // @synthesize productUnit=_productUnit;
@property(nonatomic) long long productCount; // @synthesize productCount=_productCount;
@property(copy, nonatomic) NSString *productStandard; // @synthesize productStandard=_productStandard;
@property(retain, nonatomic) NSDictionary *ppProductAttributes; // @synthesize ppProductAttributes=_ppProductAttributes;
@property(retain, nonatomic) NSDictionary *skuProductAttributes; // @synthesize skuProductAttributes=_skuProductAttributes;
@property(copy, nonatomic) NSString *productImgUrl; // @synthesize productImgUrl=_productImgUrl;
@property(copy, nonatomic) NSString *productSnapUrl; // @synthesize productSnapUrl=_productSnapUrl;
@property(copy, nonatomic) NSString *siteProductname; // @synthesize siteProductname=_siteProductname;
@property(copy, nonatomic) NSString *productName; // @synthesize productName=_productName;
- (void).cxx_destruct;	// IMP=0x00000001001f6d2c

@end


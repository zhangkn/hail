//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AEMoneyDTO, NSArray, NSMutableString, NSString;

@interface OrderInfoDTO : NSObject
{
    NSString *orderId;	// 8 = 0x8
    NSString *quantity;	// 16 = 0x10
    NSArray *products;	// 24 = 0x18
    NSMutableString *supplier;	// 32 = 0x20
    NSString *orderDate;	// 40 = 0x28
    NSString *consigner;	// 48 = 0x30
    NSMutableString *address;	// 56 = 0x38
    NSString *displayStatus;	// 64 = 0x40
    NSString *originStatus;	// 72 = 0x48
    NSString *issueStatus;	// 80 = 0x50
    NSString *frozenStatus;	// 88 = 0x58
    NSString *tradeWay;	// 96 = 0x60
    NSString *productId;	// 104 = 0x68
    NSMutableString *productPic;	// 112 = 0x70
    NSString *productSubject;	// 120 = 0x78
    _Bool canEvaluate;	// 128 = 0x80
    _Bool canAdditionalEval;	// 129 = 0x81
    _Bool canPhotoReview;	// 130 = 0x82
    NSString *sellerAdminSeq;	// 136 = 0x88
    _Bool _canTracking;	// 144 = 0x90
    _Bool _canPay;	// 145 = 0x91
    _Bool _canConfirmReceived;	// 146 = 0x92
    AEMoneyDTO *_amount;	// 152 = 0x98
    AEMoneyDTO *_originalAmount;	// 160 = 0xa0
    NSString *_contry;	// 168 = 0xa8
    NSString *_orderSignature;	// 176 = 0xb0
    NSString *_address1;	// 184 = 0xb8
    NSString *_address2;	// 192 = 0xc0
    NSString *_city;	// 200 = 0xc8
    NSString *_province;	// 208 = 0xd0
}

@property(retain, nonatomic) NSString *province; // @synthesize province=_province;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *address2; // @synthesize address2=_address2;
@property(retain, nonatomic) NSString *address1; // @synthesize address1=_address1;
@property(copy, nonatomic) NSString *orderSignature; // @synthesize orderSignature=_orderSignature;
@property(nonatomic) _Bool canConfirmReceived; // @synthesize canConfirmReceived=_canConfirmReceived;
@property(nonatomic) _Bool canPay; // @synthesize canPay=_canPay;
@property(nonatomic) _Bool canTracking; // @synthesize canTracking=_canTracking;
@property(retain, nonatomic) NSString *contry; // @synthesize contry=_contry;
@property(retain, nonatomic) AEMoneyDTO *originalAmount; // @synthesize originalAmount=_originalAmount;
@property(retain, nonatomic) AEMoneyDTO *amount; // @synthesize amount=_amount;
@property(retain, nonatomic) NSString *sellerAdminSeq; // @synthesize sellerAdminSeq;
@property(nonatomic) _Bool canPhotoReview; // @synthesize canPhotoReview;
@property(nonatomic) _Bool canAdditionalEval; // @synthesize canAdditionalEval;
@property(nonatomic) _Bool canEvaluate; // @synthesize canEvaluate;
@property(retain, nonatomic) NSString *frozenStatus; // @synthesize frozenStatus;
@property(retain, nonatomic) NSString *issueStatus; // @synthesize issueStatus;
@property(retain, nonatomic) NSString *productSubject; // @synthesize productSubject;
@property(retain, nonatomic) NSMutableString *productPic; // @synthesize productPic;
@property(retain, nonatomic) NSString *productId; // @synthesize productId;
@property(retain, nonatomic) NSString *tradeWay; // @synthesize tradeWay;
@property(retain, nonatomic) NSString *originStatus; // @synthesize originStatus;
@property(retain, nonatomic) NSString *displayStatus; // @synthesize displayStatus;
@property(retain, nonatomic) NSMutableString *address; // @synthesize address;
@property(retain, nonatomic) NSString *consigner; // @synthesize consigner;
@property(retain, nonatomic) NSString *orderDate; // @synthesize orderDate;
@property(retain, nonatomic) NSMutableString *supplier; // @synthesize supplier;
@property(retain, nonatomic) NSArray *products; // @synthesize products;
@property(retain, nonatomic) NSString *quantity; // @synthesize quantity;
@property(retain, nonatomic) NSString *orderId; // @synthesize orderId;
- (void).cxx_destruct;	// IMP=0x00000001002bb8a8

@end


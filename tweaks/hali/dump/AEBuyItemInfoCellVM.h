//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AETradeComponentModel.h"

@class NSAttributedString, NSNumber, NSString;

@interface AEBuyItemInfoCellVM : AETradeComponentModel
{
    _Bool _needShowMemo;	// 8 = 0x8
    _Bool _isEnabled;	// 9 = 0x9
    NSString *_itemImageUrl;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSAttributedString *_attrPrice;	// 32 = 0x20
    NSString *_skuAttr;	// 40 = 0x28
    NSNumber *_quantity;	// 48 = 0x30
    NSString *_shippingMethod;	// 56 = 0x38
    long long _maxQuantity;	// 64 = 0x40
    NSAttributedString *_accessoryAttrText;	// 72 = 0x48
    NSString *_orderMemo;	// 80 = 0x50
    CDUnknownBlockType _quantityChangedAction;	// 88 = 0x58
    CDUnknownBlockType _shippingBtnClickedAction;	// 96 = 0x60
    CDUnknownBlockType _scrollAction;	// 104 = 0x68
    CDUnknownBlockType _orderMemoUpdateAction;	// 112 = 0x70
}

+ (id)msgTextWithMsg:(id)arg1;	// IMP=0x00000001004875ac
+ (id)buildCellVMWithOrderItemDTO:(id)arg1 engine:(id)arg2;	// IMP=0x0000000100485fe0
@property(copy, nonatomic) CDUnknownBlockType orderMemoUpdateAction; // @synthesize orderMemoUpdateAction=_orderMemoUpdateAction;
@property(copy, nonatomic) CDUnknownBlockType scrollAction; // @synthesize scrollAction=_scrollAction;
@property(copy, nonatomic) CDUnknownBlockType shippingBtnClickedAction; // @synthesize shippingBtnClickedAction=_shippingBtnClickedAction;
@property(copy, nonatomic) CDUnknownBlockType quantityChangedAction; // @synthesize quantityChangedAction=_quantityChangedAction;
@property(retain, nonatomic) NSString *orderMemo; // @synthesize orderMemo=_orderMemo;
@property(retain, nonatomic) NSAttributedString *accessoryAttrText; // @synthesize accessoryAttrText=_accessoryAttrText;
@property(nonatomic) long long maxQuantity; // @synthesize maxQuantity=_maxQuantity;
@property(nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
@property(nonatomic) _Bool needShowMemo; // @synthesize needShowMemo=_needShowMemo;
@property(retain, nonatomic) NSString *shippingMethod; // @synthesize shippingMethod=_shippingMethod;
@property(retain, nonatomic) NSNumber *quantity; // @synthesize quantity=_quantity;
@property(retain, nonatomic) NSString *skuAttr; // @synthesize skuAttr=_skuAttr;
@property(retain, nonatomic) NSAttributedString *attrPrice; // @synthesize attrPrice=_attrPrice;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *itemImageUrl; // @synthesize itemImageUrl=_itemImageUrl;
- (void).cxx_destruct;	// IMP=0x0000000100487c24
- (id)viewClassName;	// IMP=0x0000000100485fb4

@end

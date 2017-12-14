//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface ProductListDTO : NSObject
{
    _Bool _is_favorite;	// 8 = 0x8
    _Bool _is_free_ship;	// 9 = 0x9
    _Bool _is_discount;	// 10 = 0xa
    _Bool _is_offline;	// 11 = 0xb
    int _discount;	// 12 = 0xc
    NSString *_buzz_id;	// 16 = 0x10
    NSString *_product_id;	// 24 = 0x18
    NSString *_service_Type;	// 32 = 0x20
    NSString *_detail_url;	// 40 = 0x28
    NSString *_store_url;	// 48 = 0x30
    NSString *_store_name;	// 56 = 0x38
    NSString *_store_d_url;	// 64 = 0x40
    NSString *_subject;	// 72 = 0x48
    NSString *_gmt_create;	// 80 = 0x50
    NSString *_gmt_modified;	// 88 = 0x58
    NSString *_ws_offline_date;	// 96 = 0x60
    NSString *_image_url;	// 104 = 0x68
    NSString *_gs_icon;	// 112 = 0x70
    NSString *_positive_rate;	// 120 = 0x78
    NSString *_sale_product_total;	// 128 = 0x80
    NSString *_sale_product_3total;	// 136 = 0x88
    NSString *_sale_product_3tranpro;	// 144 = 0x90
    NSString *_credit_level;	// 152 = 0x98
    NSString *_product_unit_by_piece;	// 160 = 0xa0
    NSString *_product_unit;	// 168 = 0xa8
    NSString *_lot_num;	// 176 = 0xb0
    NSString *_lot_num_unit;	// 184 = 0xb8
    NSString *_min_purchase_num;	// 192 = 0xc0
    NSString *_min_order_type;	// 200 = 0xc8
    NSString *_min_product_price;	// 208 = 0xd0
    NSString *_max_product_price;	// 216 = 0xd8
    NSString *_min_pro_price_bef_discount;	// 224 = 0xe0
    NSString *_max_pro_price_bef_discount;	// 232 = 0xe8
    NSString *_min_price_by_piece;	// 240 = 0xf0
    NSString *_max_price_by_piece;	// 248 = 0xf8
    NSString *_min_price_by_piece_bef_discount;	// 256 = 0x100
    NSString *_max_price_by_piece_bef_discount;	// 264 = 0x108
    NSString *_status;	// 272 = 0x110
    NSDate *_maturityDay;	// 280 = 0x118
}

@property(retain, nonatomic) NSDate *maturityDay; // @synthesize maturityDay=_maturityDay;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *max_price_by_piece_bef_discount; // @synthesize max_price_by_piece_bef_discount=_max_price_by_piece_bef_discount;
@property(retain, nonatomic) NSString *min_price_by_piece_bef_discount; // @synthesize min_price_by_piece_bef_discount=_min_price_by_piece_bef_discount;
@property(retain, nonatomic) NSString *max_price_by_piece; // @synthesize max_price_by_piece=_max_price_by_piece;
@property(retain, nonatomic) NSString *min_price_by_piece; // @synthesize min_price_by_piece=_min_price_by_piece;
@property(retain, nonatomic) NSString *max_pro_price_bef_discount; // @synthesize max_pro_price_bef_discount=_max_pro_price_bef_discount;
@property(retain, nonatomic) NSString *min_pro_price_bef_discount; // @synthesize min_pro_price_bef_discount=_min_pro_price_bef_discount;
@property(retain, nonatomic) NSString *max_product_price; // @synthesize max_product_price=_max_product_price;
@property(retain, nonatomic) NSString *min_product_price; // @synthesize min_product_price=_min_product_price;
@property(nonatomic) int discount; // @synthesize discount=_discount;
@property(nonatomic) _Bool is_offline; // @synthesize is_offline=_is_offline;
@property(nonatomic) _Bool is_discount; // @synthesize is_discount=_is_discount;
@property(nonatomic) _Bool is_free_ship; // @synthesize is_free_ship=_is_free_ship;
@property(retain, nonatomic) NSString *min_order_type; // @synthesize min_order_type=_min_order_type;
@property(retain, nonatomic) NSString *min_purchase_num; // @synthesize min_purchase_num=_min_purchase_num;
@property(retain, nonatomic) NSString *lot_num_unit; // @synthesize lot_num_unit=_lot_num_unit;
@property(retain, nonatomic) NSString *lot_num; // @synthesize lot_num=_lot_num;
@property(retain, nonatomic) NSString *product_unit; // @synthesize product_unit=_product_unit;
@property(retain, nonatomic) NSString *product_unit_by_piece; // @synthesize product_unit_by_piece=_product_unit_by_piece;
@property(retain, nonatomic) NSString *credit_level; // @synthesize credit_level=_credit_level;
@property(retain, nonatomic) NSString *sale_product_3tranpro; // @synthesize sale_product_3tranpro=_sale_product_3tranpro;
@property(retain, nonatomic) NSString *sale_product_3total; // @synthesize sale_product_3total=_sale_product_3total;
@property(retain, nonatomic) NSString *sale_product_total; // @synthesize sale_product_total=_sale_product_total;
@property(retain, nonatomic) NSString *positive_rate; // @synthesize positive_rate=_positive_rate;
@property(retain, nonatomic) NSString *gs_icon; // @synthesize gs_icon=_gs_icon;
@property(retain, nonatomic) NSString *image_url; // @synthesize image_url=_image_url;
@property(retain, nonatomic) NSString *ws_offline_date; // @synthesize ws_offline_date=_ws_offline_date;
@property(retain, nonatomic) NSString *gmt_modified; // @synthesize gmt_modified=_gmt_modified;
@property(retain, nonatomic) NSString *gmt_create; // @synthesize gmt_create=_gmt_create;
@property(retain, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(retain, nonatomic) NSString *store_d_url; // @synthesize store_d_url=_store_d_url;
@property(retain, nonatomic) NSString *store_name; // @synthesize store_name=_store_name;
@property(retain, nonatomic) NSString *store_url; // @synthesize store_url=_store_url;
@property(retain, nonatomic) NSString *detail_url; // @synthesize detail_url=_detail_url;
@property(nonatomic) _Bool is_favorite; // @synthesize is_favorite=_is_favorite;
@property(retain, nonatomic) NSString *service_Type; // @synthesize service_Type=_service_Type;
@property(retain, nonatomic) NSString *product_id; // @synthesize product_id=_product_id;
@property(retain, nonatomic) NSString *buzz_id; // @synthesize buzz_id=_buzz_id;
- (void).cxx_destruct;	// IMP=0x0000000100cbe184

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AEOrderItemFreightServiceDTO, AEOrderItemProductDTO, NSArray, NSString;

@interface AEOrderItemDTO : NSObject
{
    _Bool _hasError;	// 8 = 0x8
    _Bool _hasWarning;	// 9 = 0x9
    AEOrderItemProductDTO *_baseProductView;	// 16 = 0x10
    NSArray *_availableFreightServices;	// 24 = 0x18
    AEOrderItemFreightServiceDTO *_recommededService;	// 32 = 0x20
    NSString *_itemMsg;	// 40 = 0x28
    NSString *_orderMemo;	// 48 = 0x30
}

+ (id)objectClassInArray;	// IMP=0x000000010055c350
+ (id)objectWithKeyValues:(id)arg1 context:(id)arg2 error:(id *)arg3;	// IMP=0x000000010055c15c
@property(retain, nonatomic) NSString *orderMemo; // @synthesize orderMemo=_orderMemo;
@property(retain, nonatomic) NSString *itemMsg; // @synthesize itemMsg=_itemMsg;
@property(nonatomic) _Bool hasWarning; // @synthesize hasWarning=_hasWarning;
@property(nonatomic) _Bool hasError; // @synthesize hasError=_hasError;
@property(retain, nonatomic) AEOrderItemFreightServiceDTO *recommededService; // @synthesize recommededService=_recommededService;
@property(retain, nonatomic) NSArray *availableFreightServices; // @synthesize availableFreightServices=_availableFreightServices;
@property(retain, nonatomic) AEOrderItemProductDTO *baseProductView; // @synthesize baseProductView=_baseProductView;
- (void).cxx_destruct;	// IMP=0x000000010055c56c
- (id)productJSONDict;	// IMP=0x000000010055a010
- (id)shippingInfoParameter;	// IMP=0x000000010055a66c

@end

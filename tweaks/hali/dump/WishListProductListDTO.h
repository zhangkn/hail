//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AEBigSaleMarkDTO, NSArray, NSString;

@interface WishListProductListDTO : NSObject
{
    NSArray *_wishList;	// 8 = 0x8
    NSString *_totalItem;	// 16 = 0x10
    NSString *_totalPage;	// 24 = 0x18
    AEBigSaleMarkDTO *_bigSaleMarkDTO;	// 32 = 0x20
}

+ (id)objectClassInArray;	// IMP=0x0000000100c930d4
@property(retain, nonatomic) AEBigSaleMarkDTO *bigSaleMarkDTO; // @synthesize bigSaleMarkDTO=_bigSaleMarkDTO;
@property(retain, nonatomic) NSString *totalPage; // @synthesize totalPage=_totalPage;
@property(retain, nonatomic) NSString *totalItem; // @synthesize totalItem=_totalItem;
@property(retain, nonatomic) NSArray *wishList; // @synthesize wishList=_wishList;
- (void).cxx_destruct;	// IMP=0x0000000100c93268

@end


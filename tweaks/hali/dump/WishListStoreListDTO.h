//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray<WishListStoreDTO>, NSNumber<Optional>;

@interface WishListStoreListDTO : JSONModel
{
    NSNumber<Optional> *_currentPage;	// 8 = 0x8
    NSNumber<Optional> *_pageSize;	// 16 = 0x10
    NSNumber<Optional> *_totalNum;	// 24 = 0x18
    NSArray<WishListStoreDTO> *_resultList;	// 32 = 0x20
}

@property(retain, nonatomic) NSArray<WishListStoreDTO> *resultList; // @synthesize resultList=_resultList;
@property(retain, nonatomic) NSNumber<Optional> *totalNum; // @synthesize totalNum=_totalNum;
@property(retain, nonatomic) NSNumber<Optional> *pageSize; // @synthesize pageSize=_pageSize;
@property(retain, nonatomic) NSNumber<Optional> *currentPage; // @synthesize currentPage=_currentPage;
- (void).cxx_destruct;	// IMP=0x0000000100cbe564

@end


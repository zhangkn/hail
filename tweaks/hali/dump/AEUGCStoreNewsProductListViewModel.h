//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AEUGCShopNewsProductListViewModelProtocol.h"

@class NSMutableArray, NSString;

@interface AEUGCStoreNewsProductListViewModel : NSObject <AEUGCShopNewsProductListViewModelProtocol>
{
    NSString *_sellerMemberSeq;	// 8 = 0x8
    unsigned long long _currentPage;	// 16 = 0x10
    unsigned long long _pageSize;	// 24 = 0x18
    _Bool _hasNext;	// 32 = 0x20
    _Bool _loading;	// 33 = 0x21
    NSMutableArray *_productViewModels;	// 40 = 0x28
}

@property(readonly, nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(readonly, nonatomic) _Bool hasNext; // @synthesize hasNext=_hasNext;
@property(readonly, copy, nonatomic) NSMutableArray *productViewModels; // @synthesize productViewModels=_productViewModels;
- (void).cxx_destruct;	// IMP=0x0000000100ee8ecc
- (void)reloadProductList:(CDUnknownBlockType)arg1;	// IMP=0x0000000100ee8dc4
- (id)converData:(id)arg1;	// IMP=0x0000000100ee8c50
- (void)loadProductList:(CDUnknownBlockType)arg1;	// IMP=0x0000000100ee8828
- (id)initWithParams:(id)arg1;	// IMP=0x0000000100ee8598

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

